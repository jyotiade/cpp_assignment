#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
using namespace std;
int main()
{
vector<int> v{-13,4,80,5,-4};
int cs=0;
int maxsum=0;
for(int i=0;i<v.size();i++)
{
cs+=v[i];
if(cs<0)
{
cs=0;
}
maxsum=max(maxsum,cs);
}
cout<<"maxsum="<<maxsum;
}