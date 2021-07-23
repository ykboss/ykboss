#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int game(char c)
{   
    int rendom=(rand()%3) + 1;
    char comp;
    int result=-1;
    if(rendom==1) {comp='S';}
    else if(rendom==2) {comp='R';}
    else {comp='P';}
    if(c==comp)
    {
        result=-1;
    }
    else if(comp=='S')
    {
        if(c=='R')
        {
            result=1;
        }
        else
        {
            result=0;
        }
    }
    else if(comp=='R')
    {
        if(c=='P')
        {
            result=1;
        }
        else
        {
            result=0;
        }
    }
    else if(comp=='P')
    {
        if(c=='S')
        {
            result=1;
        }
        else
        {
            result=0;
        }
    }
    printf("Computer's Choice is: %c",  comp);
    return result;
    
}
int main()
{
    char user,play;
    printf("Computer's Choice\n");
    printf("Select Your Choice.\nRock --> R \nPaper --> P \nScissor --> S\n");
    scanf("%c",&user);
    srand(time(NULL));
    int outcome=game(user);
    if(outcome==1)printf("\n\nYou won the match");
    else if(outcome==0)printf("\nYou lose the match");
    else printf("\nMatch Tie\n");
    return 0;    
}
