#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int Fib(int x){
    long long a;
    vector<long long> f;
    f.push_back(0);
    f.push_back(1);

    for (int i = 1; i <= x; i++){
        a = f[i - 1] + f[i];
        f.push_back(a);
    }
    
    return f[x];
}

int main() {
    vector<long long> f;
    long long n, x;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        cout << "Fib(" << x << ") = " << Fib(x) << endl;
    }

    return 0;
}

/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), 
correspondente ao N-esimo termo da série de Fibonacci.

entrada     saida
3
0           Fib(0) = 0
4           Fib(4) = 3
2           Fib(2) = 1
*/


