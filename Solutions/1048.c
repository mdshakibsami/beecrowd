#include<stdio.h>
int main()
{

    float salary,newSalary,moneyEarned;
    scanf("%f",&salary);

    if(salary<=400)
    {
        moneyEarned = (salary*15)/100;
        newSalary = salary+moneyEarned;
        
        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: %d %\n",15);
    }
    else if(salary>400 && salary<=800)
    {
        moneyEarned = (salary*12)/100;
        newSalary = salary+moneyEarned;
        
        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: %d %\n",12);
    }
    else if(salary>800 && salary<=1200)
    {
        moneyEarned = (salary*10)/100;
        newSalary = salary+moneyEarned;
        
        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: %d %\n",10);
    }
    
    else if(salary>1200 && salary<=2000)
    {
        moneyEarned = (salary*7)/100;
        newSalary = salary+moneyEarned;
        
        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: %d %\n",7);
    }
    
    else if(salary>2000)
    {
        moneyEarned = (salary*4)/100;
        newSalary = salary+moneyEarned;
        
        printf("Novo salario: %.2f\n",newSalary);
        printf("Reajuste ganho: %.2f\n",moneyEarned);
        printf("Em percentual: %d %\n",4);
    }
    
    


        return 0;
}