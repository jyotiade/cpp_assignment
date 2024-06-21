#include<iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
map<string,int>mp;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
mp[s]++;
}
for(auto p:mp)
{
cout<<p.first<<"="<<p.second<<"\n";
}
}