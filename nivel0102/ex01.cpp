#include <iostream>

using namespace std;

int maior(int a, int b){
    return (a + b + abs(a - b))/ 2;
}

int menor(int a, int b){
    return a + b - maior(a, b);
}

int main() {
    int a, b, c, ma, me, md;

    cin >> a >> b >> c;

    ma = maior(a, b);
    ma = maior(ma, c);

    me = menor(a, b);
    me = menor(me, c);

    md = a + b + c - ma - me;

    
    cout << me << "\n" << md << "\n" << ma << "\n\n";
    cout << a << "\n" << b << "\n" << c << "\n";

}