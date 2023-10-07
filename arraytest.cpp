#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
int i;
    string str;
    getline (cin,str);
    string s;
    stringstream ss(str);
    vector<string> v;
     while (getline(ss, s, ' ')) {
 
        // store token string in the vector
        v.push_back(s);
    }
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    return 0;
}

