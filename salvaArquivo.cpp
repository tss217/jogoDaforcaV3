#include<iostream>
#include<fstream>
#include "salvaArquivo.hpp"


void salvaArquivo(std::vector<std::string> novaLista){
    std::ofstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        arquivo << novaLista.size() << std::endl;

        for(std::string palavra : novaLista){
            arquivo << palavra << std::endl;

        }

        arquivo.close();
    }else{
        std::cout << " não foi possivel acessar" << std::endl;
        exit(0);
    }
}