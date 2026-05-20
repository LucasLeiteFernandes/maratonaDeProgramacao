#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maior(int a, int b){
    return (a + b + abs(a - b))/ 2;
}

int main() {
    int n, k, s = 0, a, d, t = 0;
    vector<int> v;

    cin >> n >> k;
    int m[n - k];
    
    for (int i = 0; i < n; i++){
        cin >> d;
        v.push_back(d);
        t += v[i];
    }

    for (int i = 0; i < k; i++){
        m[i] = 0;
    }

    m[0] = v[0];
    
    for (int j = 0; j < k; j++){
        a = m[j];
        for (int i = 1; i < v.size(); i++){
            //cout << v[i] << endl;
            a = maior(a, v[i]);
            for (int k = 0; k < v.size(); k++)
                if (v[k] == a)
                    v[k] = 0;
        }
        if (a > m[j])
            m[j] = a;
    }

    cout << t << endl;
    for (int i = 0; i < k; i++){
        s += m[i];
    } 

    s = t - s;
    cout << s << endl; 
    for (int i = 0; i < 1; i++){
        cout << "EXPLODIR MUNDO!" << endl;
    }
}
/*

*/