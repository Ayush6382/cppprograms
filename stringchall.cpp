#include<iostream>
#include<string>
using namespace std;
   int main(){
string s="Hello, Good, Morning";
cout<<s.size();
int fcount,bcount;
for (int i = 0; i < s.size(); i++)

{
    if (s[i]==',')
    {
        fcount=i;
        break;
    }
    
}

for (int i = s.size()-1; i >=0; i--)
{
    if(s[i]==',')
    {
         bcount=i;
         break;
    }

}
cout<<s.substr(fcount+1)<<endl;
cout<<s.substr(bcount+1);

return 0;
   }