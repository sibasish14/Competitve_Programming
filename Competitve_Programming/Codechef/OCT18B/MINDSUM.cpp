#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll min_steps[10];

void solve(ll n,ll d,ll steps)
{
    if(steps > 15)
        return;
    if(n <= 9)
    {
        if(steps < min_steps[n])
            min_steps[n]=steps;
    }
    solve(n+d,d,steps+1);
    ll z=n,sum=0;
    while(z)
    {
        sum+=(z%10);
        z/=10;
    }
    solve(sum,d,steps+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,d,i;
        cin>>n>>d;
        for(i=0;i<10;i++)
            min_steps[i]=INT64_MAX;
        solve(n,d,0);
        for(i=0;i<10;i++)
        {
            if(min_steps[i] != INT64_MAX)
            {
                cout<<i<<" "<<min_steps[i]<<"\n";
                break;
            }
        }
    }
    return 0;
}