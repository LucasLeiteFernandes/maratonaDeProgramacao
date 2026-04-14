#include <iostream>

using namespace std;

int maior(int a, int b){
    return (a + b + abs(a - b))/ 2;
}

int menor(int a, int b){
    return a + b - maior(a, b);
}

int main() {
    int n, q, m = 0;
    int c[100];
    //int p[100];
    int r[100];

    cout << "n q" << endl;
    cin >> n >> q;
    cout << "notas do cidadaos\n";
        for(int i = 0; i < n; i++)
        cin >> c[i];
    
    //cout << "ordem das notas\n";
    //for(int i = 0; i < q; i++)
    //    cin >> p[i];
        
    
    r[0] = 0;
    for(int i = 0; i < n; i++){
        m = c[i];
        cout << "1m(" << i << ") = " << m << endl << endl;
        for(int a = i; a < n; a++){
            cout << "2m(" << a << ") = " << m << endl;
            if (m > r[a]){
                m = maior(m, c[a]);
                r[i] = m;
                c[a] = 0; 
            }    
        }
        cout << endl;
        cout << "r["<< i << "] = " << m << endl << endl;
    }

    cout << "saida\n";
    for(int i = 0; i < q; i++){
        cout << r[i] << endl;
    }

    return 0;
}

/*
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
*/