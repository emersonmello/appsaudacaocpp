#include <iostream>
#include<saudacao/saudacao.hh>

int main(int argc, char** argv) {
    std::cout << "Hello, world!\n";

    std::string msg = "mundo!";
    if (argc == 2){
        msg = argv[1];
    }

    saudacao::Saudacao teste(msg);

    teste.ola_mundo();
}