//QUE7 Divide array into two subarray with equal sum
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
string div(vector<int>&v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    int pre=0;
    for(int i=0;i<v.size();i++)
    {
        pre+=v[i];
        int ans=sum-pre;
        if(ans==pre)
        return "yes";
    }
  return "no";  
}

int main()
{
    
    vector<int> v{3,4,-2,5,8,20,-10,8};
    cout<<div(v);
    }