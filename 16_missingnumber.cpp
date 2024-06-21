//QUE16 Missing sub array
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,4,5,7,8,9,11};
    int k=0;
    for(int i=0;i<v.size()-1;i++)
    {
        k=v[i];
        if(++k!=v[i+1])
        {
            cout<<k<<"\t";
        }
    }
}