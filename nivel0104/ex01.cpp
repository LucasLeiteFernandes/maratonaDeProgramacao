#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    while(cin >> n){
    
    int q, m = 0, a;
    vector<int> c;

    cin >> q;
    for(int i = 0; i < n; i++){
        cin >> a;
        c.push_back(a);
    }
    
    sort(c.rbegin(), c.rend());



    for(int i = 0; i < q; i++){
        cin >> a;
        cout << c[a-1] << endl;
    }
    
    while(c.size() != 0){
        c.pop_back();
    }


    }
    return 0;
}

/*
https://docs.google.com/spreadsheets/d/12ni2YofHJz4_cYITOAjRFvGo_1z37zBlK9UPCpogS0U/edit?gid=119157689#gid=119157689
A entrada contém vários casos de teste. A primeira linha de cada caso contém dois inteiros N (1 ≤ N ≤ 100), Q (1 ≤ Q ≤ 100), o número de habitantes do país 
e o número de consultas, respectivamente.
As N linhas seguintes contém, cada uma, a nota ni obtida pelo i-ésimo cidadão (0 ≤ ni ≤ 30000).
As próximas Q linhas contém cada uma uma consulta, a posição pi (1 ≤ pi ≤ N) a qual a ECE está interessada em saber a nota.
A entrada termina com fim-de-arquivo (EOF).
Saída
Para cada caso de teste, imprima, para cada consulta, uma linha contendo a nota do cidadão que ficou classificado na posição pi.

6 5
30
30
40
250
100
15
1
5
3
2
4



vector<int> vet;

vet.pushback(variavel);

for(int i = 0; i < numerodenotas ; i++){
    int indice; cin >> indice;
    cout << vet[indice] << "\n";
}


*/


