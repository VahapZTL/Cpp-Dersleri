#include <iostream>

using namespace std;

int main()
{
	int sayiDizi[2][2], sayiDizi2[2][2], carpim[2][2];
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << i << "]" << " " << "[" << j << "]" << "Elemani Girin:\n";
			cin >> sayiDizi[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << i << "]" << " " << "[" << j << "]" << "Elemani Girin:\n";
			cin >> sayiDizi2[i][j];
		}
	}

	//Çarpma iþlemi.
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				carpim[i][j] += sayiDizi[i][k] * sayiDizi2[k][j];
			}
		}
	}

	cout << "Sonuc: \n";
	//Sonuç.
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << carpim[i][j] << "]";
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}