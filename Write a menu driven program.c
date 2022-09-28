main()
{
    int i,a,b,y;


    while(1)
    { printf("\n");
          printf(" 1. addition \n 2. subtraction \n 3. multiplication \n 4. division \n 5. exit");
   printf(" \n enter your choice =");

         scanf("%d",&i);
        switch(i)
     {
        case 1:
        printf("enter two number ");
        scanf(" \n %d \n %d",&a,&b);
        y=a+b;
        printf(" sum=%d",y);
        break;
        case 2:
        printf("enter two number ");
        scanf(" \n %d \n %d",&a,&b);
        y=a-b;
        printf("subtraction=%d",y);
        break;
        case 3:
        printf("enter two number ");
        scanf(" \n %d \n %d",&a,&b);
        y=a*b;
        printf("multiplication=%d",y);
        break;
        case 4:
        printf("enter two number ");
        scanf(" \n %d \n %d",&a,&b);
        y=a/b;
        printf("division=%d",y);
         break;
        case 5:
        break;
     } if(i==5)
     break;
    }
}
