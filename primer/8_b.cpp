#include <iostream>
using namespace std;

int main(){
  string s;
  while(cin>>s){
    if(s[0]=='0') return 0;
    int sum=0;
    for(int i=0;i<s.size();i++){
      // 便利すぎ
      sum+=s[i]-'0';
    }
    cout<<sum<<endl;
  }
}
