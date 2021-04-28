#include <iostream>
using namespace std;

int main(){
  int n,m;
  int a[100][100];
  int b[100];
  int solve[100];

  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++) cin>>b[i];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      solve[i]+=a[i][j]*b[j];
    }
    cout<<solve[i]<<endl;
  }
  return 0;
}
