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
    ll n,k,m;

    cin >> n >> k >> m;

    if(m<k){
        cout << "NO" << endl;

        return;
    }

    cout<< "YES" << nl;


     cout << m-(k-1) << " ";
    for(int i=2;i<=k;i++){
        cout << 1 << " ";
    }

    for(int i=k+1; i<=n;i++) {
       
        cout << 1<< " ";
    }

    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;
    while(test_case--) {
      solve();

    }

    return 0;
}
