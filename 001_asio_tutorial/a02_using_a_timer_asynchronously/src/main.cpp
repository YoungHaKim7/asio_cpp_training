#include <asio.hpp>
#include <print>

void print(const std::error_code&)
{
    std::print("Hello world");
}

int main(void)
{
    std::print("Hello, Asio");
    asio::io_context io;
    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.async_wait(&print);
    io.run();

    return 0;
}
