#include <iostream>

using namespace std;

int main() {
    int x, y, soma = 0;

    cin >> x >> y;

    for (int i = x - 1; i >= y + 1; i--){
        if (i % 2 == 1 || i % 2 == -1){
            soma += i;
        }
    }

    cout << soma << "\n";
}