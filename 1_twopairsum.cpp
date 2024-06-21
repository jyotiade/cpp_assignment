#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string cmp(int n,vector<int>s,int t)
{
int left=0;
int right =n-1;
sort(s.begin(),s.end());
while(left<right)
{
int sum=s[left]+s[right];
if(sum==t)
{
return "yes";
}
else if(sum<t)
{
left++;
}
else
{
right--;
}
}
return "no";
}
int main()
{

vector<int>v{2,7,11,15};
cout<<cmp(5,v,9);
return 0;
}