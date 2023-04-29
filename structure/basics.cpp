#include<bits/stdc++.h>
using namespace std;

struct person{

float salary;
int age;


};


int main()
{
    struct person person1, person2;

    person1.salary = 2000.50;
    person1.age = 25;

    cout<<"Person 1 Info: "<<endl;


    cout<<"Salary: "<<person1.salary>>endl;
    cout<<"Age: "<<person1.age>>endl;

}
