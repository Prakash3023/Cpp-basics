//full pyramid 
/*#include <iostream>
using namespace std;

int main()
{
	int rows, columns, number = 1, n = 5;
	for (rows = 0; rows <= n; rows++) {
	
		 
		for (columns = 0; columns < rows; columns++) {
			cout << number << " ";
			number++;
		}
		cout << "\n";
	}
	return 0;
}*/


//inverted pyramid
/*#include <iostream>
using namespace std;
int main()
{
	int n = 4;
	for (int i = n; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}*/



//prinnt without reassingning
/* 
#include <iostream>
using namespace std;

int main()
{
	int rows, columns, number = 1, n = 5;
	for (rows = 0; rows <= n; rows++) {
		for (columns = 0; columns < rows; columns++) {
			cout << number << " ";
			number++;
		}
		cout << "\n";
	}
	return 0;
}
*/

//character pattern
/*
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int rows = 5;
	char character = 'A';
	for (i = 0; i < rows; i++) {
		for (j = 0; j <= i; j++) {
			cout << character << " ";
		}
		cout << "\n";
		character++;
	}
	return 0;
}
*/


//contineous character pattern
/*
#include <iostream>
using namespace std;
 
int main()
{
 
    int i, j;
    int rows = 5;
    char character = 'A';
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            cout << character << " ";
            character++;
        }
        cout << "\n";
    }
    return 0;
}
*/

//Diamond shape
/*
#include <bits/stdc++.h>
using namespace std;
void printDiamond(int n) 
{ 
	int space = n - 1; 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0;j < space; j++) 
			cout << " "; 
		for (int j = 0; j <= i; j++) 
			cout << "* "; 
		cout << endl; 
		space--; 
	} 
	space = 0; 
	for (int i = n-1; i > 0; i--) 
	{ 
		for (int j = 0; j < space; j++) 
			cout << " "; 
		for (int j = 0;j < i;j++) 
			cout << " *";
		cout << endl;
		space++; 
	} 
}
int main() 
{ 
	printDiamond(5); 
	return 0; 
} 
*/

