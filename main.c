//202410111420
//15181957072@163.COM
//王庭宝
#include <stdio.h>
int main()
{   int x;
	int i;
	int cj;
	x=0;
	cj=1;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		cj=cj*(x-i);
	};
	printf("%d",cj);
    printf("Hello World");
    return 0;
}
