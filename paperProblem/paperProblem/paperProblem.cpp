#include <iostream>
using namespace std;

int main()

{

	int peoples; 
	int reports;
	reports= (peoples + 5);
	int cartridges = (140 * reports / 1200);

	cout << "Welcome!!" << endl;
	cout << endl;
	cout << "How many people will be attending the meeting ? ";
	cin >> peoples;
	cout << endl;
	cout << "Considering that "<< peoples <<" peoples will be present and an extra five,copies will be "
		"made you are gonna need " 
	<< cartridges << " cartriges to print " << reports << " reports" << endl;
	cout << endl;
	system("pause");
	cin.get();
	return 0;

}