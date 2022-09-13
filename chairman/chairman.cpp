#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main()
{
	srand(time(0));
	int student = 500;
	float vote;
	float votes[10];
	int votee;
	int chairman;
	cout << "Enter number student chairman : ";
	cin >> chairman;
	cout << endl;
	cout << "Number of right student : " << student << endl;
	vote = rand() % 500 + 1;
	cout << "Number of vote : " << vote << " = " << (vote / student)  * 100  << " %"<< endl;
	cout << "Number of No vote : " << student - vote << " = " << 100 - ((vote / student) * 100)<<" %"<<endl;

	cout << " Result of election chairman  " << endl;
	cout << setfill('-') << setw(35)<<"-"<<endl;
	cout << " No.\tVote\tPervent(%)" << endl;
	cout << setfill('-') << setw(35) << "-" << endl;
	votee = vote;
	float sum;
	for (int i = 0; i < chairman; i++) {
		int count = 0;
		
		if (count != vote) {
			votes[i] = rand() % votee + 1 ;
			count += votes[i];
		}
		
		votee -= votes[i];
		cout << i + 1 << "\t" << votes[i] << "\t" << (votes[i] / vote) * 100 << endl;
		
	}
	cout << setfill('-') << setw(35) << "-" << endl;
	cout << "Total\t" << vote << "\t100.0" << endl;
	




	return 0;
}


