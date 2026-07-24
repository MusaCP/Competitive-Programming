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
   
    if(n==1){
        cout << 0 << nl;
        return;
    }

    if(n==2){
        cout << 1 << nl;
        return;
    }

    if(n==3){
        cout << 2 << nl;

        return ;
    }

    if(n%2==0){
        cout << 2 << nl;
    }
    else{
        cout << 3 << nl;
    }
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
