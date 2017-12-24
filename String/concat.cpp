#include <iostream>
#include <cstring>
using namespace std;

main(){
	int i;
	char s1[100],s2[100],result[100];
	cout << "enter first string " << endl;
	cin >> s1;
	cout << "enter second string " << endl;
	cin >> s2;
	for( i=0; s1[i]!='\0'; i++);
	for(int j=0; s2[j]!='\0';j++){
		s1[i++]=s2[j];
	}
	s1[i]='\0';
	cout << "the concatination is " << s1;
}
