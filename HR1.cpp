#include<stdio.h>
//function prototype
void Indian();
void French();

int main(){
    printf("Enter nationality i for Indian & f for french: ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'i'){
        Indian();
    }
    else if(ch =='f'){ 
        French(); 
        }

    return 0;
}
//function definition
void Indian(){
    printf("Namaste! :) \n");
}
void French(){
    printf("Bonjour! :)");
}