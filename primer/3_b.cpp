#include<iostream>
using namespace std;

int main(){
  int a[10005];

  for(int i=0;i<10000;i++){
    cin>>a[i];
    if(a[i]==0) break;
  }

  for(int i=0;i<10000;i++){
    if(a[i]==0) break;
    cout<<"Case "<<i+1<<": "<<a[i]<<endl;
  }
  return 0;
}
