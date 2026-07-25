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

    int cnt=0;

    while (n)
    { 

    if(n>=100){
       n-=100;
       cnt++;
      
    }
    else if(n>=20){

        n-=20;
        cnt++;
    
    }
    else if(n>=10){
        n-=10;
        cnt++;

    }
    else if(n>=5){
        n-=5;
        cnt++;
    }
    else{
        cnt+=n;
        break;
    }
}

cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

      solve();

    return 0;
}
