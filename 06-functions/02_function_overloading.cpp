//Title: Function Overloading
//Author: Inam Ul Haq
//Description:
//	The functions is said to be overloaded if the names of the
//	functions are same but the perameter list is different.
//	How the perameter list can be different?
//		It may have different numbers of peramenter or same number
//		but different types of perimeters.
//	Example 

#include <iostream>
int add(int num1,int num2){
	return num1+num2;
}

int add(int num1,int num2,int num3){
	return num1+num2+num3;
}

float add(float num1,float num2){
	return num1+num2;
}

int main(){
	int num1=10,num2=20, num3=30, intResult;
	float num4=2.5f,num5=5.3f, floatResult;
	
	//calling first function with two perimeters
	intResult=add(num1,num2);
	std::cout<<"Result with two perimenters: "<<intResult<<std::endl;
	
	//calling second function with three perimeters
	intResult=add(num1,num2,num3);
	std::cout<<"Result with three perimenters: "<<intResult<<std::endl;
	
	//calling third function with float perimenters
	floatResult=add(num4,num5);
	std::cout<<"Result with float perimenters: "<<floatResult<<std::endl;
	
	return 0;
	
	
}
	