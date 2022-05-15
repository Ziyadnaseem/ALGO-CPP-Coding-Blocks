/*Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

*/

#include<iostream>
using namespace std;

void print(char ch[],int i)
{
	if(ch[i]=='\0'||ch[i+1]=='\0')
	{
		return;
	}
	if(ch[i]!=ch[i+1])
	{
		print(ch,i+1);
	}
	else
	{
		int j=i+1;
		while(ch[j]!='\0')
		{
			j++;
		}
		while(j>=i+1)
		{
			ch[j]=ch[j-1];
			j--;
		}
		ch[i+1]='*';
		print(ch,i+2);
	}
	return;
}

int main() {
	char ch[10000];
	cin>>ch;
	print(ch,0);
	cout<<ch;
	return 0;
}
