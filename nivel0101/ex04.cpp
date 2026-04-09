#include <iostream>

using namespace std;
int main() {
    int segIn;
    int seg = 0, min = 0, hr = 0;
    cin >> segIn;

    seg = segIn % 60;
    hr = segIn / (60 * 60);
    min = (segIn / 60) % 60;

    cout << hr << ":" << min << ":" << seg << "\n";
}
