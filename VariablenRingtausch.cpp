#include <iostream>
using namespace std;

int v1 = 4;
int v2 = 7;
int v_temp;

int main()
{
	cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
	cin >> v1;
	cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
	cin >> v2;
	v_temp = v1;
	v1 = v2;
	v2 = v_temp;
	cout << "Nach dem Tausch:" << endl
		<< "Wert der ersten Variable: " << v1 << endl
		<< "Wert der zweiten Variable: " << v2 << endl;
	system("PAUSE");
	return 0;
}