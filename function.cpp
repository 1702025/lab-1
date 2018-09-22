int reversing_arry(int size ,int arry[])
{
  int var1,var2,temp;
  for(var1=0,var1<size,var1++)
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
  for(var1=0,var1<size,var1++)
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


int search_sorted_arry(int size;int arry[])
{
  int num;
  cout<<"Enter the search number = ";
  cin>>num;
  for()

}
