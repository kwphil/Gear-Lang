#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
    std::string file_input;   

    // Make sure the file was included
    if(argc < 2) {
        std::cout << "Incorrect usage" << std::endl;
        return 1;
    }

    // Open the file
    std::ifstream file(argv[1]);

    // Make sure the file actually exists
    if(!file.is_open()) {
        std::cout << "File: " << argv[1] << " is not found" << std::endl;
        return 2;
    }

    // Then we can read it
    {
        // Getting the buf out of scope as soon as possible
        std::stringstream buf;
        buf << file.rdbuf();
        file_input = buf;
    }

    std::cout << file_input;

    return EXIT_SUCCESS;
}
