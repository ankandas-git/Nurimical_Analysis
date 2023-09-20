/*
solve this equation using bi section method
f(x) = x^2 -4
*/

#include<stdio.h>
#include<math.h>
#define EPSILON 0.001

float function(float x){
    return (pow(x,2)-4);
    }
void biSection(float a,float b){

    if(function(a)*function(b) >= 0){
        printf("Change the value of a and b ..\n\n\n");
        //return;
    }

    int i=1;
    float x;

    printf("  i      a        b         x         f(x)\n\n");

    while((b-a) >=EPSILON ){
    x = (a+b)/2;
    printf("% .2d   %.5f   %.5f   %.5f   %.5f\n",i,a,b,x,function(x));

        if(function(x) > 0){
            b=x;
        }else{
            a=x;
        }
    i++;
    }
}

int main(){
    printf("Given that: f(x) = x^2-4 \n\n");
    //Let

    int a=0,b=2;

    biSection(a,b);
}
