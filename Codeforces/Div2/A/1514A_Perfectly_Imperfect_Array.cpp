/*
CF 1514A - Perfectly Imperfect Array

Pattern: Math / Perfect Square Check
Core Idea: If any element is NOT a perfect square, answer = YES.
Observation: An array is 'perfect' only when every element is a perfect square.
Implementation: For each x, let r = floor(sqrt(x)). If r*r != x → non-square found.
Complexity: O(n)
Future Trigger: 'perfect square', 'all elements satisfy property', 'existence of one bad element decides answer'.
*/
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
        int h_sqt=sqrt(v[i]);
        
        if(h_sqt*h_sqt !=v[i]){
            cout << "YES" << nl;
            return ;
        }
   }

   cout << "NO" << nl;
    
   
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
