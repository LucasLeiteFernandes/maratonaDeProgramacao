#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, q, p, h, t, r = 0;
    vector<int> c;
    vector<int> d; 
    cin >> n >> q;
    
    for (int i = 0; i < n; i++){
	c.push_back(i + 1);
	d.push_back(1);
    }
    
    for (int i =0; i < q; i++){
	cin >> t;
    
	if (t == 1){
	    cin >> p >> h;
	   
	    d[h - 1] += 1;
	    d[c[p - 1] - 1] -= 1;
	    
	    c[p - 1] = h;
	} 
	if (t == 2){
	    for (int j = 0; j < n; j++){
		if (d[j] > 1)
		    r++;
	    } 
	    
	    cout << r << endl;
	    r = 0;
	}
    } 
    return 0;
}
/*
There are N pigeons numbered from 1 to N, and there are N nests numbered from 1 to N. Initially, pigeon i is in nest i for 1≤i≤N.

You are given Q queries, which you must process in order. There are two types of queries, each given in one of the following formats:

    1 P H : Move pigeon P to nest H.
    2 : Output the number of nests that contain more than one pigeon.
0
1
2
1

*/
