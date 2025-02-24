#include <iostream>


using namespace std;




bool checkMask(unsigned long mask)
{
	char* buff = new char[33];
	int index = 31;
	while (buff[index] >= 0)
	{
		buff[index--] = (mask % 2 == 0) ? '0' : '1';
		mask /= 2;
	}

	buff[32] = '\0';

	int difference = 0;

	for (int i = 0; i < 31; i++) {
		if (buff[i] != buff[i + 1]) {
			difference++;
		}
	}
	delete[] buff;
	return difference == 1;

}

bool checkAddres(char* _mask)
{

	return true;
}

unsigned long charToLong(char* addres)
{


	return 4;
}

int main()
{
	
	setlocale(LC_ALL, "rus");

	unsigned long ip, mask, host, subnet, broadcast;

	char* _ip, *_mask;

	bool flag = true;
	
	_mask = new char[16];

	do
	{
		if (!flag)
		{
			cout << "Неправильная маска";
		}
		do
		{
			if (!flag) cout << "Неверно введена маска!" << endl;
			cout << "Маска: ";
			cin >> _mask;
		} while (!(flag = checkAddres(_mask)));

		mask = charToLong(_mask);

	} while (!(flag = checkMask(mask)));





	return 0;
}
