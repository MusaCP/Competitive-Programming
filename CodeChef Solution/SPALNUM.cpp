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
   
    int l,r;
    cin >> l >> r;

    ll sum=0;

    for(int i=l;i<=r;i++) {
        string s =to_string(i);

        string rs=s;

        reverse(all(rs));


        if(rs==s){
            sum+=i;
        }


    }

    cout << sum << nl;


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
