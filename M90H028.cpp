#include <iostream>
using namespace std;

main(){
	double x1, y1, x2, y2;
	cout << "Please type in the first spot's coordinate (x1, y1): " << endl;
	cin >> x1 >> y1;
	cout << "Please type in the second spot's coordinate (x2, y2): " << endl;
	cin >> x2 >> y2;
	cout << "The middle of the two spots (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is (" << (x1+x2)/2 << "," << (y1+y2)/2 << ")."; 
}

