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

    vector<int> v(n+1);

   for(int i=1;i<=n;i++){
    cin >> v[i];
   }

   int l=1,r=n;

   int ans1=0,ans2=0;

   while (l<r)
   {
   
      if(v[l]!=v[r]){

      
         ans1= max(r-l, n-r);
         break;
      }

      r--;
   }


      while (n>l)
   {
   
      if(v[l]!=v[n]){

      
        ans2=max(n-l, l-1);
         break;
      }

      l++;
   }

   cout << max(ans1,ans2) << nl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


      solve();

    

    return 0;
}
