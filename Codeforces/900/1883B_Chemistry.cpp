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
    int n , k;
    cin >> n >> k;

    map<char,int>mp;

    string s;
    cin >> s;

    for(auto x:s){
       mp[x]++;
    }

    int od_count=0;
    
   for(auto x:mp){
    if(x.second%2==1) od_count++;
   }
   
   if(od_count<=k || (od_count-k <=1)){
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
