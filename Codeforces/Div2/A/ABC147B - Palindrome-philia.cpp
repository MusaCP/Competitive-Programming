/*

ABC147 B

Pattern: Symmetric Pair Comparison
Core Idea: Compare s[l] and s[r] while moving inward.
Observation: Each mismatched mirrored pair needs exactly 1 replacement.
Complexity: O(n), O(1)
Future Trigger: Any 'make palindrome with minimum operations' problem.
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

    string s;

    cin >> s;

    int l=0;
    int r=s.size()-1;

    int  minimum_num_hugs_needed=0;

    while (l<r)
    {
       if(s[l]!=s[r]) minimum_num_hugs_needed ++;

       l++;
       r--;
    }

    cout << minimum_num_hugs_needed << nl;
    
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  
      solve();

    

    return 0;
}
