#include <iostream>
#include "header.h"
using namespace std;
int main()
{
  int size,var;
  std::cout<<"Enter your array size = ";
  std::cin>>size;
  int arry[size];
  for(var=0;var<size;var++)
  {
    std::cout<<"Enter array number "<<var<<" = ";
    std::cin>>arry[var];
  }
  std::cout<<"1 = int reversing_arry(int size,int arry[]) "<<endl;
  std::cout<<"2 = int sort_arry(int size,int arry []) "<<endl;
  std::cout<<"3 = int search_unsorted_arry(int size,int arry[])"<<endl;
  std::cout<<"4 = int int search_sorted_arry(int size,int arry[])"<<endl;
  std::cout<<"5 = int rotatae_arry(int size,int arry[])"<<endl;
  int user;
  std::cout<<"enter using opearation = ";
  std::cin>>user;
  if(user==1)
  {
    reversing_arry(size,arry);
  }
  if(user==2)
  {
    sort_arry(size,arry);
  }
  if(user==3)
  {
    int num;
    std::cout<<"Enter the search number = ";
    std::cin>>num;
    search_unsorted_arry(size,arry,num);
  }
  if(user==4)
  {
    int var=0,num;
    std::cout<<"enter your number = ";
    std::cin>>num;
    for (var=0;var<size;var++)
    {
      if (arry[var]<arry[var+1])
      {
        search_sorted_arry(size,arry,num,var);
        std::cout<<"arry are sorted ";
        return 0;
      }
      else
      {
        search_unsorted_arry(size,arry,num);
         cout<<"arry are not sorted ";
      }
    }
  }
  for(var=0;var<size;var++)
  {
    cout<<"    "<<arry[var];
  }
}
