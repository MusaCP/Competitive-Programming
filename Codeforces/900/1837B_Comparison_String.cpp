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

    string s;
    cin >> s;

    int minimum_cost=0;
    
    int longest_segment_1= 0;
    int longest_segment_2=0;

    

    for(int i=0;i<n;i++){

        if(s[i]=='<'){
           
            longest_segment_1++;
            longest_segment_2=0;

             minimum_cost=max(longest_segment_1,minimum_cost);
        }
        else{
            longest_segment_2++;
            longest_segment_1=0;

             minimum_cost=max(longest_segment_2,minimum_cost);
        }
    }

    cout << minimum_cost+1 << nl; 
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
