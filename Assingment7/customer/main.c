#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct customer
{
    char *name;
    char *account_number;
    int balance;
} customer_t;

char* get_string(void);
customer_t get_customer(void);
void less(customer_t *data);
void add_100(customer_t *data);
int customers_number;
int main()
{
    int i;
    printf("Enter number of customers\n");
    scanf("%d",&customers_number);
    customer_t *customers =malloc(sizeof(customer_t)*(customers_number+1));
    for(i=0;i<customers_number;i++)
    {
        printf("Enter Data of Customer Number %d\n",i+1);
        customers[i]=get_customer();
    }
    printf("Names of customers who's balance less than 200$\n");
    less(customers);
    printf("Customers who's balance More than 1000$ and Their balance after Increment\n");
    add_100(customers);
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
customer_t get_customer(void)
{
    customer_t cust;
    char *nam;
    char *acc;
    int b;
    printf("Enter Customer's Name\n");
    nam = get_string();
    printf("Enter Customer's Account number\n");
    acc = get_string();
    printf("Enter Customer's Balance\n");
    scanf("%d",&b);
    cust.name=nam;
    cust.account_number=acc;
    cust.balance=b;

    return cust;
}
void less(customer_t *data)
{
    int i;
    for(i=0;i<customers_number;i++)
    {
        if(data[i].balance<200)
            printf("%s\n",data[i].name);
    }
}
void add_100(customer_t *data)
{
    int i;
    for(i=0;i<customers_number;i++)
    {
        if(data[i].balance>1000)
            {
            data[i].balance+=100;
            printf("%s his balance after increment is: %d\n",data[i].name,data[i].balance);
            }
    }
}

