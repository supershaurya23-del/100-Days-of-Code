// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
 #include<stdio.h>
 int main(){
    float sp, cp, percent;
    printf(" enter cp and sp : ");
   
    scanf("%f %f", &cp,  &sp);
    

    if (sp>cp){
        percent = ( (sp-cp) * 100 / cp);
    
        printf(" profit %.0f%%", percent);
    }
    else if(cp>sp){
        percent = ((cp - sp) * 100 / cp  );
        printf(" loss %.0f%%", percent);
    }
    else{
        printf(" no profit no loss");
    }
    return 0;

 }