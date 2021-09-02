#include<iostream>
using namespace std;
   int main()
   {
       int arr[5];
       for (int i = 0; i < 5; i++)
       {
           cin>>arr[i];
       }
       int num;
       cin>>num;
       int x=0;
       for (int i = 0; i < 5; i++)
       {
           if(arr[i]==num){
               x+=1;
               break;
           }
       }
       if(x>0)
   cout<< "No. is Present";
   else
   cout<<"Not Present";

return 0;


   }
