#include<stdio.h>

struct person{

float salary;
int age;


};


int main()
{
    struct person person1, person2;

    person1.salary = 2000.50;
    person1.age = 25;


    printf("Person 1 Info\n\n");

    printf("Salary is: %.2f Taka only!!\n",person1.salary );
    printf("Age is: %d years old!!",person1.age);

    printf("\n\n");

    person2.salary = 2500.50;
    person2.age = 26;


    printf("Person 2 Info\n\n");

    printf("Salary is: %.2f Taka only!!\n",person2.salary );
    printf("Age is: %d years old!!\n\n",person2.age);




}

