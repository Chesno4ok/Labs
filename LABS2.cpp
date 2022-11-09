#include <iostream>
#include <string>
#include <string.h>
#include <Windows.h>

int revert(int a)
{
	int n = a;

	string temp = "";

	string t1 = to_string(n);

	for (int i = t1.length() - 1; i >= 0; i--)
		temp += t1[i];

	n = stoi(temp);

	return n;
}

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << revert(12);
	
	cout << "Hello world \n ";

	

	

}