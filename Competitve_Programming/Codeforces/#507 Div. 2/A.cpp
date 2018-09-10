#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c,b,i;
    cin>>n>>c>>b;
    int z=min(c,b);
    int a[n+1],ans=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    int x=((n%2)?n/2:n/2-1);
    for(i=0;i<=x;i++)
    {
        if(a[i] == 2 && a[n-i-1] == 2)
        {
            if(i == n-i-1)
                ans+=(z);
            else ans+=(2*z);
        }
        else if((a[i] == 1 && a[n-i-1] == 2) || ((a[i] == 2 && a[n-i-1] == 1)))
        {
            ans+=b;
        }
        else if((a[i] == 2 && a[n-i-1] == 0) || ((a[i] == 0 && a[n-i-1] == 2)))
        {
            ans+=c;
        }
        else if((a[i] == 0 && a[n-i-1] == 1) || ((a[i] == 1 && a[n-i-1] == 0)))
        {
            cout<<-1;
            return 0;
        }

    }
    cout<<ans;
    return 0;
}