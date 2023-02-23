#include <iostream>
using namespace std;
int main() 
{
	int a, b,c;
	int array[20][20][20] = { {},{},{} };
	cout << " Enter scale of array" << endl;
	cout << " Enter lenght:";
	cin >> a;
	cout << " Enter width:";
	cin >> b;
	cout << " Enter height:";
	cin >> c;
	for (int i = 0; i < a; i++) {
		cout << endl;
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < c; k++) {
				cin >> array[i][j][k];
			}
		}
	}
	for (int i = 0; i < a; i++) {
		cout << endl;
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < c; k++) {
				cout << array[i][j][k];
				cout << " ";
			}
			cout << endl;
		}
	}


	return 0;
}