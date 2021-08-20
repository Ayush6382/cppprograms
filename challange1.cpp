#include<iostream>
using namespace std;
   int main()
   {
      int n,sum=0;
      int j;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
}
           for (int i = 0; i < n; i++)
           {
              for ( j = i+1; j < n; j++)
        {
                 if(arr[i]<arr[j])
                 break;
                 }
            if(j==n)
              sum=sum+arr[i];
           
           
           }
      
      
      cout<<sum;
      
      
       return 0;
   }