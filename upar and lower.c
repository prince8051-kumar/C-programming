// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122){
	    printf("your letter is lowercase");
	}
	else if(ch>=65&&ch<=90){
	    printf("your letter is uparcase");
	}
    else{
        printf("character is invalid");
    }
	return 0;

}