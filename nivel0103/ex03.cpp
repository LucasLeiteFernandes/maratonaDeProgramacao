#include <iostream>

using namespace std;

int main() {
    int n, p, v, t, np = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> p >> v >> t;
        if (p + v + t > 1){
            np++;
        }
    }
    cout << np;
}

/*
Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. 
If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, 
the third number shows Tonya's view. The numbers on the lines are separated by spaces.

3
1 1 0
1 1 1
1 0 0
*/