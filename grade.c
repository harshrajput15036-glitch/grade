#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;

    printf("Enter the marks of english: ");
    scanf("%f", &a);

    printf("Enter the marks of Hindi: ");
    scanf("%f", &b);

    printf("Enter the marks of maths: ");
    scanf("%f", &c);

    printf("Enter the marks of science: ");
    scanf("%f", &d);

    printf("Enter the marks of social_science: ");
    scanf("%f", &e);


    f = (a+b+c+d+e)/5;
    printf("percentage: %.2f\n ", f);

    if(f>=90)
    {
        printf("A");
    }
    else if(f>=80)
    {
        printf("B");
    }
    else if(f>=70)
    {
        printf("C");
    }
    else if(f>=60)
    {
        printf("D");
    }
    else if(f>60)
    {
        printf("E");
    }
    else if(f>=50)
    {
        printf("Fail !");
    }
    else
    {
        printf("Invalid marks");
    }
    return 0;


}