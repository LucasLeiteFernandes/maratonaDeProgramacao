#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m, a, x = 0;
    vector<int> p;
    vector<int> pc;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> m;

        for (int j = 0; j < m; j++){
            cin >> a;
            p.push_back(a);
            pc.push_back(a);
        }
        sort(pc.rbegin(), pc.rend());
        for(int k = 0; k < p.size(); k++){
            if (p[k] == pc[k])
                x++;
        }

        cout << x << endl;
        x = 0;

        while(p.size() != 0)
            p.pop_back();
            
        while(pc.size() != 0)
            pc.pop_back();
    }
    return 0;
}

/*
Entrada
A primeira linha contém um inteiro N, indicando o número de casos de teste a seguir.

Cada caso de teste inicia com um inteiro M (1 ≤ M ≤ 1000), indicando o número de alunos. Em seguida haverá M inteiros distintos Pi (1 ≤ Pi ≤ 1000), 
onde o i-ésimo inteiro indica a nota do i-ésimo aluno.

Os inteiros acima são dados em ordem de chegada, ou seja, o primeiro inteiro diz respeito ao primeiro aluno a chegar na fila, o segundo inteiro diz respeito ao segundo aluno, 
e assim sucessivamente.

Saída
Para cada caso de teste imprima uma linha, contendo um inteiro, indicando o número de alunos que não precisaram trocar de lugar mesmo após a fila ser reordenada.

3
3
100 80 90
4
100 120 30 50
4
100 90 30 25
*/


