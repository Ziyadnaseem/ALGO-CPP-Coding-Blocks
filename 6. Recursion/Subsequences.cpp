/*Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++*/

#include<bits/stdc++.h>
using namespace std;
void generate_subseq(string input,string output)
{
	if(input.size()==0)
	{
		cout<<output<<" ";
		return;
	}
	generate_subseq(input.substr(1),output);
	generate_subseq(input.substr(1),output+input[0]);
	return;
}

int main() {
	string input;
	cin>>input;
	generate_subseq(input,"");
	cout<<endl<<(1<<input.size());
	return 0;
}
