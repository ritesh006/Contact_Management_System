#include <stdio.h>
#include "header.h"
extern 
struct contactData{
    char name[30];
    long int contactNumber;
    char emailId[40];
   
}var1;
void contactCreation()
{
    printf("\nEnter Name: ");
    scanf("%s",var1.name);
   
    printf("\nEnter contactNumber: ");
    scanf("%ld",&var1.contactNumber);
   
    printf("\nEnter EmailId: ");
    scanf("%s",var1.emailId);
   
    printf("\nName is: %s ",var1.name);
    printf("\nNumber is: %ld ",var1.contactNumber);
    printf("\nEmailId is: %s \n",var1.emailId);
   
}