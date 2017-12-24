#include <iostream>
#include <cstring>
using namespace std;

main(){
	int i,l;
	char s1[100],s2[100],result[100];
	cout << "enter first string " << endl;
	cin >> s1;
	cout << "enter second string " << endl;
	cin >> s2;
	strcat(s1,s2);
	l=strlen(s2);
	cout << s1 << endl;	
	cout << "the length s2 is " << l ;
	
}
