#include<stdio.h>

int main()
{
    char name[50];
    int age;
    char email[50];
    char phone[15];
    char address[100];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your email: ");
    scanf("%s", email);
    
    printf("Enter your phone: ");
    scanf("%s", phone);
    
    printf("Enter your address: ");
    scanf("%s", address);
    
    printf("\nPersonal Details\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Address: %s\n", address);
    
    return 0;
}
