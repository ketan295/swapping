#include<stdio.h>

main()

{
	int a , b ,temp ;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	temp=a;
	a=b;
        b=temp;
	
	printf("after swapping value of a is :%d \n ",a);
	printf("after swapping value of b is :%d ",b);
	 

}
