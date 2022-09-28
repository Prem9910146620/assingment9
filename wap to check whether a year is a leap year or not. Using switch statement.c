main()
{
    int i,j,k;

    printf("1. century year \n 2. normal year \n");
    printf("enter your choice=");
    scanf("%d",&i);
    switch(i)
    { case 1:
       {

        printf("enter the year to check leap year or not \n");
        scanf("%d",&j);
        k=j%400;
        if(k==0)
            printf("leap year");
        else
        printf("not");
        break;
       }
        case 2:
       {

        printf("enter the year to check leap year or not \n");
        scanf("%d",&j);
        k=j%4;
        if(k==0)
            printf("leap year");
        else
        printf("not");
    break;
       }
    }
}
