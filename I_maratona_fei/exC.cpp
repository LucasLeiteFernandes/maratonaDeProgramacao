#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int x, y, r = 1;
   
    cin >> x >> y;
    
   for (int i = 1; i < y; i++){
	if (x * i <= y * i - y){
	    cout << i << endl;
	    break;
	} else {
	    cout << "else: " << x * i << " " << y * i - y << endl;
	}
   }

    return 0;
}
/*
*/
