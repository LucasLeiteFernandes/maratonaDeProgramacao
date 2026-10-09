#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int contem(string str, int n, char *chr, int k){
    for (int i = 0; i < k; i++){
	if (str[n] == chr[i])
	    return 0;
    } return 1;
}

int main(){
    int n, k, cont = 0;
    cin >> n >> k;

    string str;
    cin >> str;

    char chr[k];
    for (int i = 0; i < k; i++)
	cin >> chr[i];

    vector<string> sub;
    string aux;
    for (int i = 0; i < n; i++){ 
	if (contem(str, i, chr, k) == 0){
	    aux = aux + str[i];
	    //cout << aux << endl;
	} else {
	   sub.push_back(aux);
	   aux = "";
	}
    } sub.push_back(aux);

    if (sub.size() == 0)
	return 0;
   //cout << sub[0] << endl; 
   //cout << sub[1] << endl; 

    set<int> s; 
    for(int i = 0; i < sub.size(); i++){
	aux = sub[i];
	for(int j = 0; j < aux.size(); j++){
	    s.insert(aux[j]);
	} 

	cont += aux.size() * s.size();
	s.clear();
    }  

   cout << cont << endl;

}
/*
 
 */
