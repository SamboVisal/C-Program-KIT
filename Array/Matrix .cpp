#include <iostream>
using namespace std;

main(){
	
	int a[100][100],b[100][100],c[100][100],row1,col1,row2,col2;
	int i,j;
	cout << "Please Enter First Matrix \n";
	cout << "Enter Amout of rows "; cin >> row1;
	cout << "Enter amount of colums "; cin >> col1;
	cout << "Please Enter Second Matrix \n";
	cout << "Enter Amout of rows2 "; cin >> row2;
	cout << "Enter amount of colums2 "; cin >> col2;
	cout << "Please Enter 1st matrix : \n";
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			cin >> a[i][j];
		}
		cout << endl;
	}
	cout << "Please Enter 2nd matrix \n";
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			cin >> b [i][j];
		}
		cout <<"\n";
	}
	cout << "The first matrix is \n";
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			cout << a [i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	cout << "The second matrix is \n";
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			cout << b [i][j];
			cout << "\t";
		}
		cout << "\n";
	}
		
	
}
