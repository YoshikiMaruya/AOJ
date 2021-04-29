#include <iostream>
# define ll  long long
using namespace std;

int main(){
  ll n,m,l;
  ll a[105][105],b[105][105],solve[105][105];
  cin>>n>>m>>l;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) cin>>a[i][j];
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++) cin>>b[i][j];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      for(int k=0;k<m;k++){
        solve[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      if(j==l-1){
        cout<<solve[i][j];
        break;
      }
      cout<<solve[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
