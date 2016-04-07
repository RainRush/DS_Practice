#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string input;
	char x, y;
	while(cin>>x) {
		y = x;
		cout << char(y-32) ;
	}
}
