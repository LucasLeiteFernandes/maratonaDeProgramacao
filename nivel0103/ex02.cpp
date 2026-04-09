#include <iostream>

using namespace std;


int main() {
    int x, m = 0, p = 0;

    for (int i = 1; i <= 100; i++){
        cin >> x;
        if (x >= m){
            m = x;
            p = i;
        }
    }
    cout << m << "\n" << p << "\n"; 
}