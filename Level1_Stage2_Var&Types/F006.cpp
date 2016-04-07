#include <iostream>
using namespace std;

main(){
	/* character into ascii*/ 
	char tmp;
	cin >> tmp;
	cout << tmp << ":" << int(tmp) << endl;
	tmp++;
	cout << tmp << ":" << int(tmp);
	return 0;
}

