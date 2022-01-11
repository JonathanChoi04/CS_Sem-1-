// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char x;
	cout << "Please enter the symbol: ";
	cin >> x;
	
	int y = 0;
	int z = 0;
	cout << "Please enter border char: ";
	cin >> y;
	
	char n;
	cout << "Please enter bos height: ";
	cin >> n;
	if(n == 'v'){
		while(true){
			z = z + 1;
			cout << x << endl;
			if(z == y){
				break;
			}
		
		
}
