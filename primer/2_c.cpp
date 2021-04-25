#include <iostream>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
  int a[3];

  rep(i,3) cin>>a[i];
  sort(a,a+3);

  rep(i,3){
    if(i==2){
      cout<<a[i];
      cout<<endl;
      return 0;
    }
    cout<<a[i]<<" ";
  }
}
