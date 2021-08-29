#include <iostream>
using namespace std;
   int main()
   {
        long int n;
        cin>>n;
        int arr[10]={0};
        while(n!=0)
        {
            arr[n%10]++;
            n=n/10;

        }
for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<endl;

}                     
return 0;

   }