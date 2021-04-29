#include <iostream>
using namespace std;

int main(){
  int r,c;
  int a[105][105];
  int sum[105][105]={0};

  cin>>r>>c;

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>a[i][j];
      sum[i][c]+=a[i][j];
      sum[r][j]+=a[i][j];
      sum[r][c]+=a[i][j];
    }
  }

  for(int i=0;i<=r;i++){
    for(int j=0;j<=c;j++){
      if(j==c){
        cout<<sum[i][j]<<endl;
        continue;
      }
      if(i==r){
        cout<<sum[i][j]<<" ";
        continue;
        if(j==c){
          cout<<sum[i][j]<<endl;
          return 0;
        }
      }
      cout<<a[i][j]<<" ";
    }
  }
}
