#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m, t, c, d = 0, p = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> t >> c;

        for (t; t < m; d++){
            t += c;
        }

        if (d >= p)
            p = d;
        d = 0;
    }

    cout << p << endl;
    return 0;
} 

/*
Get-Content in1.txt | .\a.exe   
Takahashi plans to check the heights of the plants every day on day 0, day 1, day 2, …, and end the observation on the first day when all plants have a height of at least M cm.

Find the day when the observation ends, that is, the smallest non-negative integer d such that A i +B i
​
Note that under the given constraints, the answer is guaranteed to exist as a finite value.
*/