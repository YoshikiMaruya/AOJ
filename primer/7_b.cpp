#include<iostream>
using namespace std;
int main(){
  while(1){
    int n,x,count=0;
    cin>>n>>x;
    if(n==0 && x==0) return 0;

    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
          if(i==j || j==k || i==k) continue;
          if(i+j+k==x && i<j && j<k && i<k) count++;
        }
      }
    }
    cout<<count<<endl;
  }
}
