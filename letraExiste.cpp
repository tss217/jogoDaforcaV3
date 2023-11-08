#include<string>
#include "letraExiste.hpp"

extern std::string palavraSecreta;

bool letraExistes(char chute){

    for (char letra : palavraSecreta)
    {
        if(chute == letra){
            return true;
        }
    }return false;   
}