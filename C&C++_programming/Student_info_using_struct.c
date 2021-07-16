#include <stdio.h>
struct student {             //Structure intialised
    char firstName[20];
    int roll;
    float marks;
} s[50];

int main()
 {
    int i,n;
    printf("How many student's information you want to enter(MAX 50) :\n"); //For no. of students
    scanf("%d",&n);

    // for storing information
    for(i = 1; i <= n; i++)
     {
        printf("Enter the roll no.\n");
        scanf("%d",&s[i].roll);
        printf("Enter first name: ");
        scanf("%s",&s[i].firstName);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying Information:\n\n");

    //To  display information
    for (i = 1; i <= n; i++)
     {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.2f", s[i].marks);
        printf("\n");
    }
    return 0;
}
