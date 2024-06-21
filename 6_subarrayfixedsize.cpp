//QUE6 Sum of subarray with fixed window size 3
#include<iostream>
using namespace std;
int main()
{
int a[5]={1,3,2,5,2};
int k=3; int s=0;int mx=0;int j,p=0;
for(int i=0;i<k;i++)
{
s=s+a[i];
}
cout<<s<<"\n";
mx=s;
j=k;
while(j<5)
{
s=s-a[p];
s=s+a[j];
mx=mx>s?mx:s;
p++;
j++;
}
cout<<"max sum="<<mx;
return 0;
}