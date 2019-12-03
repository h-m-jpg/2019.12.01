#include <iostream>
#include <climits>
#define Zero 0;
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned sue = sam;

	cout << "Sam has " << sam << " dollers and Sue has " << sue << " doller deposited." << endl;
		 cout<< "Add $1 to each account. " << endl << "now";
	sam = sue + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << "dollars and Sue has " << sue;
	cout << "dollars deposited.\nPoor Sam!" << endl;
	sam = Zero;
	sue = Zero;
	cout << "Sam has " << sam << "dollars and Sue has " << sue;
		cout<< "dollars deposited." << endl;
		cout<< "Take $1 from each account. " << endl << "now";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << "dollars and Sue has " << sue;
		cout<< "dollars deposited. " << endl << "Lucky Sue!" << endl;
	return 0; 
}