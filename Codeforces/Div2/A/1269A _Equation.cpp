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

    if(n%2==0){
        cout << n+8 << " " << 8 << nl;
    }
    else{
        cout << n+9 << " " << 9 << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

      solve();

    

    return 0;
}
