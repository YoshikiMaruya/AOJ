#include <iostream>
#include <utility>
using namespace std;

int main(){
  int n;
  pair <char, int> a[53];
  int s_count[14]={0},h_count[14]={0},c_count[14]={0},d_count[14]={0};

  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;

  for(int i=1;i<=n;i++){
    if(a[i].first=='S'){
      s_count[a[i].second]=a[i].second;
    }
    if(a[i].first=='H'){
      h_count[a[i].second]=a[i].second;
    }
    if(a[i].first=='C'){
      c_count[a[i].second]=a[i].second;
    }
    if(a[i].first=='D'){
      d_count[a[i].second]=a[i].second;
    }
  }
  for(int i=1;i<=13;i++) if(s_count[i]==0) cout<<'S'<<" "<<i<<endl;
  for(int i=1;i<=13;i++) if(h_count[i]==0) cout<<'H'<<" "<<i<<endl;
  for(int i=1;i<=13;i++) if(c_count[i]==0) cout<<'C'<<" "<<i<<endl;
  for(int i=1;i<=13;i++) if(d_count[i]==0) cout<<'D'<<" "<<i<<endl;
}
