#include "echo.h"
#include "address.h"

using namespace tiny_muduo;

int main(int argc, char* argv[]) {
    EventLoop loop;
    Address listen_address(argv[1]);
    EchoServer server(&loop, listen_address);
    server.Start();
    loop.Loop();
    return 0;
}