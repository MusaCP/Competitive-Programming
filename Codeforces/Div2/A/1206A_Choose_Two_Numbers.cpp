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

    int m;

    cin >> m;

    vector<int>b(m);
  cin >> b;

  cout << *max_element(all(a)) << " " << *max_element(all(b))  << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


      solve();


    return 0;
}
