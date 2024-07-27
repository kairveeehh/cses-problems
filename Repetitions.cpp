#include <iostream>
using namespace std;
 
 int find(const string& s){
  if  (s.length() == 0 )return 0;

  int cc=1;
  int mc=1;
  for(int i=0;i<s.length();i++){
    if(s[i]== s[i-1]){
      cc++;
    }
    else{
      cc=1;
    }
    mc =max(mc  , cc);
    
     
  }
  return mc;

 }


int main(){
  string s;
  getline(cin, s); // Read a line of input
  int res = find(s);
  cout<<res<<endl;
  
}