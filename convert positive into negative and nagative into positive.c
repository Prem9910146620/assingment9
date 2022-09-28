
main()
{
    int i,j,k;
    printf("enter the number=1\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("enter the number=");
        scanf("%d",&j);
        if(j>0)
        printf("-%d",j);
        else k=j*-1;
            printf("%d",k);
    }
}
