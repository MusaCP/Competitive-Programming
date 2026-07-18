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

    if(n%2==1){
        cout << "NO" << nl;
        return;
    }
    
    int minus_one_cnt=count(all(v),-1);

    int plus_one_cnt=count(all(v),1);

    if((minus_one_cnt==0 || plus_one_cnt ==0 )&& (n/2)%2==1){
      cout << "NO" << nl;

      return;
    }
  

   if((n/2)%2==minus_one_cnt%2 && (n/2)%2==plus_one_cnt%2){
    cout << "YES" << nl;
   }
   else{
    cout << "NO" << nl;
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
