#include <iostream>
int main(){
	double basicSalary,percentageAllowances,percentageDeduction;
	std::cout<<"Enter Basic Salary: ";
	std::cin>>basicSalary;
	std::cout<<"Enter Percentage of Allowances: ";
	std::cin>>percentageAllowances;
	std::cout<<"Enter Percantage of Deduction: ";
	std::cin>>percentageDeduction;
	double netSalary=basicSalary + basicSalary*percentageAllowances-basicSalary*percentageDeduction;
	std::cout<<"Your Net Salary is: "<<netSalary<<std::endl;
	return 0;
}