#include <stdio.h>

void main()
{
    printf("\n-------FOOD MENU--------\n");
    printf("\n1. Spring Rolls, Rs.70");
    printf("\n2. Pasta, Rs.100");
    printf("\n3. French Fries, Rs.80");
    printf("\n4. Burger, Rs.90");
    printf("\n5. Chips, Rs.50");
    
    int choice;
    printf("\nEnter your choice from 1-5:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nFood Item- Spring Rolls \nPrice- Rs. 70");
            break;
        
        case 2:
            printf("\nFood Item- Pasta \nPrice- Rs. 100");
            break;
        
        case 3:
            printf("\nFood Item- French Fries \nPrice- Rs. 80");
            break;
        
        case 4:
            printf("\nFood Item- Burger \nPrice- Rs. 90");
            break;
        
        case 5:
            printf("\nFood Item- Chips \nPrice- Rs. 50");
            break;
        
        default : 
            printf("Invalid Choice!");
    }
}
