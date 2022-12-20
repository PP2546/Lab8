#include<iostream>
using namespace std;

char before(char x){
    
    char Result;
    if(x>='A' and x<='Z')
    { 
        if(x =='A'){
            Result='Z';
            }else{
            Result = x-1;
            }
    }else{
     Result = '0';
    }
    return Result;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
