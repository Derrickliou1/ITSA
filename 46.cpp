#include<iostream>

using namespace std;

int main()
{
	double sum = 0;
        double num;
	char c;	

	while (1)
	{
		cin >> num;
		cin.get(c);
		sum += num * num;

		if (c == '\n')
		{
			break;
	
		}
	}
	printf("%.6f\n", sum);
	return 0;
}
