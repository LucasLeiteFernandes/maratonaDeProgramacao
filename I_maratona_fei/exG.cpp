#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int x, y, r = 0;
   
    cin >> x;
    
    for (int i = 0; i < x; i++){
	cin >> y;
	if (i == 0)
	    r = y;
	else { 
	    if (y > r){
		cout << "N" << endl;
		break;	    
	    } else if ( i == x -1)
		cout << "S" << endl;
	}
    }

    return 0;
}
/*
*/
