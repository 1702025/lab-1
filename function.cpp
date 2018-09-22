#include <iostream>
#include "header.h"
int reversing_arry(int size ,int arry[])
{
  int var1,var2,temp;
  for(var1=0;var1<size;var1++)
  {
    for(var2=var1+1;var2<size;var2++)
    {
      temp=arry[var2];
      arry[var2]=arry[var1];
      arry[var1]=temp;
    }
  }
}


int sort_arry(int size,int arry[])
{
  int var1,var2,temp;
  for(var1=0;var1<size;var1++)
  {
    for(var2=var1+1;var2<size;var2++)
    {
      if(arry[var2]>arry[var1])
      {
        temp=arry[var2];
      arry[var2]=arry[var1];
      arry[var1]=temp;
      }
    }
  }
}


int search_unsorted_arry(int size,int arry[])
{
  int num,var;
  std::cout<<"Enter the search number = ";
  std::cin>>num;
  for(var=0;var<size;var++)
  {
    if(arry[var]==num)
    {
      std::cout<<"searching number is = "<<num;
    }
  }
  if(arry[var]!=0)
  {
    std::cout<<"not valid ";
  }
}


int search_sorted_arry(int size,int arry[],int num,int var)
{
   if(arry[var]==num)
   {
     std::cout<<num;
     return 0;
   }
   else if(var++==num)
   {
     search_sorted_arry(size,arry,num,var);
   }
   else if(var<size)
   {
     std::cout<<"not found";
     return 0;
   }
}
