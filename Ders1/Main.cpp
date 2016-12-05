#include <iostream>

using namespace std;

bool asalBul(int a);

int main()
{
	int sayi1 = 0;
	cout << "Bir sayi Girin\n";
	cin >> sayi1;

	if (asalBul(sayi1))
	{
		cout << sayi1 << " Asal Sayidir.\n";
	}
	else
	{
		cout << sayi1 << " Asal Degildir.\n";
	}

	system("PAUSE");
	return 0;
}

bool asalBul(int a) 
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}