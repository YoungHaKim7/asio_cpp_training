#include <asio.hpp>
#include <print>

int main(void)
{
    std::print("Hello world Cpp 26 lang ");
    asio::io_context io;
    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.wait();

    std::print("Hello, Asio");

    return 0;
}
