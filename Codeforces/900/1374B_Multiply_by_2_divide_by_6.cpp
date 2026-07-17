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

   int cnt_2=0,cnt_3=0;

   while (n%2==0) 
   {
   n/=2;
   ++cnt_2;
   }

   while (n%3==0)
   {
    n/=3;
    ++cnt_3;
   }
   

   if(n==1 && cnt_2<=cnt_3){
    cout << 2*cnt_3-cnt_2 << nl; 
   }
   else{
    cout << -1 << nl;
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
