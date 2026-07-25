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

    map<char,int> freq;

    for(auto x: s){
        freq[x]++;
    }

    for(auto x: freq){
        if(x.second % 2 ==1){
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;
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
