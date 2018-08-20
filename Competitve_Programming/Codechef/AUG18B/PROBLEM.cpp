#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;
 
multiset<pair<ll,ll> > ans,st;
vector<ll> v;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll p,s,i,j;
    cin>>p>>s;
    ll a[s+10];
    ans.clear();
    for(i=0;i<2*p;i++)
    {
        if(i%2)
        {
            st.clear();
            ll b,c=0;
            for(j=0;j<s;j++)
            {
                cin>>b;
                st.insert({a[j],b});
            }
            auto x=st.begin();
            auto y=(++x);
            x--;
            for(j=0;j<s-1;j++)
            {
                if(x->second > y->second)
                    c++;
                x++;
                y++;
            }
            ans.insert({c,(i+1)/2});
        }
        else
        {
            for(j=0;j<s;j++)
                cin>>a[j];
        }
    }
    auto it=ans.begin();
    for(i=0;i<p;i++)
    {
        cout<<it->second<<"\n";
        it++;
    }
    return 0;
}
 