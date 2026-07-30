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

    vector<int> v(n);
    cin >> v;

    int ans=0;

    for(int i=n-2;i>=0;i--){
       
        while (v[i]>=v[i+1] && v[i] >0)
        {
           v[i]/=2;
           ans++;
        }
        
        if(v[i]==v[i+1]){
            cout << -1 << nl;

            return;
        }
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
