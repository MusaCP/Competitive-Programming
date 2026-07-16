
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
   string s;
   cin >> s;

   int total_one=0;
  total_one= count(all(s),'1');

   int total_zero=0;
    total_zero=count(all(s),'0');

   int mn=min(total_one,total_zero);
  
   if(mn%2==1){
    cout << "DA" << nl;
   }
   else{
    cout << "NET" << nl;
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
