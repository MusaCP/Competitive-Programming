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

    vector<int> a(n);
    cin >> a;

    vector<int> b(n);

    cin >> b;

    sort(all(a));

    sort(all(b));

   for(auto x:a){
    cout << x << " ";
   }

   cout << nl;

    for(auto x:b){
    cout << x << " ";
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
