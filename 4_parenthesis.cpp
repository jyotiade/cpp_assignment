//=======question 4. balanced parenthesis 

#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s)
{
int n=s.size();
stack<char>st;
bool ans=true;
for(int i=0;i<n;i++)
{
if((s[i]=='{' or s[i]=='[' or s[i]=='('))
{
st.push(s[i]);
}
else if(s[i]==')')
{
if(!st.empty() and st.top()=='(')
{
st.pop();
}
else
{
ans=false;
break;
}
}
else if(s[i]=='}')
{
if(!st.empty() and st.top()=='{')
{
st.pop();
}
else
{
ans=false;
break;
}
}
else if(s[i]==']')
{
if(!st.empty() and st.top()=='[')
{
st.pop();
}
else
{
ans=false;
break;

}
}
}
return ans;
}
int main()
{
string s;
cout<<"enter=";
cin>>s;

if(isvalid(s))
{
cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}

