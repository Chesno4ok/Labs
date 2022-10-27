#include <iostream>
#include <string>
#include <string.h>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string t = "Собака кошка бегемот ";
	string gl = "аоуэыяёюеиАОУЭЫЯЁЮЕИ";

	string temp = "";
	string temp1;

	string* qs = new string[t.length()];
	int qsc = 0;

	int c = 0;
	int q = 0;
	int st = 0, nd = 0;
	bool IsChecking = false;

	for (int i = 0; i < t.length(); i++)
	{

		if (IsChecking)
		{
			if (t[i] == *" ")
			{
				IsChecking = false;
				nd = i;

			}
			
			if (!IsChecking)
			{

				temp.append(t, st, nd);
				c = 0;
				for (int x = 0; x < temp.length(); x++)
				{
					temp1 = temp[x];

					if (temp1.find_first_of(gl) == 0)
					{
						c++;
					}
				}
				if (c > q)
				{
					for (int x = 0; x < t.length(); x++)
					{
						qs[x] = " ";
					}

					q = c;
					qsc = 0;
					qs[qsc] = temp;

					IsChecking = false;
					temp = "";
				}
				else if (c == q)
				{
					qsc++;
					qs[qsc] = temp;

					IsChecking = false;
					temp = "";
				}
				else
				{
					IsChecking = false;
					temp = "";
				}

			}
		}
		else
		{
			if ((t[i] >= *"а" || t[i] <= *"я") || (t[i] >= *"А" || t[i] <= *"Я"))
			{
				st = i;
				nd = 0;
				IsChecking = true;
			}
		}

	}


	cout << endl;
	for (int i = 0; i < t.length(); i++)
	{
		cout << qs[i] << " ";
	}

}