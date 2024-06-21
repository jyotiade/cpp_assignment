#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int mx(vector<int>&n)
{
int m=n[0];
int c=n[0];
for(int i=1;i<n.size();i++)
{
c=max(n[i],c+n[i]);
m=max(m,c);
}
return m;
}
int main()
{

vector<int>v{1,4,2};
cout<<mx(v);
}