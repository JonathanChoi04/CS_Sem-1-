// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(17,3);
	cout << '@';
	gotoxy(20,3);
	cout << '@';
	gotoxy(14,13);
	cout << '@';
	gotoxy(16,13);
	cout << '@';
	
	
	for(int i = 0; i < 5; i++){
		gotoxy(18+i,4);
		cout << '@'; 
	}
	
	for(int i = 0; i < 5; i++){
		gotoxy(18+i,5);
		cout << '@'; 
	}
	
	for(int i = 0; i < 5; i++){
		gotoxy(18,5+i);
		cout << '@'; 
	}			
	
	for(int i = 0; i < 6; i++){
		gotoxy(13+i,10);
		cout << '@'; 
	}	

	for(int i = 0; i < 6; i++){
		gotoxy(13+i,11);
		cout << '@'; 
	}
	
}
