#include <stdio.h>
#include <string.h> 
#include "owner.h"

const int MAX = 100;
int authorize(void){
    //check if entered password matches data
    char inputString[MAX] = {};

    FILE *pass = fopen("password.txt", "r");
    if(!pass){
        printf("Error opening file.\n");
        return 0;}
    char password[MAX];
    fgets(password, MAX, pass);
    fclose(pass);

    // strip newline from password
    int len = strlen(password);
    if (password[len-1] == '\n') password[len-1] = '\0';

    int match = 1;     
    int retry = 3;

    while(retry>0){
            int count = 0;
            printf("Enter your password: \nTries Remaining = %d \n", retry);
            fgets(inputString, sizeof(inputString), stdin);
            // strip newline from input
            len = strlen(inputString);
            if (inputString[len-1] == '\n') inputString[len-1] = '\0';

        while (password[count] != '\0' || inputString[count] != '\0') {
            if (password[count] != inputString[count]) {
                match = 0;
                break;
            }
            count++;
        }
    if(match){
        printf("\n\tAuthorization Successful ^-^! \n");
        owner_menu();
        return 1;
    }
    else{
        printf("Try Again! :( \n\n");
        retry = retry - 1;
    }
}
    printf("Max tries exceeded :(\n");
    return 0;
}
void owner_menu(){
    printf("\tChoose your service:\n");
    printf("\n----------- Owner menu ----------\n");
    printf("|\t\t\t\t|\n"
           "|\t1. Add/Edit Stock \t|\n"
           "|\t2. Check Inventory \t|\n"
           "|\t3. Collect Money \t|\n"
           "|\t4. Change Password \t|\n"
           "|\t5. Check Purchase Trend |\n"
           "|\t6. Main Menu \t\t|\n");
    printf("---------------------------------\n");
    int input;
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        add_stock();
        break;
    case 2:
        check_inventory();
        break;
    case 3:
        collect_money();
        break;
    case 4:
        change_password();
        break;
    case 5:
        check_trends();
        break;
    case 6:
        return 0;
        break;
    
    default:
        break;
    }
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