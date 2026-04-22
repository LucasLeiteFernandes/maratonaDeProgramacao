#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    float M[12][12];
    float soma = 0, media = 0, x = 12, y = 0;
    string op;

    cin >> op;

    for(int l = 0; l < x; l++){
        for(int c = 0; c < x; c++){
            cin >> M[l][c];
        }
    }

    if (op == "S"){
        for(int l = 0; l < x; l++){
            for(int c = 0; c < x; c++){
                if (l > c){
                    soma += M[l][c];
                }
            }
        }
        cout << soma << endl;
    } 

    if (op == "M"){
        for(int l = 0; l < x; l++){
            for(int c = 0; c < x; c++){
                if (l > c){
                    soma += M[l][c];    
                    y++;
                }
            }
        }
        media = soma / y;
        cout << media << endl;
    } 

    
    return 0;
}

/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal principal da matriz, conforme ilustrado abaixo (área verde).
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. 
Seguem os 144 valores de ponto flutuante que compõem a matriz.
*/


