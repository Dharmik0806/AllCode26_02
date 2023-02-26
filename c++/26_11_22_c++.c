#include<stdio.h>

int main() {
	
	int name;
	int _name;
	int secound_name;
//	int 1name;    can not start with number/digit
//	int first name;    can not allowed white space
//	int for;         can not use reserved word(for loop mate for reserved)
//	int $name;      can not use any sign after variable declaration 

	char div='A';
	int a=10;
	
	printf("%d \n",a);
	printf("%c \n",div);
	printf("dharmik\n");
	
//	ARITHMETIC OPERATOR (+ , - , * , / , %)
//% Modulo op use in only int data type
	
	int num_1;
	int num_2;
	float ans;
	char op;
	
	printf("Please Enter Number 1 :");
	scanf("%d",&num_1);
	
	printf("Please Enter Number 2 :");
	scanf("%d",&num_2);
	
	printf("Please Enter Operators :");
	scanf(" %c",&op);
	
	printf("\n");

	if(op == '+') {
		ans = num_1 + num_2;
		printf("Sum is : %f \n",ans);
	}else if(op == '-') {
		ans = num_1 - num_2;
		printf("Sub is : %f \n",ans);
	}else if(op == '*') {
		ans = num_1 * num_2;
		printf("Mul is : %f \n",ans);
	}else if(op == '/') {
		ans = num_1 / num_2;
		printf("Div is : %f \n",ans);
	}else if(op == '%') {
		ans = num_1 % num_2;
		printf("Div is : %f \n",ans);
	}else{
		printf("Wroung Opertor");
	}	
	
	printf("\n\n");
	
	printf("Number 1 : %d \n",num_1);
	printf("Number 2 : %d \n",num_2);
	printf("Operators : %c \n",op);
	
	printf("\n\n");
	
//	Unary Operators(++A , A++ , --A , A++ );
	
	printf("Unary Operators \n");
	
	printf("1 .) Increment op\n");
	printf("i ) Pre-Increment");
	printf("ii ) Post-Increment\n");
	printf("2 .) Decrement op\n");
	
	int x=5;
	int y=5;
	
	printf("\n\n");
		
	printf("++x (5)pre increment : %d \n",++x);	
	printf("++y (5)post increment : %d \n",y++);
	
	printf("\n\n");
	
	printf("++x (5)pre decrement : %d \n",--x);	
	printf("++y (5)post decrement : %d \n",y--);
	
//	Relational operators ( == , != , > , < , >= , <= );

//Logical operator ( && , || , !)

	return 0;
}

//DATA TYPE 

//basic data type : int , float , char ,doubble
//derived data type : array , pointer , structure , union;
//enumeration data type : enum;
//void data type : void;
