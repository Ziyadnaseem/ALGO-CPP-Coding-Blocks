/*Print the instructions to move all the rings from peg A to B in a new line each.
Each line should follow format : Moving ring i from A/B/C to A/B/C*/

#include<iostream>
using namespace std;

void tower(int n,char src,char dest,char help)
{
	if(n==0)
	{
		return;
	}
	tower(n-1,src,help,dest);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
	tower(n-1,help,dest,src);
}

int main() 
{
	int n;
	cin>>n;
	tower(n,'A','B','C');
	return 0;
}
