#include <iostream>

using namespace std;

int main() {
    int a, b, c, maior;
    cin >> a >> b >> c;

    maior = (a + b + abs(a - b))/ 2;

    maior = (c + maior + abs(c - maior)) / 2;

    cout << maior << " eh o maior" << "\n";
}

