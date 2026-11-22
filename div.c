#include<stdio.h>

int main(){
double a,b;
 printf("--- Division ---\n");
printf("Enter two numbers: ");
scanf("%lf %lf",&a,&b);

if(b != 0){
printf("Result: %.2lf / %.2lf = %.2lf\n",a,b,a/b);
}else{
printf("Error: Division by zero id not allowed.\n");
}

return 0;
}
