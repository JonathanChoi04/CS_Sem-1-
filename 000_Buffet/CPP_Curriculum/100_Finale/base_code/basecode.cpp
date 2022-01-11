// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<< "         .@. ";
	int a;
	int b;
	int x = 10;
    int y = 0;

	for(b = 1; b <= 8; b++){
	   for(a = 1; a <= x; a++){
	      cout << " ";
	   }
           x--;

	   for(a = 1; a <= y; a++){
		  cout << "*";
	   }
		  y += 2;

	   cout << endl;
	}
	cout << "        | |     " << endl;
	cout << "        | |     " << endl;
	cout << "   -------------";
	
	//decoration
	gotoxy(8,7);
	cout << '$';
	gotoxy(9,5);
	cout << '%';
	gotoxy(13,6);
	cout << '&';
	gotoxy(4,11);
	cout << '!';
	gotoxy(17,11);
	cout << '!';
	gotoxy(10,9);
	cout << '#';
	gotoxy(12,8);
	cout << '$';

	char sym;
	gotoxy(1,14);
	cout << "Input a snowflake: ";
	cin >> sym;
	
	for(int a = 0; a < 8; a++){
		gotoxy(21,2+a);
		cout << sym << endl;
		sleep(1);
		gotoxy(21,2+a);
		cout << ' ' << endl;
	}
	
	
	gotoxy(22,10);
	cout << " |*";
	gotoxy(21,11);
	cout << "----";
	gotoxy(21,12);
	cout << "|  |";
	gotoxy(21,13);
	cout << "----";
	
}
	




