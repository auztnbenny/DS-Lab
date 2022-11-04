#include <stdio.h>
struct Polynomial {
int expo;
int coeff;
};
void create_poly(struct Polynomial P[], int term);
void display_poly(struct Polynomial P[], int term);
int main()
{
int term;
printf("Enter the number of terms : ");
scanf("%d", &term);
struct Polynomial P[term];
create_poly(P, term);
display_poly(P, term);
}
void create_poly(struct Polynomial P[], int term){
printf("\nEnter the largest exponent and it's coefficient first\n");
for(int i=0; i<term; i++)
{
printf("Enter coefficient %d : ", i+1);
scanf("%d", &P[i].coeff);
printf(" Enter exponent %d : ", i+1);
scanf("%d", &P[i].expo);
}
}
void display_poly(struct Polynomial P[], int term){
printf("\nThe corresponding polynomial is\n");
for(int i=0; i<term-1; i++)
{
printf("%d(x^%d) + ", P[i].coeff, P[i].expo);
}
printf("%d(x^%d)\n", P[term-1].coeff, P[term-1].expo);
}
