#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s>>r;
        string s1="",s2="";
        ll i,cnt1[26]={0},cnt2[26]={0},f=1;
        for(i=0;i<s.size();i++)
            cnt1[s[i]-'a']++;
        for(i=0;i<r.size();i++)
            cnt2[r[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(cnt2[i] < cnt1[i])
            {
                f=0;
                break;
            }
        }
        if(!f)
        {
            cout<<"Impossible\n";
            continue;
        }
        ll vis[r.size()+10];
        memset(vis,0,sizeof(vis));
        for(i=0;i<r.size();i++)
        {
            if(cnt1[r[i]-'a'] > 0)
            {
                vis[i]=1;
                cnt1[r[i]-'a']--;
            }
        }
        for(i=0;i<r.size();i++)
        {
            if(!vis[i] && r[i] <= s[0])
                s1+=r[i];
            else if(!vis[i] && r[i] > s[0])
                s2+=r[i];
        }
        sort(all(s1));
        sort(all(s2));
        string ans=s1+s+s2;
        s1="";
        s2="";
        for(i=0;i<r.size();i++)
        {
            if(!vis[i] && r[i] < s[0])
                s1+=r[i];
            else if(!vis[i] && r[i] >= s[0])
                s2+=r[i];
        }
        sort(all(s1));
        sort(all(s2));
        ans=min(ans,s1+s+s2);
        cout<<ans<<"\n";
    }
    return 0;
}