#include<stdio.h>
int main()
{
int score;
printf("Enter your score: ");
scanf("%d", &score);
    if(score>=90){
        printf("Your grade: A\n");
}
    else if(score>=80){
        printf("Your grade: B\n");
        }
    else if(score>=70){
        printf("Your grade: C\n");
        }
     else if(score>=60){
        printf("Your grade: D\n");
     }
     else{
     printf("Your grade: F\n");
     }
printf("The if statement is easy.");
return 0;
}
