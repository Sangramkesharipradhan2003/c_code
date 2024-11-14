##include<stdio.h>
#include<math.h>
int main()
{
    int a,i,d,b,s=0,c=0,temp;
    printf("enter the starting no");
    scanf("%d",&a);
    printf("enter the end number");
    scanf("%d",&b);
    for(i = a; i <= b; i++) {
        temp = i;
        s = 0;
        c = 0;
        while(temp > 0) {
            temp = temp / 10;
            c++;
        }
        temp = i;
        while(temp > 0) {
            d = temp % 10;
            s = s + pow(d, c);
            temp = temp / 10;
        }

    if(i==s)
    {
        printf("%d\t",i);
    }
    }
    return 0;
}
     
