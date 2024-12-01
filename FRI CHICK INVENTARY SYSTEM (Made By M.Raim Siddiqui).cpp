#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX_ITEMS 100

void displayCart();
void removeItemFromCart(char *name);
void add_item(char *name, int quantity, float price);
void justinbieber();
void cart_menu();
int Login(int p, int id);

typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

Item cart[MAX_ITEMS];
int cartSize = 0;

int main(void) {
    int id, p;

    printf("\t\t\t\t\t\t\t*Fri-Chicks*\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t   *When MoM`s Not Cooking*\t\t\t\t\t\t\n");
    printf("\n\n\n\t\t\tEnter your Login ID : ");
    scanf("%d", &id);
    printf("\t\t\tEnter Password :");
    scanf("%d", &p);
    Login(p, id);

    return 0;
}

int Login(int p, int id) {
    if (id == 2525) {
        if (p == 1234) {
            printf("\n\t\t\t\t\t\t\t\a\a**Welcome**\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\a\a  *MENU*\t\t\t\t\t\t\t\n\n\n");
            justinbieber();
            cart_menu();
        } else {
            printf("Password is Invalid\n");
        }
    } else {
        if (p == 1234) {
            printf("Login ID is invalid\n");
        } else {
            char dec;
            printf("Both Password and ID are Wrong \n");
            printf("Do You Want to TRY AGAIN\nFor YES:y\tNO:n");
            scanf(" %c", &dec);
            if (dec == 'y' || dec == 'Y') {
                system("cls");
            } else if (dec == 'n' || dec == 'N') {
                system("cls");
                printf("Program End.");
            } else {
                printf("Troubleshooting........\nProblem Detected:\rThe User Is Stupid. He does not know what to write at specified Time");
            }
        }
    }

    return 1;
}

void justinbieber() {
    printf("\t*MAZAYDAR DEALS*\t\t\t\t\t   *Burgers*\t\t\t\t *PIZZA*\n");
    printf("a: MEAL 1\tRs:370/-\t\t\t\th: Chapli Kabab Burger\t\t\tl: Pickle Pizza\n");
    printf("  1. Krizma burger\t\t\t\t\t   Rs:175/-\n");
    printf("  1. Reg. Pepsi\t\t\t\t\t\t   Only\t\t\t\t\tm: Chicken Tikka\n");
    printf("  1. Reg. Fries\n");
    printf("b: MEAL 2\tRs:470/-\t\t\t\ti: Beef Burger\n");
    printf("  1. Krizma burger\t\t\t\t\t   Rs:175/-\t\t\t\tn: Chicken Fajita\n");
    printf("  1. Reg. Pepsi\t\t\t\t\t\t   Only\n");
    printf("  1. Reg. Fries\n");
    printf("  1. Pc Chicken\n");
    printf("c: MEAL 3\tRs:270/-\t\t\t\tj: BBQ Burger\n");
    printf("  1. Reggy burger\t\t\t\t\t   Rs:175/-\t\t\t\to: Hawaiian Pizza\n");
    printf("  1. Reg. Pepsi\t\t\t\t\t\t   Only\n");
    printf("  1. Reg. Fries\n");
    printf("d: MEAL 4\tRs:390/-\t\t\t\tk: DOUBLE Maza\n");
    printf("  1. Reggy burger\t\t\t\t\t   Rs:249/-\t\t\t\tq: Vegetarian Pizza\n");
    printf("  1. Reg. Pepsi\t\t\t\t\t\t   Only\n");
    printf("  1. Reg. Fries\n");
    printf("  1. Pc Chicken\n");
    printf("e: MEAL 5\tRs:390/-\t\t\t\t\t\t\t\t\tr: Chicken Sausages Pizza\n");
    printf("  2. Pcs Chicken\n");
    printf("  1. Rice\n");
    printf("  1. Reg. Fries\n");
    printf("f: Hot Wings Deal\tRs:350/-\t\t\t\t\t\t\t\ts: Chicken Chapli Kabab\n");
    printf("  10. Hot Wings\n");
    printf("  1. Reg. Pepsi\n");
    printf("g: Super Family MEAL\tRs:1999/-\n");
    printf("  8. Pcs Chicken\t\t\t\t\t\t\t\t\t\tt: Mughali Chicken\n");
    printf("  3. Krizma burger\n");
    printf("  1. Reggy burger\n");
    printf("  8. Reg. Pepsi\n");
    printf("  1. Family Fries\t\t\t\t\t\t\t\t\t\tu: SIR.SAMI's\n\t\t\t\t\t\t\t\t\t\t\t\t  Promised Pizza\n");
    printf("\t\t\t\t\t\t\t\t\t\tPrice: depends upon sir sami's decision\n");
}

void cart_menu() {
    int choice;
    char name[50];
    int quantity;
    float price;
      
        printf("\t\t\t\t\t\t\t**CART**\a\a:\n");
         
		  block:
		   
	    printf("  1. Add Item to Cart\n");
        printf("  2. Display Cart\n");
        printf("  3. Remove Item from Cart\n");
        printf("  4. Exit\n");
        printf("  Enter your Choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
            
                printf("Enter item name: ");
                scanf("%s", &name);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                printf("Enter price: ");
                scanf("%f", &price);
                add_item(name, quantity , price);
                goto block;
                
            case 2:
                displayCart();
                break;
            case 3:
                printf("Enter item name to remove: ");
                scanf("%s", name);
                removeItemFromCart(name);
                break;
            case 4:
            	system("cls");
                printf("Program END");
                break;
            default:
                printf("Invalid choice!\n");
        }
    
}

void add_item(char *name, int quantity, float price) {
    if (cartSize < MAX_ITEMS) {
        strcpy(cart[cartSize].name, name);
        cart[cartSize].quantity = quantity;
        cart[cartSize].price = price;
        cartSize++;
    } else {
        printf("Cart is full!\n");
    }
}

void displayCart() {
    float total = 0;
    printf("Items in Cart:\n");
    for (int i = 0; i < cartSize; i++) {
        printf("%s x%d - $%.2f\n", cart[i].name, cart[i].quantity, cart[i].price);
        total += cart[i].quantity * cart[i].price;
    }
    printf("Total: $%.2f\n", total);
    
}

void removeItemFromCart(char *name) {
    int found = 0;
    for (int i = 0; i < cartSize; i++) {
        if (strcmp(cart[i].name, name) == 0) {
            for (int j = i; j < cartSize - 1; j++) {
                cart[j] = cart[j + 1];
            }
            cartSize--;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Item not found in cart!\n");
    }
}
