#include<iostream>
using namespace std;
bool checkprime(int n);
int main()
{
	
	int number;
	cout << "Enter number : ";
	cin >> number;
	if (checkprime(number) == true) {
		cout << number << " Is  Prime Number." << endl;

	}
	else if (checkprime(number) == false) {
		cout << number << " Is Not Prime Number." << endl;
	}
	




	return 0;
}
bool checkprime(int number)
{

	int count = 0;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			count++;
		}


	}

	if (count == 0) {
		
		return true;
	}
	else {
		
		return false;
	}


}
