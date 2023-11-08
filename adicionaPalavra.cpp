#include<iostream>
#include<string>
#include "leArquivo.hpp"
#include "salvaArquivo.hpp"
#include <vector>


void adicionaPalavra(){
    std::cout<< "nova palavra:" <<std::endl;
    std::string novaPalavra;
    std::cin >> novaPalavra;

    std::vector<std::string> listaDePalavras = leArquivo();
    listaDePalavras.push_back(novaPalavra);
    
    salvaArquivo(listaDePalavras);


}
