#include<stdio.h>
int main(){
    int roll_no, m1, m2, m3, m4, m5;
    char student_name[50];
    int total;
    float percentage;

    printf("Enter Student Name:\n");
    scanf("%s", student_name);

    printf("Enter Roll_no:\n");
    scanf("%d", &roll_no);

    printf("Enter marks of 5 subject:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\nTotal Marks : %d", total);
    printf("\nPercentage : %.2f", percentage);

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("\nGrade: F");
        printf("\nResult: FAIL");
    } else {
        if (percentage >= 80)
            printf("\nGrade: A");

        else if (percentage >= 60)
            printf("\nGrade: B");
            
        else
            printf("\nGrade: C");

        printf("\nResult: PASS");
    }
    return 0;
}