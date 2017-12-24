#include <iostream>
using namespace std;
main(){
	
	char c;
	int isLower;
	cout << "Enter alphabet "; cin >> c;
	isLower = (c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u');
	if(isLower)
	cout << c << " is vowerl";
	else
	cout << c << " is consonant";
	
}
