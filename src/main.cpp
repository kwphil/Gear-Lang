#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include <stdlib.h>

// Reads the file into a string
std::string open_file(char* input_file);

int main(int argc, char** argv) {
    std::string file_input;   

    // Make sure the file was included
    if(argc < 2) {
        std::cout << "Incorrect usage" << std::endl;
        return 1;
    }

    std::string file = open_file(argv[1]);

    std::cout << file << std::endl;

    return EXIT_SUCCESS;
}

std::string open_file(char* input_file) {
    std::ifstream file(input_file);
    std::stringstream buf;
    std::string out;

    // Make sure the file actually exists
    if(!file.is_open()) {
        std::cout << "File: " << input_file << " is not found" << std::endl;
        exit(2);
    }

    buf << file.rdbuf();
    out = buf.str();

    return out;
}
