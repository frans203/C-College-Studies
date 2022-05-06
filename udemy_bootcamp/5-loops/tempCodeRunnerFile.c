Enter a grade between 0 to 100: ");
        scanf("%d", &grade);
    }while(grade < 0 ||  grade > 100);

    printf("Thanks! Your grade is: %d", grade);
    return 0;