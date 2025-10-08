#include <asio.hpp>
#include <functional>
#include <print>

void print(const std::error_code&, asio::steady_timer* t, int* count)
{
    if (*count < 5) {
        std::print("{}", (*count));
        ++(*count);
    }
    t->expires_at(t->expiry() + asio::chrono::seconds(1));
    t->async_wait(std::bind(print,
        asio::placeholders::error, t, count));
}

int main(void)
{
    std::print("Hello, Asio");
    int count = 0;
    asio::io_context io;
    asio::steady_timer t(io, asio::chrono::seconds(1));
    t.async_wait(std::bind(print,
        asio::placeholders::error, &t, &count));
    std::print("Final count is {}", count);

    io.run();

    return 0;
}
