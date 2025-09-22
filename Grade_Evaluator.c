#include<stdio.h>
int main()
{
    float a,b,c,tl,per;
    printf("WELCOME TO GRADE EVALUATOR\n");
    printf("Enter marks of 1st subject\n");
    scanf("%f",&a);
    printf("Enter marks of 2nd subject\n");
    scanf("%f",&b);
    printf("Enter marks of 3rd subject\n");
    scanf("%f",&c);
    tl=a+b+c;
    printf("Total marks obtain\n");
    printf("%f",tl);
    per=tl/3;
    printf("\npercentage obtain\n");
    printf("%f",per);
    system("pause");
    return 0;
}  
    
    
    
    
    
    
