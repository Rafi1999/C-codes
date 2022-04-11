#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,tc,l,r,k,j,temp,pos;
	string s,s1;
	char ch;
	cin>>n>>tc;
	cin>>s;
	for(int i=0;i<tc;i++)
	{
		cin>>s1;
		if (s1 == "pop_back")
        {
            s.pop_back();
        }
		else if (s1 == "front")
        {
            cout << s.front()<< endl;
        }
		else if (s1 == "back")
        {
            cout <<s.back()<< endl;
        }
		else if(s1 == "sort")
		{
			cin>>l>>r;
			if(r<l)
			{
				temp=r;
				r=l;
				l=temp;
			}
			sort(s.begin()+(l-1),s.begin()+r);
		}
		else if(s1 == "reverse")
		{
			cin>>l>>r;
			if(r<l)
			{
				temp=r;
				r=l;
				l=temp;
			}
			reverse(s.begin()+(l-1),s.begin()+r);
		}
		else if(s1 == "print")
		{
			cin>>pos;
			cout<<s[pos-1]<<endl;
		}
		else if(s1 == "substr")
		{
			cin>>l>>r;
			if(r<l)
			{
				temp=r;
				r=l;
				l=temp;
			}
			cout<<(s.substr(l-1,(r-l+1)))<<endl;
		}
		else if(s1 == "push_back")
		{
			cin>>ch;
			s.push_back(ch);
		}
	}

	return 0;
}
