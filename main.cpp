#include <string>
#include <iostream>
#include <zmq.hpp>

int main() {
    std::cout << "Test\n";
    zmq::context_t ctx;
    zmq::socket_t sock(ctx, zmq::socket_type::push);
    sock.bind("inproc://test");
    const std::string_view m = "Hello, world";
    sock.send(zmq::buffer(m), zmq::send_flags::dontwait);
    std::cout << "Test2\n";
}
