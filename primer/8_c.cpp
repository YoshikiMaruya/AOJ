#include <iostream>
using namespace std;

int main(){
  string s;
  char c='a';
  int char_count[26]={0};
  // 複数行にまたがる入力の受け取り方！！
  while(getline(cin, s)){
    for(int i=0;i<s.size();i++){
      if('A' <= s[i] && s[i] <= 'Z'){
        s[i] = 'a' +s[i]-'A';
      }
      char_count[s[i]-'a']++;
    }
  }
  for(int i=0;i<26;i++){
    cout<<c<<" : "<<char_count[i]<<endl;
    c++;
  }
  return 0;
}
