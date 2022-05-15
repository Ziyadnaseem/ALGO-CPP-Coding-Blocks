/*Prateek is an extremely gifted student. He is great at everything including Combinatorics, Algebra, Number Theory, Geometry, Calculus, etc. He is not only smart but extraordinarily fast!.

One day Prateek was trying to find out if any one can possibly do calculations faster than him. As a result he made a very great contest and asked every one to come and take part.

In his contest he gave the contestants many different pairs of numbers. Each number is made from digits 0 or 1. The contestants should write a new number corresponding to the given pair of numbers. The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ. In the other case the i-th digit of the answer is 0.

Prateek made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length 8 (length of a number is number of digits in it) in a glance! He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person numbers of same length.

Now you are going to take part in Shapur's contest. See if you are faster and more accurate.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2,ans="";
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==s2[i])
			{
				ans+="0";
			}
			else
			{
				ans+="1";
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
