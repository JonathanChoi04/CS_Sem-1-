// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout << "Input a snowflake: ";
	cin >> sym;
	
	for(int a = 0; a < 5; a++){
		gotoxy(10,2+a);
		cout << sym << endl;
		sleep(1);
		gotoxy(10,2+a);
		cout << ' ' << endl;
	}
	
	
	
}
