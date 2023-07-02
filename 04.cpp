#include <bits/stdc++.h>
using namespace std;
void alternateConcat(string a, string b,int index1,int index2,string &s) 
{ 
    if(index1==a.size() && index2==b.size())
    {
        return;
    }
    if(index1==a.size())
    {
        s=s+b.substr(index2);
        return;
    }
    if(index2==b.size())
    {
        s=s+a.substr(index1);
        return;
    }
    s=s+a[index1++]+b[index2++];
    alternateConcat(a,b,index1,index2,s);
} 
int main()
{
   string s="";
   alternateConcat("po","abet",0,0,s);
   cout<<s;
    
}