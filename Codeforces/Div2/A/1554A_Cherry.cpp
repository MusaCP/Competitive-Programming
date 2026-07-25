/* ans shobshomoy adjacency element er product ai hobe keno na widow jotoi barai na keno min velue kombe ba shoman thakbe 
ex: 1 3 6 9 2 10 ans = 6*9
ex2: 10 7 9 10 ans =9*10
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
    ll n;
    cin >> n;

    vector<ll> v(n);
    cin >> v;

    ll ans=0;

    for(int i=1;i<n;i++){
        ans=max(ans,v[i]*v[i-1]);
    }

    cout <<  ans << nl;

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
note ta ero valo vabe koro deo jate pore code dekhle shohojei bujte pari
