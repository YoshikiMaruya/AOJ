#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  double r;
  cin>>r;

  cout<<fixed<<setprecision(6)<<r*r*M_PI<<" "<<2*r*M_PI<<endl;
  return 0;
}
