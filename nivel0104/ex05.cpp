#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int l, c, tc = 0;
    char s;
    
    cin >> l >> c;
    char mapa[l][c];
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cin >> mapa[i][j];
        }
    }

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (mapa[i][j] == '#'){
                if (mapa[i-1][j] == '.' || mapa[i][j-1] == '.' || mapa[i+1][j] == '.' || mapa[i][j+1] == '.' || i-1==-1 || i+1==l || j-1==-1 || j+1==c){
                    tc++;
                }
                continue;
            }
        }
    }

    // for (int i = 0; i < l; i++){
    //     for (int j = 0; j < c; j++){
    //         cout << mapa[i][j] << " ";
    //     }cout << endl;
    // }

    cout << tc << endl;
    return 0;
}

/*
A primeira linha da entrada contém dois inteiros M e N (1 ≤ M, N ≤ 1000) indicando, respectivamente, o número de linhas e o número de colunas do mapa. 
Cada uma das M linhas seguintes contém N caracteres: um caractere ‘.’ indica que aquele quadrado do território é ocupada por água; 
um caractere ‘#’ indica que aquele quadrado do território é ocupada por terra.

Considere que todo o espaço fora da área do mapa é ocupado por água.,
.....

..#..

.###.

..#..

.....


.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
#
#
#
.
.
.
.
.
.
#
#
#
#
#
.
.
#
.
.
.
#
#
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
#
#
.
.
#
#
.
.
.
.
.
.
.
.
.
#
#
.
.
.
.
.
.
.
.
#
#
#
.
.
.
.
.
.
.
#
#
#
#
#
.
.
.
*/


