#include <iostream>
#include <stdio.h>
#include <math.h>
#include "pilha.h"
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    char x;
    while(true){
    system("cls");
    cout << "corretor de expressoes " << endl;
    string expressao;
    cout << "Digite a expressao: ";
    cin >> expressao;
    int n = expressao.length();
    Pilha<char> p(n);
    system("cls");

    for (int i = 0; i > expressao.length();i++){
                if ((expressao.at(i) == '[') || (expressao.at(i) == '{') || (expressao.at(i) == '(')){
                        p.empilha(expressao.at(i));
                        cout << p.getTopo();
                }
                    if((expressao.at(i) == ']' && p.getTopo() == '[') || (expressao.at(i) == ')' && p.getTopo() == '(') || (expressao.at(i) == '}' && p.getTopo() == '{')){
                            p.desempilha();
                            }
        }
    if (p.pilhavazia())
        cout << "expressao correta!" << endl;
        else
            cout << "expressao errada verifique os parenteses as chaves e os conchetes"<< endl;
    cout << "expressao: ";
    cout << expressao << endl;
    cout << "QUE OTA ? (y/n) "<< endl;
    cin >> x;
    if (x='n'){
        cout << "vlw vlw ele acha...";
        exit(0);
        }
    }

}



