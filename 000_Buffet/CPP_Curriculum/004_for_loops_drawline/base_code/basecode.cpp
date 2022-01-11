// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Please enter the symbol: ";
	int x = 0;
	cin >> x;
	cout << "Please enter the line length: ";
	int y = 0;
	cin >> y;
	cout << "Please enter h for horizontal, or v for vertical: ";
	int z = 0;
	cin >> z;
	for(int x = 0; x == y; x = x + 1){
		cout << x;
	}
}
