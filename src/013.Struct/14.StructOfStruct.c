#include <stdio.h>
struct Employee {
	int age;
	int salary;
};
struct Company {
	struct Employee employee;
	char name[10];
};
int main() {
	struct Company compony;
	
	compony.employee.age = 31;
	compony.employee.salary = 50000000;
	
	printf("근로자의 나이 : %d살 \n", compony.employee.age);
	printf("근로자의 급여 : %d원/년 \n", compony.employee.salary);
	
	return 0;
}