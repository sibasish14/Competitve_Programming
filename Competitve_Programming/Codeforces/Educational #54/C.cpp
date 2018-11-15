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
    cout<<fixed<<setprecision(10);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;
        double value=d*d*1.0-4.0*d;
        if(value < 0)
        {
            cout<<"N\n";
            continue;
        }
        double a=(d+sqrt(value)*1.0)/2.0;
        double b=d-a;
        cout<<"Y "<<a<<" "<<b<<"\n";
    }
    return 0;
}