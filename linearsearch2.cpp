#include<iostream>
using namespace std;
    
    int linearsearch(int a[],int n,int key)
{
     for (int i = 0; i < n; i++)
     {
         if(a[i]==key){      // we are returning index()
             return i;      //that is the index at which the element is present
         }
     }
     return -1;
}    


    int main()
  {
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int key;
  cin>>key;
     cout<<linearsearch(a ,n,key)<<endl;

     return 0;
  }
