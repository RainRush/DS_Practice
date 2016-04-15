#include <stdio.h>
#include <stdlib.h>

int main(){
	// find the letters which appears in the following sentence
	int i,f[52]={0};	//f[52] is the 26 uppercase and 26 lowercase's array
	char s[1000];	//the string array that saves the sentence or paragraph
	gets(s);	//use gets to get the string
 
	for(i=0;s[i]!=NULL;i++){	//run the loop till the next character in the string is null
		if(s[i]>='A'&&s[i]<='Z') ++f[s[i]-'A'];		//if the character is in uppercase, add one to the specific letter of f[] array
		if(s[i]>='a'&&s[i]<='z') ++f[s[i]-'a'+26];	//if the character is in lowercase, add one to the specific letter of f[] array
	}
 
	for(i=0;i<26;i++){
		if(f[i]) printf("%c:%d\n",i+'A',f[i]);	//print the uppercase letters found in the string and output it's frequency
	}
	for(i=0;i<26;i++){
		if(f[i+26]) printf("%c:%d\n",i+'a',f[i+26]);	//print the lowercase letters found in the string and output it's frequency
	}
}
