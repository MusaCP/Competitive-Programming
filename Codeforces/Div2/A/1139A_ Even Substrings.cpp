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

    ll num_of_even_substr=0;

    for(int i=0;i<n;i++){

        int degit=s[i]-'0';
         
        if(degit%2==0){
           num_of_even_substr+=i+1;
        }
    }

    cout << num_of_even_substr << nl ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
