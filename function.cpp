 #include <iostream>
#include "header.h"
using namespace std;
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


int search_unsorted_arry(int size,int arry[],int num)
{
  int var;
  for(var=0;var<size;var++)
  {
    if(arry[var]==num)
    {
      std::cout<<"searching number is = ";
      std::cout<<var<<"       ";
      return 0;
    }
  }
  if(arry[var]!=0)
  {
    std::cout<<"not found ";
  }
}


int search_sorted_arry(int size,int arry[],int num,int var)
{
   if(arry[var]==num)
   {
     std::cout<<var;
     return 0;
   }
   else
   {
     search_sorted_arry(size,arry,num,++var);
   }
   if(var>size)
   {
     std::cout<<"not found";
     return 0;
   }
}

int rotatae_arry(int size,int arry[])
{
   int step,var1,var2,tem;
   std::cout<<"enter your step = ";
   std::cin>>step;
   for (var1=0;var1<step;var1++)
  {
    tem=arry[0];
    for (var2=0;var2<size-1;var2++)
     {
       arry[var2]=arry[var2+1];
     }
      arry[size-1]=tem;
  }

}
