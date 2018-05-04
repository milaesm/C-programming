#include<stdio.h>

int main()

{

//Declaring Variables//

int choice1;
int choice2;
int choice3;
int choice4;
int choice5;


printf("Press 1 for Female or press 2 for Male"); //Asking for input//

printf("\nYour choice is: ");

scanf("%d",&choice1);

if(choice1==1) //If function//

{

printf("\nPress 1 for Superhero");

printf("\nPress 2 for Super Villain");

printf("\nYour choice is: ");

scanf("%d",&choice2);

if(choice2==1) //All outputs depend on users input//

{

printf("\nPress 1 for Steak");

printf("\nPress 2 for Sushi");

printf("\nYour choice is: ");

scanf("%d",&choice3);

if(choice3==1)

printf("\nYou should get a flat top"); //Output//

else

printf("\nYou should get a pompadour");    

}

else

printf("\nYou should get a mohawk");

}

else

{

printf("\nPress 1 for Superhero");

printf("\nPress 2 for  Super Villain");

printf("\nYour choice is: ");

scanf("%d",&choice4);

if(choice4==1)

{

printf("\nPress 1 for Anime");

printf("\nPress 2 for Sitcom");

printf("\nYour choice is:  ");

scanf("%d",&choice5);

if(choice5==1)

printf("\nYou should go with bangs");

else

printf("\nYou should get a bob");

}

else

printf("\nYou should get a mohawk");

}

return 0;

}