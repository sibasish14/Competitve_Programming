#include<bits/stdc++.h>
#define mod 1000000007
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
        ll n,m,i;
        cin>>n>>m;
        ll l[n],r[n];
        map<ll,ll> mp;
        vector<ll> v1;
        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            mp[r[i]]=l[i];
            v1.push_back(r[i]);
        }
        sort(v1.begin(),v1.end());
        while(m--)
        {
            ll p;
            cin>>p;
            if(p >= v1[n-1])
                cout<<"-1\n";
            else
            {
                auto idx=upper_bound(v1.begin(),v1.end(),p);
                ll ans=mp[*idx]-p;
                if(ans <= 0)
                    ans=0;
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}


//A faster implementation using standard Binary Search


// #include<bits/stdc++.h>
// #define mod 1000000007
// using namespace std;
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,m,i;
//         cin>>n>>m;
//         ll l[n],r[n];
//         vector<pair<ll,ll> > v;
//         vector<ll> v1;
//         for(i=0;i<n;i++)
//         {
//             cin>>l[i]>>r[i];
//             v.push_back({r[i],l[i]});
//             v1.push_back(r[i]);
//         }
//         sort(v.begin(),v.end());
//         sort(v1.begin(),v1.end());
//         while(m--)
//         {
//             ll p;
//             cin>>p;
//             if(p >= v[n-1].first)
//                 cout<<"-1\n";
//             else if(p <= v[0].second)
//             {
//                 ll ans=v[0].second-p;
//                 if(ans <= 0)
//                     ans=0;
//                 cout<<ans<<"\n";
//             }
//             else
//             {
//                 ll idx=-1,ans=0;
//                 ll low=0,high=n-1;
//                 while(low <= high)
//                 {
//                     ll mid=(high+low+1)/2;
//                     // cout<<mid<<" "<<low<<" "<<high<<"\n";
//                     if(v1[mid] == p)
//                     {
//                         idx=mid+1;
//                         break;
//                     }
//                     if(v1[mid] <= p)
//                     {
//                         idx=mid+1;
//                         low=mid+1;
//                     }
//                     else
//                     {
//                         idx=high;
//                         high=mid-1;
//                     }
//                 }
//                 // cout<<idx<<" ";
//                 ans=v[idx].second-p;
//                 if(ans <= 0)
//                     ans=0;
//                 cout<<ans<<"\n";
//             }
//         }
//     }
//     return 0;
// }