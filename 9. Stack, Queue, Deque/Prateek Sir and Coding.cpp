/*Kartik sir loves coding. Hence, he took up the position of an instructor and founded Coding Blocks, a startup that serves students with awesome code modules. It is a very famous place and students are always queuing up to have one of those modules. Each module has a cost associated with it. The modules are kept as a pile. The job of an instructor is very difficult. He needs to handle two types of queries:

1) Student Query: When a student demands a module, the code module on the top of the pile is given and the student is charged according to the cost of the module. This reduces the height of the pile by 1. In case the pile is empty, the student goes away empty-handed.

2) Instructor Query: Sir prepares a code module and adds it on top of the pile. And reports the cost of the module. Help him manage this process.
*/

#include<iostream>
#include <stack>
using namespace std;
int main () {
	int n,q,num;
	cin>>n;
	stack<int>st;
	while(n--)
	{
		cin>>q;
		if(q==2)
		{
			cin>>num;
			st.push(num);
		}
		else
		{
			if(st.empty())
			{
				cout<<"No Code"<<endl;
			}
			else
			{
				cout<<st.top()<<endl;
				st.pop();
			}
		}
	}
	return 0;
}
