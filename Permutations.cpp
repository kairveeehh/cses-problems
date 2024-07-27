#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n==1) {cout<< "1" <<endl;}
  else if(n== 2 || n==3){ cout<< "NO SOLUTION" <<endl;}
   else{
    vector<int> odd;
    vector<int> even;
    for(int i=1; i<=n; i++){
      if(i%2==0){
        even.push_back(i);
      }
      else{
        odd.push_back(i);
      }
    }
    for(int i=0;i<even.size();i++){
      cout<< even[i] << " ";
    }
    for(int i=0;i<odd.size();i++){
      cout << odd[i] << (i == odd.size() - 1 ? "\n" : " ");
   }
}
return 0;
}