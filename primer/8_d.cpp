#include <iostream>
using namespace std;

int main(){
  string s;
  string p;
  int solve;

  cin>>s;
  cin>>p;

  for(int i=0;i<s.size()+p.size();i++){
    int count = 0;
    int k=0;
    if(s[i]==p[0]){
      for(int j=0;j<p.size();j++){
        if(i+j>=s.size()){
          if(s[k]==p[j]){
            count++;
            k++;
            if(count==p.size()){
              cout<<"Yes"<<endl;
              return 0;
            }
          }
        }
        if(s[i+j]==p[j]){
          count++;
          if(count==p.size()){
            cout<<"Yes"<<endl;
            return 0;
          }
        }
      }
    }
  }

  cout<<"No"<<endl;
  return 0;
}
