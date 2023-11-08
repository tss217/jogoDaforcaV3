
#include<iostream>
#include<fstream>
#include "leArquivo.hpp"

std::vector <std::string> leArquivo(){
    std::ifstream arquivo;
    arquivo.open("palavras.txt");


    if(arquivo.is_open()){
        int qdtPalavras;
        arquivo >> qdtPalavras;

        std::vector<std::string> palavrasDoArquivo;

        for(int i = 0; i< qdtPalavras;i++){
            std::string palavraLida;
            arquivo >> palavraLida;
            palavrasDoArquivo.push_back(palavraLida);
    }
    arquivo.close();
    return palavrasDoArquivo;

    }else{
        std::cout << " não foi possivel acessar" << std::endl;
        exit(0);
    }

}
