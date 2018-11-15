#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n-1;i++)
        {
            if(s[i] > s[i+1])
            {
                for(j=0;j<=i-1;j++)
                    cout<<s[j];
                for(j=i+1;j<n;j++)
                    cout<<s[j];
                return 0;
            }
        }
        for(i=0;i<n-1;i++)
            cout<<s[i];
    }
    return 0;
}