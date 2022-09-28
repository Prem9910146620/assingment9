main()
{
    int var;
    printf("if(var == 1) \n System.out.println good; \n  else if(var == 2) \n System.out.println better; \n else if(var == 3) \n System.out.println best; \n else \n System.out.println invalid;");
      printf("\n enter the value of var=");
      scanf("%d",&var);
      switch(var)
      {
      case 1:
        printf("good");
        break;
        case 2:
        printf("better");
        break;
        case 3:
        printf("best");
        break;


      } if(var>3)
      printf("invalid");

return 0;
}
