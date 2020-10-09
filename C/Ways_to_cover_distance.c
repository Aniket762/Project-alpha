    #include<stdio.h>
    void main()
    {
        int n;
        printf("enter n: ");
        scanf("%d",&n);
        int steps=(n*(n-1)/2)+1;
        printf("steps: %d",steps);
    }
