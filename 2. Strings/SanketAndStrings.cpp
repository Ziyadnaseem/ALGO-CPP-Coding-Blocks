/*Kartik Bhaiya has a string consisting of only 'a' and 'b' as the characters. Kartik Bhaiya describes perfectness of a string as the maximum length substring of equal characters. Kartik Bhaiya is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	int var1=0,var2=0,ans=0,left=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a')
		{
			var1++;
		}
		else
		{
			var2++;
		}
		if(min(var1,var2)>k)
		{
			if(s[left]=='a')
				var1--;
			else
				var2--;
			left++;
		}
		else
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
