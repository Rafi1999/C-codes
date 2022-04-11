#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i, cnt = 0, len, c = 0, f = 0;
	getline(cin, s);
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i + 1] == ' ' || s[i + 1] == '!' || s[i + 1] == '.' || s[i + 1] == '?' || s[i + 1] == ',' ) {
				cnt++;
				f = i + 1;
			}
		}
	}
	cout<<cnt<<endl;
	for (f; f < s.size(); f++)
	{
		if (s[f] >= 'a' && s[f] <= 'z' || s[f] >= 'A' && s[f] <= 'Z')
		{
			cnt++;
			break;
		}
	}
	cout << cnt;
}
