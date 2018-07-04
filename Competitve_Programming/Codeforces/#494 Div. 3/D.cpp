// #include<bits/stdc++.h>
// #define mod 1000000007
// using namespace std;
// typedef long long int ll;

// map<ll,ll> mp;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll n,q,i,j;
//     cin>>n>>q;
//     ll a[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//         mp[a[i]]++;
//     }
//     while(q--)
//     {
//         ll x,ans=0;
//         cin>>x;
//         auto z=mp.end();
//         z--;
//         for(;;z--)
//         {
//             ll have=min(z->second,x/(z->first));
//             ans+=have;
//             x-=(z->first)*have;
//             if(z == mp.begin())
//                 break;
//         }
//         if(!x)
//             cout<<ans<<"\n";
//         else
//             cout<<"-1\n";
//     }
// 	return 0;
// }



/*
Alternate solution using
Bit manipulation
*/

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,i,j;
    cin>>n>>q;
    ll a[n],avail[40];
    memset(avail,0,sizeof(avail));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        for(j=0;j<=35;j++)
            if((a[i]>>j) & 1)
                avail[j]++;
    }
    while(q--)
    {
        ll x,ans=0,req[40],need=0,z=0;
        memset(req,0,sizeof(req));
        cin>>x;
        for(i=0;i<=35;i++)
            if((x>>i) & 1)
                req[i]=1;
        for(i=35;i>=0;i--)
        {
            z+=req[i];
            need=min(z,avail[i]);
            ans+=need;
            z-=need;
            z*=2;
        }
        cout<<(z?-1:ans)<<"\n";
    }
	return 0;
}