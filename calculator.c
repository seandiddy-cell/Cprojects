//imports
#include <stdio.h>
#include <stdbool.h>


//calculator needs
//add
//subtract
//multiply
//divide
//square root

int add(int n1,int n2) {
	/* adds two numbers together returns sum as int */
	int sum = n1 + n2;//add
	return sum;
}

int subtract(int n1, int n2) {
	/* subtracts n1 from n2 */
	int sum = n1 - n2;//subtract
	return sum;
}

int multiply(int n1, int n2) {
	/* multiplies n1 by n2 */
	int total = n1 * n2;//multiply
	return total;
}

int divide(int n1, int n2) {
	/* divides n1 by n2 */
	int total = n1 / n2;//divide
	return total;
}

int numIn() {
	int num;//declared for scanf
	printf("Input a Number: ");//prints prompt
	scanf("%d", &num);//scans for int input
	num = signIn(num);//starts recursion process
	return num;//returns num back after recursion is complete
}

int signIn(int num) {
	int func;//function number selected
	int total = num;//total is num for recursion
	printf("Input function wanted: 0.getTotal 1.add 2.subtract 3.multiply 4.divide:  "); //prints prompt
	scanf("%d", &func);//scans for integer

	switch(func) {
	//switch for picking function
	case 0:
		break;
	case 1://addition
		total = add(total,numIn());
		break;
	case 2://subtraction
		total = subtract(total,numIn());
		break;
	case 3://multiplication
		total = multiply(total,numIn());
		break;
	case 4://division
		total = divide(total,numIn());
		break;
	}
	return total;
}

void calculatorFunc() {
	int sum;//what function was chose
	printf("Welcome to Calculator App \n");
	sum = numIn();//runs the recursion part of calculator
	printf("Total: %d", sum);
}


int main() {
	calculatorFunc();
	return 0;
}
