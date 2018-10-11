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
        string s;
        int i,l=0,i_l=-1,u=0,i_u=-1,d=0,i_d=-1;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                d++;
                i_d=i;
            }
            if(65 <= s[i] && s[i] <= 90)
            {
                u++;
                i_u=i;
            }
            if(97 <= s[i] && s[i] <= 122)
            {
                l++;
                i_l=i;
            }
        }
        if(d && u && l)
        {
            cout<<s<<"\n";
            continue;
        }
        if(u && l)
        {
            if(u > 1)
                s[i_u]='1';
            else if(l > 1)
                s[i_l]='1';
        }
        else if(u && d)
        {
            if(u > 1)
                s[i_u]='a';
            else if(d > 1)
                s[i_d]='a';
        }
        else if(d && l)
        {
            if(d > 1)
                s[i_d]='A';
            else if(l > 1)
                s[i_l]='A';
        }
        else if(!u && !l)
        {
            s[0]='A';
            s[1]='a';
        }
        else if(!u && !d)
        {
            s[0]='A';
            s[1]='1';
        }
        else if(!d && !l)
        {
            s[0]='1';
            s[1]='a';
        }
        cout<<s<<"\n";
    }
    return 0;
}