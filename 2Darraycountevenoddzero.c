#include<stdio.h>
int main(){
	int a[10][10],nr,nc,r,c,e,o,z;
	printf("enter the no of rows and cols");
	scanf("%d%d",&nr,&nc);
	printf("enter the %d elements",nr*nc);
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			scanf("%d",&a[r][c]);
		}
	}
	printf("the %dx%d matrix is:\n",nr,nc);
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			printf("%6d",a[r][c]);
		}
		printf("\n");
	}
	printf("\tEVEN\tODD\tZERO\t\n");
	printf("------------------------------\n");
	for(r=0;r<nr;r++){
		e=0,o=0,z=0;
		for(c=0;c<nc;c++){
		if(a[r][c]==0){
			z++;
		}
	    else if(a[r][c]%2==0){
			e++;
		}
		else
		{
			o++;
		}
		}
		printf("%d-row\t%d\t%d\t%d\t\n",r+1,e,o,z);
	}
	return 0;
}
