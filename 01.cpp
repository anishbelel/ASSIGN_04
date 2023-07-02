#include <bits/stdc++.h>
using namespace std;
void removeAdjacentDuplicates(string s , int index,  string& answer){
    if(index >= s.size())return;
    if(answer.back() != s[index])answer += s[index]; //answer.back() returns the reference to the last character of the string
    removeAdjacentDuplicates(s , index + 1 , answer);
}
int main() {
    string s;
    cin>>s;
    string answer = "";
    removeAdjacentDuplicates(s, 0, answer);
    cout<<answer<<endl;
    return 0;
}