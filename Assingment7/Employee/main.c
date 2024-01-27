#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
    char *name;
    int salary;
    int hours;
}employee_t;

void print_data(employee);

char* get_string(void);
employee_t def_employee(void);
int main()
{
    int EMPLOYEES_NUM;
    printf("Enter The number of employees: ");
    scanf("%d",&EMPLOYEES_NUM);
    employee_t employees[EMPLOYEES_NUM];
    for(int i=0;i<EMPLOYEES_NUM;i++)
    {
        employees[i]= def_employee();
    }
    for(int i=0;i<EMPLOYEES_NUM;i++)
    {
       print_data(employees[i]);
    }
    return 0;
}

char* get_string(void)
{
    fgetc(stdin);
    char *string =(char*)malloc(sizeof(char));
    int i=0;
    char c;
    while((c =getchar()) !='\n'){
    string = realloc(string,sizeof(char)*(i+1));
    *(string+i)=c;
    ++i;

    }
    *(string+i)='\0';


    return string;
}
employee_t def_employee(void)
{
    employee_t emp;
    char *nam ;
    int sal,hr;

    printf("Enter employee's name: ");
    emp.name =get_string();
    printf("Enter The Salary : ");
    scanf("%d",&sal);
    printf("Enter working hours per day:");
    scanf("%d",&hr);
    emp.hours=hr;
    if(hr<10)
        sal+=50;
    else if(hr>=10&&hr<12)
        sal+=100;
    else
        sal+=150;
    emp.salary=sal;

    return emp;
}

void print_data(employee_t emp)
{
    printf("Name:%s Salary:%d\n",emp.name,emp.salary);
}

