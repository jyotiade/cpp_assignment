//========question 3.convert roman into integer
#include<iostream>
#include<map>
using namespace std;

int roman(string s)
{
    map<char,int>mp;
    int ans=0;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;

    for (int i=0;i<s.length();++i)
    {
        if(mp[s[i]]<mp[s[i+1]])
        {
            ans=ans-mp[s[i]];

        }
        else{
            ans=ans+mp[s[i]];
        }
    }
    return ans;

}
int main()
{
    string s;
    cout<<"enter no=";
    cin>>s;
    cout<<roman(s);
}