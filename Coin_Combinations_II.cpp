// without repetitive
#include <bits/stdc++.h>
using namespace std;

//kairvee codeess 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, a) for (int i = 0; i < a; i++)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define F first
#define S second

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int n,x;
   cin>>n>>x;
   vector<int>a(n);
      for(int i = 0; i < n; i++){
    cin>>a[i];
   }
vector<vector<int>> dp(n+1 , vector<int> (x+1));
for( int i =0 ;i<n;i++){
  dp[i][0]=1;
}
for(int i=n-1;i>=0;i--){
  for(int s =1;s<=x;s++){
    int skipped = dp[i+1][s];
    int picked  =0;
    if(a[i]<=s){ // conmdition vrna fir seedhe hi kr dete 
      picked = dp[i][s-a[i]];

// yhan vo repeear count nhi krna h toh basically 2 states bn jaengi w
    }
    dp[i][s] = (picked+skipped) % MOD;
  }
}
cout<<dp[0][x];
    return 0;
}