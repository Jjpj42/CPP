#include <iostream>
using namespace std;
int main()
{
	int C ;
	cout << "Enter Celsius Tempereture : " ;
	cin >> C ;
	cout << endl;
	cout << "Fahrenheit = " << (1.8 * C) +32 << endl;
	cout << "Now weather in thai is " << (((1.8* C)+32) >= 70 ? "HOT" : "COOL")<< endl;
	return 0;



}