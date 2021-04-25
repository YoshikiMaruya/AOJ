#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m && (n!=0 || m!=0)){
    if(n>m) swap(n,m);
    cout<<n<<" "<<m<<endl;
  }
  return 0;
}
