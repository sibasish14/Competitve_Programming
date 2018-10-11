#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r;
    cin>>r;
    while(r--)
    {
        int l,i,c=0,f=1;
        cin>>l;
        string s,ans="";
        cin>>s;
        for(i=0;i<l;i++)
        {
            if(s[i] != '.')
                ans+=s[i];
        }
        for(i=0;i<ans.size();i++)
        {
            if(ans[i] == 'H')
                c++;
            else c--;
            if(c == 2 || c < 0)
            {
                f=0;
                break;
            }
        }
        if(!f || c == 1)
            cout<<"Invalid\n";
        else cout<<"Valid\n";
    }
    return 0;
}