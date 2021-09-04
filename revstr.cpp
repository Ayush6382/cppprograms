#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    int main(){
        string s;
        getline(cin,s);
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<endl<<s;
return 0;
    }