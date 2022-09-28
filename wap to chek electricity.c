main()
{

    float j,k=0.5,n=0.75,p=1.20,a=1.50,m,x=0,y;
    int i;
    printf(" 1. For the first 50 units Rs. 0.50/unit \n 2. For the next 100 units Rs. 0.75/unit \n 3. For the next 100 units Rs. 1.20/unit \n 4. For units above 250 Rs. 1.50/unit \n");
   printf("An additional surcharge of 20 percent is added to the bill. \n");
    printf("enter your choice=");
    scanf("%d",&i);
    switch(i)
    {
       case 1:
        printf("enter the unit number \n ");
        scanf("%f",&j);
        if(j<=50)
       { m=j*k;
        y=m*20/100;
        x=m+y;
        printf("\n %.2frs",x);
        } else
        printf("invalid unit number");
        break;
         case 2:
        printf("enter the unit number \n ");
        scanf("%f",&j);
        if(j>50&&j<=100)
       { m=j*n;
        y=m*20/100;
        x=m+y;
        printf("\n %.2frs",x);
        } else
        printf("invalid unit number");
        break;
         case 3:
        printf("enter the unit number \n ");
        scanf("%f",&j);
        if(j>100&&j<=200)
       { m=j*p;
        y=m*20/100;
        x=m+y;
        printf("\n %.2frs",x);
        } else
        printf("invalid unit number");
        break;
         case 4:
        printf("enter the unit number \n ");
        scanf("%f",&j);
        if(j>200&&j<=250)
       { m=j*a;
        y=m*20/100;
        x=m+y;
        printf("\n %.2frs",x);
        } else
        printf("invalid unit number");
        break;
    }
}
