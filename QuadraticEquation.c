#include <stdio.h>
#include <math.h>


void positiveDiscriminant(double a,double b,double discriminant,double* root1,double* root2){
    *root1 = (-b + sqrt(discriminant)) / (2 * a);
    *root2 = (-b + sqrt(discriminant)) / (2 * a);
}

void equalDiscriminant(double a,double b,double* root1,double* root2){
    *root1 = *root2 = -b / (2 * a);
}


void negativeDiscriminant(double a, double b, double discriminant ,double* realPart,double * imag){
  *realPart =  -b / (2 * a);
   *imag = sqrt(-discriminant) / (2 * a);
}


int main(){
    double a,b,c,discriminant,root1,root2,realPart,imag;
    

    while (scanf("%lf %lf %lf",&a,&b,&c) != EOF){
        discriminant = pow(b,2) - (4 * a *c);

        if (discriminant > 0)
        {
            positiveDiscriminant(a,b,discriminant,&root1,&root2);
            printf("root1 = %lf , root2 = %lf",root1,root2);
        }else if (discriminant = 0)
        {
            equalDiscriminant(a,b,&root1,&root2);
            printf("root1 = root2 = %.2lf;", root1);
        }else{
            negativeDiscriminant(a,b,discriminant,&realPart,&imag);
             printf("root1 = %.2lf + %.2lfi , root2 = %.2lf - %.2lfi",realPart,imag,realPart,imag);
        }
        
        
    }
}