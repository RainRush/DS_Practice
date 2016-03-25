#include <iostream>
using namespace std;

main(){
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "(" << (x1+x2+x3)/3 << "," << (y1+y2+y3)/3 << ")"; //求三角形重心(x, y) 
}
