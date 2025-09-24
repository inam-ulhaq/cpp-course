// Title: Conditional Statements
// Author: Inam Ul Haq
// Description: 
// 		Conditional statements are the statements that decide the flow of execution 
// 		in a program based on some condition. If the condition is true one specific 
// 		block will be executed while if the condition is false another specific 
// 		block will be executed. 
//
// 		Syntax:
//		if(condition){
//			block of code
//		}
//		else{
//			block of code
//		}
//
// 		If the condition is evaluated into true or any non-zero integer value i.e 1,2,3,-3,-6 etc, 
//		then the 'if' block of code will be executed. Otherwise if the condition evaluated 
//		into 0 or false then the 'else' block of code will be executed.
//
// 		Relational Operators:
//			==  Equal to
//			!=  Not equal to
//			>   Greater than
//			<   Less than
//			>=  Greater than or equal to
//			<=  Less than or equal to
//
// 		Logical Operators:
//			&&  Logical AND (true only if both conditions true)
//			||  Logical OR  (true if at least one condition true)
//			!   Logical NOT (inverts the value of condition)
//
// 		These operators are used inside conditions to compare values or 
//		combine multiple conditions.
//
// 		Example:
#include <iostream>
int main(){
	
	bool condition=true; // try changing this to false to see the difference
	
	if(condition){
		std::cout<<"Condition is true."<<std::endl;
	}else{
		std::cout<<"Condition is false."<<std::endl;
	}

	// Using relational and logical operators example:
	int a = 10, b = 20;
	if (a < b && b > 0){ // relational + logical AND
		std::cout<<"a is less than b AND b is positive"<<std::endl;
	}

	if (!(a == b)){ // logical NOT
		std::cout<<"a is not equal to b"<<std::endl;
	}

	return 0;
}
