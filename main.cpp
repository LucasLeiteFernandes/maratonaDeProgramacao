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
    int p[100];
    int r[100];

    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> c[i];
    
    for(int i = 0; i < q; i++)
        cin >> p[i];
    
    for(int i = 0; i < n; i++){
        m = c[i];
        for (int a = i; a < n; a++){
            if(c[a] == m)
                c[a] = 01;
            m = maior(m, c[a]);
        }
        r[p[i - 1]] = m;
    }

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