
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
	
void main2()
{
	int v1 = 0; 
	int v2 = 0;
	cout << "Enter first number to add :";
	cin >> v1; 
	cout << "Enter second number to add :";
	cin >> v2; 

	cout << "The Sum is:" << v1 + v2 << endl;
	}

void main1()
{
	int v1 = 0;
	int v2 = 0;
	int v3 = 0;
	cout << "Enter first number to average :";
	cin >> v1;
	cout << "Enter second number to average :";
	cin >> v2;
	cout << "Enter third number to average :";
	cin >> v3;

	float ans = (((float)v1) + v2 + v3) / 3.0f;

	cout << "The average is is:" << ans << endl;
	}

void main3()
{
	int cnt = 10;
	int i;
	for (i = 1; i < cnt; i=i+2)
	{
		cout << i;
		//cout << i << endl;
	}
}

void main4()
{
	int bigArray[4][3] = { {1,7,3},{9,8,7},{0,7,0},{67,21,457 } };
	cout << bigArray;
}

void main5()
{
	int a = 3;
	unsigned char b = a;
	switch(b)
	{
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "a";
		break;
	default :
		cout << "d";

	}
	cout << endl;
}

	// add and comment out main1(), main2(), etc to main() as required
int main()

{



	//main1();

	cout << endl;

	main5();

	cout << endl;

	//main2();

	}