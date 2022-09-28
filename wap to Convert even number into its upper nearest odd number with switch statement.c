
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
        k=j%2;
        if(k==0)
        { j++;
        printf("%d",j);
        }
        else
            printf("%d",j);
    }
}
