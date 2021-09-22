#include <string>
#include <iostream>
#include <zmq.hpp>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Test\n";
    zmq::context_t ctx;
    zmq::socket_t socket(ctx, zmq::socket_type::rep);
    socket.bind("tcp://*:12345");

    // prepare some static data for responses
    const std::string data{"World"};

    while(true){
        zmq::message_t request;

        // receive a request from client
        socket.recv(request, zmq::recv_flags::none);
        std::cout << "Received " << request.to_string() << std::endl;

        // simulate work
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // send the reply to the client
        socket.send(zmq::buffer(data), zmq::send_flags::none);
    }

    return 0;
}
