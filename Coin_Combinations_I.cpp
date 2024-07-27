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
   vector<int> dp(x+1 , 0);
   dp[0] = 1;
   for(int i=0;i<=x;i++){
    for(int j=0;j<n;j++){
      if(a[j]<=i){
        dp[i]=(dp[i] + dp[i-a[j]]) % MOD;
      }
    }
    // here 2 5 2 and 5 2 2 are taken differentlyu so we add directly 
   }
   cout<< dp[x]<<endl;

    return 0;
}