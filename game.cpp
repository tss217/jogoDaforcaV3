#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include "naoAcertou.hpp"
#include "letraExiste.hpp"
#include "imprimeErros.hpp"
#include "imprimePalavra.hpp"
#include "chuta.hpp"
#include "leArquivo.hpp"
#include "sorteiaPalavra.hpp"
#include "adicionaPalavra.hpp"
#include "naoEnforcou.hpp"

using namespace std;

string palavraSecreta;

map<char,bool>chutou;
vector <char> chutesErrados;

int main(){

    leArquivo();
    sorteiaPalavra();

    while (naoAcertou() && naoEnforcou()){

        imprimeErros();
        imprimePalavra();
        
        chuta();

    }

    cout << "fim de jogo" << endl;
    cout << "palavra secreta era:" << palavraSecreta << endl;

    if(naoAcertou()){
        cout << "você perdeu" << endl;
    }else{
        cout << "boa" << endl;

        cout <<"vocẽ deseja uma nova palavra? (S/N) " <<endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adicionaPalavra();           
        }
    }
    
}