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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int total_one=count(all(s),'1');
    int total_zero=count(all(s),'0');

    cout << abs (total_one-total_zero) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   
      solve();
    

    return 0;
}
