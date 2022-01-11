// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code her
	//lab making a calculator
	int num1, num2, answer;
    char op;
    while(true){
    	cout << "Enter the first number: ";
    	cin>>num1;
    	cout<<"Enter the second number: ";
    	cin>>num2;
    	cout<<"Enter operator (+, -, *, /)";
    	cin>>op;
    	if(op== '+'){
    		 answer  = num1+num2;
    		 cout<<answer ;
    		 break;
    	}
    	else if(op== '-'){
        	answer  = num1-num2;
        	cout<<answer ;
    		break;
    	}
    	else if (op== '*'){
    		answer  = num1*num2;
        	cout<<answer ;
        	break;
    	}
    	else if (op== '/'){
    		answer  = num1/num2;
        	cout<<answer ;
        	break;
    	}
    	else {
    		cout<<"You entered wrong operator";
    	}
    }
}
