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
    ll t;
    cin>>t;
    while(t--)
    {
        ll x11,y11,x12,y12;
        cin>>x11>>y11>>x12>>y12;
        ll x21,y21,x22,y22;
        cin>>x21>>y21>>x22>>y22;
        if((x11 == x21 && y11 == y21) || (x11 == x22 && y11 == y22) || (x12 == x21 && y12 == y21) || (x12 == x22 && y12 == y22))
            cout<<"yes\n";
        else if(x11 == x12 && x11 == x21 && x11 == x22)
        {
            ll ymin=min(min(y11,y12),min(y21,y22));
            ll ymax=max(max(y11,y12),max(y21,y22));
            if(abs(y11-y12)+abs(y21-y22)+1 > ymax-ymin)
                cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(y11 == y12 && y11 == y21 && y11 == y22)
        {
            ll xmin=min(min(x11,x12),min(x21,x22));
            ll xmax=max(max(x11,x12),max(x21,x22));
            if(abs(x11-x12)+abs(x21-x22)+1 > xmax-xmin)
                cout<<"yes\n";
            else cout<<"no\n";
        }
        else cout<<"no\n";
    }
    return 0;
}