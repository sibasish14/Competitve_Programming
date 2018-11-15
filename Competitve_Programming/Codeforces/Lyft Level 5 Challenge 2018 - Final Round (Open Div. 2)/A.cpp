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
        ll n,x,y,stepa=0,stepb=0;
        cin>>n>>x>>y;
        if(x == 1 && y == 1)
            cout<<"White";
        else if(x == n && y == n)
            cout<<"Black";
        else
        {
            if(x == 1)
                stepa=y-1;
            else if(y == 1)
                stepa=x-1;
            else
            {
                if(x-1 == y-1)
                    stepa=x-1;
                else
                {
                    if(y > x)
                    {
                        ll z=y-1;
                        stepa=x-1;
                        z-=stepa;
                        stepa+=(z);
                    }
                    else
                    {
                        ll z=x-1;
                        stepa=y-1;
                        z-=stepa;
                        stepa+=(z);
                    }
                }
            }
            if(x == n)
                stepb=n-y;
            else if(y == n)
                stepb=n-x;
            else
            {
                if(x-n == y-n)
                    stepb=n-x;
                else
                {
                    if(y < x)
                    {
                        ll z=n-y;
                        stepb=n-x;
                        z-=stepb;
                        stepb+=(z);
                    }
                    else
                    {
                        ll z=n-x;
                        stepb=n-y;
                        z-=stepb;
                        stepb+=(z);
                    }
                }
            }
            if(stepa <= stepb)
                cout<<"White";
            else cout<<"Black";
        }
    } 
    return 0;
}