//QUE14 Second largest number in array
#include <iostream>
using namespace std;
#include<vector>
int smax(vector<int>&v,int n)
{
int large=v[0];
int slarge=-1;

for(int i=1;i<n;i++)
{
if(v[i]>large)
{
slarge=large;
large=v[i];
}
else if(v[i]<large and v[i]>slarge)
{
slarge=v[i];
}
}
return slarge;
}
int main()
{
vector<int>v{10,44,32,90,55};
int n=v.size();
cout<<smax(v,n);
}