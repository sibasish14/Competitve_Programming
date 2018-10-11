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
    int x,hh,mm,ans=0;
    cin>>x>>hh>>mm;
    int tot=hh*60+mm;
    while(1)
    {
        int h=tot/60,m=tot%60;
        if(h%10 == 7 || h/10 == 7 || m%10 == 7 || m/10 == 7)
        {
            cout<<ans;
            return 0;
        }
        ans++;
        tot=tot-x;
        if(tot < 0)
            tot=1440+tot;
    }
    return 0;
}