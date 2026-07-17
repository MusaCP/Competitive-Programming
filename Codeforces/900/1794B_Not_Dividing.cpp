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

    for(int i=0;i<n;i++){
           v[i]++;   
    }

    for(int i=1;i<n;i++){

        if(v[i]%v[i-1]==0) v[i]++;
    

    }

   for(int i=0;i<n;i++){
         cout << v[i] << " ";  
    }

    cout << nl;
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
