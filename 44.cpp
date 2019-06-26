#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s; 
	int count = 0;
	int last = s.length() - 1;

	cin >> s;
	for (int i=0; i<last/2; i++)
	{
		if (s[i] == s[last-i])
			count++;
	}
	if (count == last/2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	cout << endl;
	return 0;
}
