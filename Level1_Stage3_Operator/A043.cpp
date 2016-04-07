#include <iostream>
#include <string.h>
using namespace std;

main(){
	char input[15];
	cin>>input;
	for(int i=0;i<strlen(input);i++){
		cout<<hex<<uppercase<<(int)input[i]<<" ";
	}
}

