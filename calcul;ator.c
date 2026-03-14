#include<stdio.h>
#include<math.h>
int main(){
    double n2;
    char ch;
    double result;
    double prev;

 
   

    printf("enter any  number :-");
   
    while(scanf("%lf", &result) != 1) {
    printf("Invalid input! Try again: ");
    while(getchar() != '\n');  // clear buffer
}
    
    do{

 
    printf("enter operator(*,+,-,/,r,^,%):-");
    scanf(" %c", &ch);
    if(ch == '=') break;

    if(ch=='r'){
        prev=result;
        result=sqrt(result);
        printf("sqrt(%.2f) is %.2f\n", prev, result);
        continue;
    }
  
  
    printf("enter any  number :-");
  
    while(scanf("%lf", &n2) != 1) {
    printf("Invalid input! Try again: ");
    while(getchar() != '\n');  // clear buffer
}
    

        switch(ch){
            case '*':
            prev = result;
            result=result*n2;
            printf("%.2f*%.2f is %.2f\n",prev,n2,result);
            break;

             case '-':
              prev = result;
            result=result-n2;
            printf("%.2f-%.2f is %.2f\n",prev,n2,result);
            break;

             case '/':
             if(n2==0){
                printf("DIVISION BY 0 IS NOT POSSIBLE .");
             }
             else{
              prev = result;  
            result=result/n2;
            printf("%.2f/%.2f is %.2f\n",prev,n2,result);
        
        }
            break;

             case '+':
              prev = result;  
            result=result+n2;
            printf("%.2f+%.2f is %.2f\n",prev,n2,result);
            break;

            case'^':
             prev = result;  
            result=pow(result,n2);
            printf("%.2f^%.2f is %.2f\n",prev,n2,result);
            break;

            case'%':
             prev = result;  
            result=fmod(result,n2);
            printf("%.2f%%%.2f is %.2f\n",prev,n2,result);
            break;




               default:
            printf("Invalid operator!\n");
    }

 

           

        
    }while(ch!='=');
    
    return 0;
}