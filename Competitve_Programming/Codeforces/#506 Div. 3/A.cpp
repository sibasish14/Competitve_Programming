#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,i,f=0,j,m;
    cin>>n>>k;
    string s,tmp="";
    cin>>s;
    for(i=1;i<n;i++)
        if(s[i] != s[0])
            break;
    if(i == n)
    {
        cout<<s;
        for(i=0;i<k-1;i++)
            cout<<s[0];
        return 0;
    }
    int size=0,ok=1;
    for(j=n-1;j>0;j--)
    {
        int x=0;
        for(m=j,i=0;m<n && i<n;m++,i++)
        {
            // cout<<i<<" "<<m<<"\n";
            if(s[m] == s[i])
                x++;
            else
            {
                break;
            }
        }
        // cout<<"ansb";
        if(m == n)
            size=max(size,x);
    }
    // cout<<size<<" ";
    for(i=size;i<n;i++)
        tmp+=s[i];
    cout<<s;
    for(i=0;i<k-1;i++)
        cout<<tmp;
    return 0;
}