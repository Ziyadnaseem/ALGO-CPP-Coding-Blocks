/*Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.*/
#include<iostream>
using namespace std;
int main() {
	char c;
	cin>>c;
	int i=(int)c;
	if(i>=97 && i<=122)
	{
		cout<<"lowercase";
	}
	else if(i>=65 && i<=90)
	{
		cout<<"UPPERCASE";
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}
