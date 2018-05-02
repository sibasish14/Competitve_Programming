#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n,i,c=0;
    string s;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
        if(s[i] == '1')
            c++;
    //for(i=1;i<=c-1;i++)
    if(c>=1)
        cout<<"1";
    for(i=0;i<s.size()-c;i++)
        cout<<"0";
    cout<<"\n";
    return 0;
}