main()
{

    int i,j,k,m,n;
    while(1)
    { printf("\n");
        printf(" 1. to check isosceles triangle or not \n 2. to check right angle triangle or not \n 3. to check equilateral triangle or not \n 4. exit");
        printf(" \n enter your choice=");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("enter three number \n");
            scanf("%d%d%d",&j,&k,&m);
            if((j==k)||(k==m)||(m==j))
                printf("isosceles triangle");
            else
                printf("not");
            break;
        case 2:
            printf("enter three number \n");
            scanf("%d%d%d",&j,&k,&m);
            if((j*j==k*k+m*m)||(k*k==j*j+m*m)||(m*m==j*j+k*k))
                printf("right angle");
            else
                printf("not");
            break;
        case 3:
            printf("enter three number \n");
            scanf("%d%d%d",&j,&k,&m);
            if((j==k&&k==m))
                printf("equilateral");
            else
                printf("not");
            break;
        case 4:
                break;

        }
        if(i==4)
            break;
    }
}
