// Title: else-if ladder
// Author: Inam Ul Haq
// Description:
//   	This is an extension of nested if. Usually when we
// 		use multiple nested if statments, the code looks more
// 		conjusted, so we use an else-if ladder.
// 		else-if ladder is a way to test multiple conditions
// 		one after another.
//		-It starts with an if condition.
//		-Then use one or more else-if conditions.
//		-Optionally ends with an else block.
//		-If any condition is true, its block will execute
// 		 and the remaining blocks will be skipped.
//		-If no condition is true, the else block will execute
//		if it exists. 
//
//	Syntax
//		if(condition){
//			//block of code
//		}
//		else if(condition){
//			//block of code
//		}
//		else{
//			//block of code
//		}
//
//	Example:
//		finding maximum number out of 10, 15, 20.

#include <iostream>

int main(){
	int num1=10, num2=15, num3=20; // variable to store values.

	// else-if ladder
	if( num1>num2 && num1>num3 ){
		std::cout<<num1<<" is the maximum number."<<std::endl;
	}
	else if(num2>num3){
		std::cout<<num2<<" is the maximum number."<<std::endl;
	}
	else{
		std::cout<<num3<<" is the maximum number."<<std::endl;
	}
	return 0;
	
}
