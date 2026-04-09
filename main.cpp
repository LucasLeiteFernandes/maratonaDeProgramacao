#include <iostream>

using namespace std;

void swapValues(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
};

int main() {
    int x = 10;
    int y = 20;

    swapValues(x, y);

    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}

/*
https://docs.google.com/spreadsheets/d/12ni2YofHJz4_cYITOAjRFvGo_1z37zBlK9UPCpogS0U/edit?gid=119157689#gid=119157689
Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. 
If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, 
the third number shows Tonya's view. The numbers on the lines are separated by spaces.

3
1 1 0
1 1 1
1 0 0
*/