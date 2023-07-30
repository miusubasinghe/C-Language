#include<stdio.h>
int main()
{
 char letter;
 printf("ASCII Values for Letters A to Z:\n");
 for(letter='A'; letter<='Z';++letter)
 {
 printf("%c:%d\n", letter, letter);
 }
 return 0;
}
