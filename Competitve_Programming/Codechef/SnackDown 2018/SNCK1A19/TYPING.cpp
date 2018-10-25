#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int t,n,i,j;
double ans;
char ch;
string s[100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        map<string,double> mp;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];
        ans=0.0;
        for(i=0;i<n;i++)
        {
            if(mp[s[i]] > 0.0)
            {
                ans+=(mp[s[i]])/2.0;
            }
            else
            {
                for(j=0;j<s[i].size();j++)
                {
                    if(!j)
                    {
                        mp[s[i]]=(0.2);
                        if(s[i][j] == 'd' || s[i][j] == 'f')
                            ch='L';
                        else ch='R';
                    }
                    else
                    {
                        if(s[i][j] == 'd' || s[i][j] == 'f')
                        {
                            if(ch == 'L')
                                mp[s[i]]+=(0.4);
                            else mp[s[i]]+=(0.2);
                            ch='L';
                        }
                        else
                        {
                            if(ch == 'R')
                                mp[s[i]]+=(0.4);
                            else mp[s[i]]+=(0.2);
                            ch='R';
                        }
                    }
                }
                ans+=(mp[s[i]]);
            }
        }
        cout<<ans*10<<"\n";
    }
    return 0;
}