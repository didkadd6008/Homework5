#include <stdio.h>
#include <math.h>

void rectangle(double w, double h, double* S, double *P){
*P = 2 * (w + h);
*S = w * h;
}

int main(){
    double first,second,S,P;

    while (scanf("%lf %lf",&first,&second) != EOF)
    {
        if (first > 0 && second > 0)
        {
            rectangle(first,second,&S,&P);
            printf("S = %.2lf",S);
            printf("P = %.2lf",P);

        }else{
            printf("Invalid input!");
        }
        
    }
    return 0;
}