#include<stdio.h>

int main(){
int n,i;
double num,result = 1;

printf("--- Multiplication ---\n");
printf("How many numbers do you wnat to multiply?");
scanf("%d",&n);

for(i=1;i<=n;i++){
printf("Enter number %d: ",i);
scanf("%lf",&num);
result = result*num;
}
printf("Result = %.2lf\n",result);
return 0;
}

