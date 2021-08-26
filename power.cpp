#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  
  int power(int x,int n)
  {
  if(n==0)
  return 1;

    int ans=power(x,n-1);
   
   return x*ans;
  }
  
  
    int main()
   {
       int x,n;
       cin>>x>>n;
       cout<<power(x,n);
return 0;
   }
   