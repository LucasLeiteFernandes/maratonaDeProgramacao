#include <bits/stdc++.h>
#include <iostream>

using namespace std;
	
int main(){
    int n, m, a, x = 0;
    vector<int> p;
    vector<int> pc;
    cin >> n;

    for (int i = 0; i < n; i++){
	cin >> m;
	for (int j = 0; j < m; j++){
	    cin >> a;
	    p.push_back(a);
	    pc.push_back(a);
	}
	sort(pc.rbegin(), pc.rend());
	for(int k: p){
	    if(p[k] == pc[k])
		x++;
	}

	cout << x << endl;
	x = 0;

	while(p.size() != 0)
	    p.pop_back();

	while(pc.size() != 0)
	    pc.pop_back();
	}
    return 0;
}
