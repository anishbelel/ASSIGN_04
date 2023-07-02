#include <bits/stdc++.h>
using namespace std;
void reverse(string str, int index, int size)
{
    if(index == size)      // return when we have reached at the end of the string i.e. the last index
    {
        return;
    }
    char st = str[index];    // this char variable is used to store the character at ind index in the function stack
    reverse(str, index+1, size);  // recursive call
    cout << st;              // printing each character of the function stack
}
int main()
{
   string s="collegewallah";
   reverse(s,0,s.size());
}