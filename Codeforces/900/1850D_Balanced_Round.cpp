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

    vector<int> v(n);
    cin >> v;

    sort(all(v));

    int longest_segment=0,cnt=0;


    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]<=k){
            cnt++;

            longest_segment=max(longest_segment,cnt);

        }
        else{

             cnt=0;
        }
    }

    cout << n-(longest_segment+1) << nl;

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
