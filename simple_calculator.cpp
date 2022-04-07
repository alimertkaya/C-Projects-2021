#include<stdio.h>

int main() {
	char op,control='t';
	float s1,s2;
	
	printf("******CALCULATOR******\n");
	while(control!='m') {
		printf("Enter an operator (+ - * /):");
		scanf("%c",&op);
		printf("Enter two operands:");
		scanf("%f %f",&s1,&s2);
		
		switch(op) {
			case '+':
				printf("%.2f+%.2f=%.2f\n",s1,s2,s1+s2);
				break;
			case '-':
				printf("%.2f-%.2f=%.2f\n",s1,s2,s1-s2);
				break;
			case '*':
				printf("%.2f*%.2f=%.2f\n",s1,s2,s1*s2);
				break;
			case '/':{
				if(s2==0) {
					printf("A number can not be divided by zero, please correct the second number you entered.\n");
					break;
				}
				else
					printf("%.2f+%.2f=%.2f\n",s1,s2,s1+s2);
				    break;
			}
			default:
				printf("Error! operator is not correct.\n");
		}
		printf("If you want to do another action, please press 't'\n");
		printf("Press 'm' to exit the calculator\n");
		scanf("%c",&control);
		if(control=='m') {
			control='m';
		}
	}
	printf("Successfully logged out of calculator.");
	return 0;
}
