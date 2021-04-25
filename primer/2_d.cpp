#include <iostream>
using namespace std;

int main(){
  int w,h,x,y,r;
  cin>>w>>h>>x>>y>>r;

  int w_ceil=x+r;
  int w_floor=x-r;
  int h_ceil=y+r;
  int h_floor=y-r;

  if(w_floor<0 || h_floor<0 || w<w_ceil || h<h_ceil){
    cout<<"No"<<endl;
    return 0;
  }

  cout<<"Yes"<<endl;
  return 0;
}
