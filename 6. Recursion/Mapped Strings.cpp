/*We are given a hashmap which maps all the letters with number. Given 1 is mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you have to print all the possible strings.

Input 123
Output ABC AW LC*/

#include<bits/stdc++.h>
using namespace std;
void generate_strings(string input,string output)
{
	if(input.size()==0)
	{
		cout<<output<<endl;
		return;
	}
	//take single char
	char ch=input[0]-'0'+'A'-1;
	generate_strings(input.substr(1),output+ch);

	//take two char
	if(input.size()>1)
	{
		string str=input.substr(0,2);
		int num=stoi(str);
		if(num<=26)
		{
			char ch2='A'+num-1;
			generate_strings(input.substr(2),output+ch2);
		}
	}
	return;
}

int main() {
	string input;
	cin>>input;
	generate_strings(input,"");
	return 0;
}
