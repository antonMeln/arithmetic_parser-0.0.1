#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {

char f,op ;
int a, b;

cin >> a >> f;

if (f == '<' || f == '>') {
	cin >> op >> b;
	if ( f == '<' && op == '<' ) {
	 cout << (int)(a << b) << endl; 	
	}
	else if (f == '>' && op == '>') {
		cout << (int)(a >> b) << endl;
	}
	         else cout << "ERROR";

}
	else {
		cin >> b;
		
		switch (f) {
	case '+': cout << (int)(a + b) << endl; 
     break;
	case '-': cout << (int)(a - b) << endl;
     break;
	case '*': cout << (int)(a * b) << endl; 
     break;
	case '/': cout << (double)(a / b) << endl; 
     break;
	case '%': cout << (int)(a % b) << endl;
     break;
	case '&': cout << (int)(a % b) << endl; 
     break;
	case '|': cout << (int)(a | b) << endl; 
     break;
	case '^': cout << (int)(a ^ b) << endl; 
        break;
	           	default: cout << "ERROR";
	}
	}

system("pause");
cin.get();

return 0;
}
