#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x,y,ans,i,j,c=0;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n,s[j]==s[i];j++);
        if(s[i] == '0')
            c++;
        i=j-1;
    }
    if(!c)
    {
        cout<<0;
        return 0;
    }
    ans=min(c*y, x*(c-1)+y);
    cout<<ans;
	return 0;
}
