#include <iostream>
#include <vector>
#include <string>
using namespace std;

void encrypt(vector<char> &abc, vector<char> &cba)
{
	int mark = 0, markW = 0;
	char ch;
	string mass, word;
	cout << "Enter your massage - ";
	cin >> mass;
	cout << endl;
	cout << "Enter your key - ";
	cin >> word;

	for (int i = 0; i < mass.size(); i++)
	{
		mark = 0;
		markW = 0;

		for (int j = 0; j < abc.size(); j++)
		{
			if (mass[i] == abc[j])
			{
				mark = j;
				break;
			}
		}

		for (int k = 0; k < 26; k++)
		{
			if (word[i] == abc[k])
			{
				markW = k;
				break;
			}
		}

		for (int l = 0; l <= markW; l++)
		{
			if (mark + l > 25)
			{
				ch = abc[mark + l - 26];
			}
			else
			{
				ch = abc[mark + l];
			}

		}
		cba.push_back(ch);
	}
}
void decrypt(vector<char> &abc, vector<char> &cba)
{
	int mark, markW;
	char ch;
	string mass, word;
	cout << "Enter your massage - ";
	cin >> mass;
	cout << endl;
	cout << "Enter your key - ";
	cin >> word;
	for (int i = 0; i < mass.size(); i++)
	{
		mark = 0;
		markW = 0;
		for (int k = 0; k < 26; k++)
		{
			if (word[i] == abc[k])
			{
				markW = k;
				break;
			}
		}

		for (int j = 0; j < abc.size(); j++)
		{

			if (j + markW < 25 && mass[i] == abc[j + markW])
			{
				mark = j;
				break;
			}
			else if (j + markW > 25)
			{
				if (mass[i] == abc[j + markW - 26])
				{
					mark = j;
					break;
				}

			}
		}
		cba.push_back(abc[mark]);
	}

}
int main()
{
	vector<char> abc;
	vector<char> cba;
	char ch;
	for (int i = 0; i < 26; i++)
	{
		abc.push_back(97 + i);
	}
	cout << "If you want to encrypt, enter '+' " << endl << "If you want to decrypt enter '-' " << endl;
	cin >> ch;

	if (ch == '+')
	{
		encrypt(abc, cba);
		cout << "Your cipher is ";
		for (int i = 0; i < cba.size(); i++)
		{
			cout << cba[i];
		}
		cout << endl;
	}
	else
	{
		decrypt(abc, cba);
		for (int i = 0; i < cba.size(); i++)
		{
			cout << cba[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
