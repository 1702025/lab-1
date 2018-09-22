#include <iostream>
using namespace std;
int main()
{
  int size,var;
  cout<<"Enter your array size = ";
  cin>>size;
  int arry[size];
  for(var=0;var<size;var++)
  {
    cout<<"Enter array number "<<var<<" = ";
    cin>>arry[var];
  }
}
