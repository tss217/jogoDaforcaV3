#include<vector>
#include<iostream>

extern std:: vector<char> chutesErrados;

void imprimeErros(){
    std::cout << "chutes errados:";
    for(char letra : chutesErrados){
        std::cout << letra << " ";
    }

    std::cout << std::endl;    
}
