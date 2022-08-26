#include <stdio.h>
int main(){
	int num=9;
	float num1=1.2;
	double num2=12.4;
	char ch='a';
	int numin1;
	int numin2;
	printf("number is %d \n",num);
	printf("number is %f \n",num1);
	printf("number is %lf \n",num2);
	printf("number is %c \n",ch);
	printf("Enter an integer ");
	scanf("%d",&numin1);
	printf("The number you entered is: %d",numin1);
	printf("\nEnter  integers ");
	scanf("%d %d",&numin1,&numin2);
	printf("The number you entered is: %d %d",numin1,numin2);
	return 0;
}

