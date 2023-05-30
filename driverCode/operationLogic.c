




void operationLogic(option)
{
    switch(option)
    {
        case 1: contactCreation();
            break;
        case 2: printf("2. Contact Search\n");
                break;
        case 3: printf("3. Contact Update\n");
                break;
        case 4: printf("4. Contact Delete\n");
                break;
        case 5: printf("5. Contact List\n");
                break;
   
    default:
            printf("Invalid Input");
    }
   
}
