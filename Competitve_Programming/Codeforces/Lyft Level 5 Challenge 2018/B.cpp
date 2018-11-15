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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans,i,f=1;
        cin>>a>>b;
        if(a-b != 1)
            f=0;
        ans=a+b;
        for(i=2;i<=sqrt(ans);i++)
        {
            if(ans%i == 0)
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}