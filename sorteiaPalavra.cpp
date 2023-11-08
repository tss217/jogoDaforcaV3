#include "leArquivo.hpp"
#include <vector>
#include<string>
#include<ctime>

extern std::string palavraSecreta;

void sorteiaPalavra(){
    std::vector < std::string> palavras = leArquivo();

    srand(time(NULL));
    int iSorteado = rand() % palavras.size();

    palavraSecreta = palavras[iSorteado];
}