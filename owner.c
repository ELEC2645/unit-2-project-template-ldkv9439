#include <stdio.h>
#include <string.h> 
#include "owner.h"

const int MAX = 100;
void authorize(void){
    //check if entered password matches data
    char inputString[MAX] = {};
    printf("Enter your password: \n");
    fgets(inputString, sizeof(inputString), stdin);
    int lenStr = strnlen(inputString, MAX);
    


}

void add_stock(){
    //if authorized allow to add more stock
}
void check_inventory(void){
    // if authorized allow to check inventory
}
void collect_money(void){
    //if authorized allow to collect money
}
void change_password(void){
    // if authorized and allow to change password
}