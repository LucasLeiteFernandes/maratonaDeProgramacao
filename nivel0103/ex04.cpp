#include <iostream>

using namespace std;

int main() {
    int n, k, a, b, rs = 0;

    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a >> b;
        if (a * b >= k)
            rs++;
    }

    cout << rs << endl;
    return 0;
}

/*

Input
Problem Statement
Takahashi is in charge of quality control at a factory. This factory manufactures N types of products, each numbered from 1 to N.

Each product has two metrics: a "quality index" and a "production quantity." The quality index of product i is A i, and its daily production quantity is B i
units. A higher quality index indicates that defective items are more likely to occur.
Takahashi decided to calculate a "risk score" for each product. The risk score of product i is defined as the product of the quality index Ai and the production quantity Bi, namely 
Ai × Bi. A higher risk score means that more attention is required for that product. Takahashi believes that products with a risk score of 
K or higher need to be prioritized for improvement. Find the number of products whose risk score is K or higher.

3 100
10 5
20 10
5 30

5 500
15 40
8 100
50 20
30 15
25 25


*/