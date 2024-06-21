#include <iostream>
#include <vector>
using namespace std;
string arng(string s)
{
vector<string> ans(10);
string tmp;
int count=0,index=0;
while(index<s.size())
{
if(s[index]==' ')
{
int pos;
pos=tmp[tmp.size()-1]-'0';
tmp.pop_back();
ans[pos]=tmp;
tmp.clear();
count++;
}

else

{
tmp+=s[index];
}

index++;
}
int pos;
pos=tmp[tmp.size()-1]-'0';
tmp.pop_back();
ans[pos]=tmp;
tmp.clear();
count++;
for(int i=1;i<=count;i++)
{
tmp+=ans[i];
tmp+=' ';
}
tmp.pop_back();
return tmp;
}

int main() {
string s="is2 this1 my3 book4";
cout<<arng(s);
}