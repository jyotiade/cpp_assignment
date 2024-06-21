#include <iostream>
using namespace std;
bool iso(string s1,string s2)
{
int n=s1.length();
int m=s2.length();

int m1[256];
int m2[256];
if(n!=m)
{

return false;
}

for(int i=0;i<n;i++)
{
if(!m1[s1[i]] and !m2[s2[i]])
{
m1[s1[i]]=s2[i];
m2[s2[i]]=s1[i];
}
else if(m2[s2[i]]!=s1[i])
{
return false;
}
}

return true;
}
int main() {
bool a=iso("add","egg");
cout<<a<<"\n";
if(a)
{
cout<<"isomorphic";
}
else
{
cout<<"not isomorphic";
}
}