#include <stdio.h>
struct class {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct class s1, s2, s3;

    printf("Enter the details of the first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("Enter the details of the second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    s3 = (s1.marks>s2.marks)?s1:s2;
    if(s1.marks > s2.marks)
        printf("%s has scored more marks than %s\n", s1.name, s2.name);
    else if (s1.marks < s2.marks)
        printf("%s has scored more marks than %s\n", s2.name, s1.name);
    else if(s1.marks==s2.marks)
        printf("%s and %s have scored the same marks\n", s1.name, s2.name);

    if(s1.marks!=s2.marks)
    {
    printf("Details of highest marks achiver:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s3.name, s3.roll,s3.marks);
    }
    return 0;
}
