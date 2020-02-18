#include <string>
#include <cstdlib>

int main(int argc, char **argv) {
    std::string http = argv[1];
    std::string command = "start microsoft-edge:" + http;
    std::system(command.c_str());
    return 0;
}
