/*Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).*/
#include<bits/stdc++.h>
using namespace std;
string table[] = { "","abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx","yz" };
int cnt=0;
void print(string ip,string op,int i,int n)
{
	if(i==n)
	{
		cout<<op<<" ";
		cnt++;
		return;
	}
	int ind=ip[0]-'0';
	for(int j=0;j<table[ind].size();j++)
	{
		print(ip.substr(1),op+table[ind][j],i+1,n);
	}
	return;
}

int main() 
{
	string ip;
	cin>>ip;
	print(ip,"",0,ip.size());
	cout<<endl<<cnt;
	return 0;
}
