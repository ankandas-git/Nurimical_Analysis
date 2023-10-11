#include <stdio.h>
#include <stdlib.h>

float func(float x){

    return pow(x,3) - (2 * x) - 5;

    }

    float c(float a,float b,float f_a,float f_b){
         float c = (a* f_b - b*f_a) / (f_b -f_a);
         return c;
    }


    void falseMethod(float a,float b,int n){
    //float a,b;

    int i =1;
    while(i<=n){
    printf("\n---------------------------- \n");
    printf("For Iteration %d :\n\n",i);
    printf("a = %.5f b= %.5f \n",a,b);


    float f_a = func(a);
    float f_b = func(b);
    float C = c(a, b, f_a, f_b);
    float f_c = func(C);


    if(f_c < 0){
        a = C;
    }
    else{
        b=C;
    }


    printf("f(a)= %.5f f(b)=%.5f \n",f_a,f_b);
    printf("C =  %.5f\n",C);
    printf("f(c) =  %.5f\n",f_c);

    i++;
    }//loop end



    }



int main()
{
    printf("Given that: x^3 -2x - 5 \n");
    int n;
    float a,b;
    printf("input value of a and b :\n");
    scanf("%f%f",&a,&b);
    printf("How many iteration you want: \n");
    scanf("%d",&n);

    // f(a), f(b)
    falseMethod(a,b,n);


    return 0;
}
