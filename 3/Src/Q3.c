#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char s[4][20], t[20];
	int i ,j;
	for (i = 0 ; i<4; i++)
	scanf("%s",s[i]);
	for (i = 1 ; i<4; i++){
		for(j=1;j<4;j++){
			if (strcmp(s[j-1],s[j])>0){
				strcpy(t, s[j-1]);
				strcpy(s[j-1], s[j]);
				strcpy(s[j],t);
			}
		}
	}
	printf("OUTPUT:\n");
	for (i=0;i<4;i++)
		printf("\t%s", s[i]);
	return (0);
}
