#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
 int arr[100] = {0};
 int i = 0;
 string str;
 getline(cin,str);
 stringstream ss(str);
 while (ss >> arr[i++])
 {
  
 }
 for (int j = i - 2;j >= 0; j--)
 {
  if (j < i - 2)
  cout << " ";
  cout << arr[j];
 }
 cout << endl;
 return 0;
}
