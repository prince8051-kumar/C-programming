// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122){
	    printf("small");
	}
	else if(ch>=65&&ch<=90){
	    printf("capital");
	}
    else{
        printf("character is invalid");
    }
	return 0;

}