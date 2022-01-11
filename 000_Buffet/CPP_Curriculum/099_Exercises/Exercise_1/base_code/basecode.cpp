// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 5;
	while(true){
		cout << x << endl;
		
		if(x == 25){
			break;
		}
		x = x + 1;
	}
	int y = 15;
	while(true){
		cout << y << endl;
		if(y == 5){
			break;
		}
		y = y - 1;
	}
	
	cout << endl;
	
	for(int i = 5; i <= 25; i = i + 1){
		cout << i << endl;
	}
	
	cout << endl;
	
	for(int z = 15; z >= 5; z = z - 1){
		cout << z << endl;
	}
	
	cout << endl;
	for(int a = 123; a <= 200; a = a + 2){
		cout << a << endl;
	}
	
	cout << endl;
	
	int a = 123;
	while(true){
		if(a >= 200){
			break;
		}
		cout << a << endl;
		a = a + 2;
	}
}
