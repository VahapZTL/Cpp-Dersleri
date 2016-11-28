#include <iostream>

using namespace std;

int main()
{
	int sayiDizi[5][2];
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << i << "]" << " " << "[" << j << "]" << "Elemani Girin:\n";
			cin >> sayiDizi[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "[" << sayiDizi[i][j] << "]";
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}