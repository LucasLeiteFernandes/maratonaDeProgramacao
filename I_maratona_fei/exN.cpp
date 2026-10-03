#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int x, y, r = 0;
   
    cin >> x >> y;
    int l[x];
    
    for (int i = 0; i < x; i++){
	l[i] = 0;
    }

    for (int i = 0; i < y; i++){
	cin >> r;
	l[r - 1] = r;
    }

    if (y == x){
	cout << "*" << endl;
    } else {
	for (int i = 0; i < x; i++){
	    if (l[i] == 0)
		cout << i + 1 << " ";
	}	  
    }

    return 0;
}
/*
*/
