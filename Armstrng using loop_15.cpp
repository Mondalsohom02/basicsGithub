/* C program to print all Armstrong numbers for given range using loop statement */
#include<stdio.h>//preprocessor directives

int main()
{
	int num,r,sum,temp,s,e;
    printf("Input starting number of range: ");
    scanf("%d",&s);//user input

    printf("Input ending number of range : ");
    scanf("%d",&e);//user input

    printf("Armstrong numbers in given range are: ");
    for(num=s;num<=e;num++)
	{
         temp=num;
         sum = 0;

         while(temp!=0)
		 {
             r=temp % 10;
             temp=temp/10;
             sum+=(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
	printf("\n");
	return 0;
}
