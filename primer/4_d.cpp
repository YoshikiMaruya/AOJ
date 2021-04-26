#include <iostream>
#include <algorithm>
# define ll long long
using namespace std;

int main(){
  ll n,sum=0;
  int a[10005];

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }

  cout<<*min_element(a,a+n)<<" "<<*max_element(a,a+n)<<" "<<sum<<endl;
  return 0;
}
