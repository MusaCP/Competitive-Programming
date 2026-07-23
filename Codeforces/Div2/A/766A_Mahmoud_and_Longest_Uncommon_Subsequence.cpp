/*
     uncommon subsequence hobe jodi akta string a er subsquence  but onno tar  subsequence  noy 
    so ans altime max string length

    //LCM = jei subsequence ta 2 ta string ai exist kore 
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define nl '\n'


template<typename T>
istream& operator>>(istream &in, vector<T> &v){
    for(auto &x:v) in>>x;
    return in;
}

void solve(){
  
    string a,b;
    cin >> a >> b;

    if(a==b){
        cout << -1 << nl;

        return;
    }

    cout << max(a.size(), b.size()) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     
      solve();

    

    return 0;
}
