#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int x, y, r = 0;
   
    cin >> x;
    
    for (int i = 0; i < x; i++){
	cin >> y;
	if (y == 1)
	    continue;
	else if (y == 2 || y == 3)
	    r++;
    }

    cout << r << endl;

    return 0;
}
/*
*/
