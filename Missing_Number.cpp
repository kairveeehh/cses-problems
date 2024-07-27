#include <bits/stdc++.h>
using namespace std;


int find( long long n, vector<long long>& num){
  long long summ = (n*(n+1))/2;
  long long sum =0;
  for(int n: num){
    sum +=n;
  }
  return summ - sum;
}

int main(){
  long long n;
  cin>>n;
  vector<long long> num(n-1);
  for(int i =0;i<n-1;++i){
    cin>>num[i];
  }

  int res = find(n, num);
  cout<<res<<endl;
  return 0;
}