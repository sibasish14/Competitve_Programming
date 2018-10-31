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
        int n,i;
        string s;
        cin>>n>>s;
        for(i=0;i<n-1;i++)
        {
            if(s[i] != s[i+1])
            {
                cout<<"YES\n";
                cout<<s[i]<<s[i+1];
                return 0;
            }
        }
        cout<<"NO";
    }
    return 0;
}