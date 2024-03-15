#include<stdio.h>
int main()

{
    printf("\n\n\n-----------------------------------CALCULATOR----------------------------------\n \n");
    printf(" \t \t \t \tOperation Menu\n\n");
    printf("1. Sum  \t 2. Subtraction \t 3. Multiplication \t 4. Division\n");
    printf("5. log    \t 6. log10  \t\t 7. Exponential(exp) \t 8. Power\n");
    printf("9. Sine    \t 10. Cosine  \t\t 11. Tangent \n\n");
    printf(" \t \t \t \tOther Operations \n\n");
    printf("12. Decimal to Binary \t\t 13. Decimal to Octal\n");
    printf("14. Decimal to Hexa-Decimal \t 15. Binary to Decimal\n");
    printf("16. Binary to Octal \t\t 17. Binary to Hexa-Decimal\n\n\n");

    //sqrt,nCr,nPr,!,quadratic equation,matrix,calculus,basic probability,probability tree

    int choice,option;
    printf("Enter Your Choice: ");
    scanf("%d",&choice);


    if(choice==1)
    {
        sum();
        printf("1. Exit\n");
        printf("2. Another Operation\n");
        scanf("%d",&option);
        if(option == 2)
        {
            printf("Enter Your Choice: ");
            scanf("%d",&choice);

        }
    }
     if(choice==2)
    {
        sub();
        printf("1. Exit\n");
        printf("2. Another Operation\n");
        scanf("%d",&option);
        if(option == 2)
        {

            printf("Enter Your Choice: ");
            scanf("%d",&choice);
        }
    }
}

//Calculation of Sum

void sum()
{

    int num1,num2;
    printf("Enter Two Numbers: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Sum of %d + %d = %d\n",num1,num2,num1+num2);

}

//Calculation of Subtraction

void sub()
{

    int num1,num2;
    printf("Enter Two Numbers: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Sum of %d - %d = %d\n",num1,num2,num1-num2);


}

//Options--> Exit/Another Operation
void options()
{

    int choices;
    printf("Enter Your Choice: ");
    scanf("%d",&choices);
}
