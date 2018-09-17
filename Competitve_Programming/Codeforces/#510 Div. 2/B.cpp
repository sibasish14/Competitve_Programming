#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<string,int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,ans=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        string s;
        cin>>x>>s;
        sort(s.begin(),s.end());
        if(mp[s] == 0) mp[s]=x;
        else
        {
            if(mp[s] > x)
                mp[s]=x;
        }
    }
    if(mp["ABC"])
        ans=min(ans,mp["ABC"]);
    if(mp["AB"] && mp["C"])
        ans=min(ans,mp["AB"] + mp["C"]);
    if(mp["AC"] && mp["B"])
        ans=min(ans,mp["AC"] + mp["B"]);
    if(mp["BC"] && mp["A"])
        ans=min(ans,mp["BC"] + mp["A"]);
    if(mp["AB"] && mp["BC"])
        ans=min(ans,mp["AB"] + mp["BC"]);
    if(mp["AB"] && mp["AC"])
        ans=min(ans,mp["AB"] + mp["AC"]);
    if(mp["AC"] && mp["BC"])
        ans=min(ans,mp["AC"] + mp["BC"]);
    if(mp["A"] && mp["B"] && mp["C"])
        ans=min(ans,mp["A"] + mp["B"] + mp["C"]);
    if(ans == INT_MAX)
        cout<<"-1";
    else cout<<ans;
    return 0;
}