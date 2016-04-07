#include <iostream>
using namespace std;

main(){
	/*ascii into character*/
	int tmp;
	cin >> tmp;
	cout << tmp << ":" << char(tmp) << endl;
	tmp++;
	cout << tmp << ":" << char(tmp);
	return 0;
}

