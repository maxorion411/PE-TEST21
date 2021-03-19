#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
char s[100];
		gets(s);
  printf("\nOUTPUT:\n");
if(strlen(s)>=5){
  	int len =strlen(s)/2+1;
  	int i;
	for(i=len-3;i<len+2;i++){
		printf("%c",s[i]);
	}
  }
  printf("\n");
  system ("pause");
  return(0);
}
