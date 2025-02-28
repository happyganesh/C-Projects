#include <stdio.h>
#include <math.h>

// Function for Fibonacci 
int fibo (int a ){
    if (a == 0){
        return 0;
    }
    else if (a == 1){
        return 1;
    }
    else {
        return fibo (a-1)+ fibo(a-2);
    }
}
int fact(int a){
    if (a == 0 || a == 1 ){
        return 1;
    }
    else {
        return a*fact(a-1);
    }
}

void display(); // Define Print Calculator options Function 
int main() {
    
int choose;

float a,b;
double result;
while(1){
int status =0;
display();
scanf("%d",&choose);
if (choose == 8){
    printf("*Successfully Exited*\n");
    printf("Code by Ganesh Verma");
    break;
}
if (choose >8 || choose < 0){
    printf("You Entered Wrong Number\n");
    continue; // if you commented the contiunue if will run 
}
if (choose == 6 || choose == 7){
    printf("Enter a Number \n");
    scanf("%f",&a); 
}
if (choose >0 && choose <6){
    printf("Enter 1st Term \n");
    scanf("%f",&a);
    printf("Enter 2nd term \n");
    scanf("%f",&b);
}
switch (choose){
    case 1:
    result = a+b;
    status = 1;
    break;
    case 2:
    result = a-b;
    status = 1;
    break;
    case 3:
    result = a*b;
    status = 1;
    break;
    case 4:
    if (b ==0){
        printf("Invalid !! or  Denominator Greater");
    }
    else {
    result = a/b;
    status = 1;
    }
    break;
    case 5:
    result = pow(a,b);
    status = 1;
    break;
    case 6:
    result = fibo((int)a);
    status = 1;
    case 7:
    result = fact(a);
    status =1;
}
if (status ==1){
    printf("The Output is = %.2f",result);
}
}
    return 0;
}
void display (){
    printf("\n--- Simple Calculator ---\n");
printf("Choose an operation to calculate:\n");
printf("1. Additon\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("5. Power\n");
printf("6. Fibonacci\n");
printf("7. Factorial\n");
printf("8. EXIT\n");
}