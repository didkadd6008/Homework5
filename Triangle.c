#include <stdio.h>
#include <math.h>

void triangle(double a, double b, double c, double* S, double *P){
    double p;
    p = (a + b + c) / 2;
    *S = sqrt(p*(p-a)*(p-b)*(p-c));
    *P = a + b + c;
}

int main(){
    double first,second,third,P,S;

    while (scanf("%lf %lf %lf",&first,&second,&third) != EOF)
    {
        if (first + second > third && first + third > second && second + third > first)
        {
            triangle(first,second,third,&S,&P);
            printf("P = %.2lf",P);
            printf("S = %.2lf",S);
        }else{
            printf("Invalid input!");
            
        }
        
    }
    return 0;
}