#include<iostream>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

char before(char x){
    char u ='0';
 if (x<='Z' and x>='A')
 {
     if(x =='A'){
     x +=25;
    }else{
        x--;
    }
 }else{
     x=u;
 }
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
