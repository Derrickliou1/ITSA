#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	
	getline(cin, s);
	printf("There are %d characters\n", s.length());
	
	return 0;
}
