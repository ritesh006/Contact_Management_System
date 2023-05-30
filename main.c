#include <stdio.h>
#include "driverCode/header.h"



int option;
int main()
{
    menuDisplay();           /* Display a menu */
    option=chooseOption();    /* taking a input and storing to option variable */
    operationLogic(option);
return 0;
}



