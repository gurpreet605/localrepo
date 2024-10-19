# include<stdio.h>
int main()
{
    int a;
    printf("Enter your phone passcode: ");
    scanf("%d", &a);
    if (a==6252){
        printf("Your phone is unlocked");
    }
    else{
        printf("Wrong password please try again later ");
    }
    return 0;
}
