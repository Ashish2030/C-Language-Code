#include <stdio.h>
struct student
{
    char name[50];
    int age;
};
void display(struct student s);
int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    display(s1);   // passing struct as an argument
    
    return 0;
}
void display(struct student s) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nAge: %d", s.age);
}