#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to  Library \n");
    printf("\n");
    printf("Currently we have 5 books\n");
    printf("Fictional Genres: \n");
    const char *books_fiction[] ={"Women's Rights" , "Adventures of Tintin"};
    int fiction_count = sizeof(books_fiction) / sizeof(books_fiction[0]);

    for(int i = 0; i<fiction_count;i++)
        printf("%d.%s \n",(i+1),books_fiction[i]);


    printf("\n");
    printf("Children's Genres:\n");
    const char *books_children[] ={"Snow White", "Hansel and Gretel","Cinderella"};
    int children_count = sizeof(books_children) / sizeof(books_children[0]);
    for(int i = 0; i<children_count;i++)
        printf("%d.%s \n",(i+1+fiction_count),books_children[i]);

    printf("Would you like to donate or purchase a book?");
    printf("1.Purchase\n 2.Donate\n");
    int in;
    scanf("%d",&in);
    if(in ==1){
        printf("Which one would you like to purchase\n");
        printf("1.Women's Rights is 30$\n");
        printf("2.Adventures of Tintin is 35$\n");
        printf("3.Snow White is 20$\n");
        printf("4.Hansel and Gretel is 10$\n");
        printf("5.Cinderella is 15$\n");
        if(in == 1){
             printf("*************** Receipt ***************\n");
             printf("Item:           Women's Rights\n");
             printf("Price:          30$\n");
             printf("---------------------------------------\n");
             printf("Total:          30$\n");
             printf("****************************************\n");

        }
        else if(in == 2){
             printf("*************** Receipt ***************\n");
             printf("Item:           Adventures of Tintin\n");
             printf("Price:          35$\n");
             printf("---------------------------------------\n");
             printf("Total:          35$\n");
             printf("****************************************\n");


        }
        else if(in == 3){
             printf("*************** Receipt ***************\n");
             printf("Item:           Snow White\n");
             printf("Price:          20$\n");
             printf("---------------------------------------\n");
             printf("Total:          20$\n");
             printf("****************************************\n");


        }
        else if(in == 4){
             printf("*************** Receipt ***************\n");
             printf("Item:           Hansel and Gretel\n");
             printf("Price:          10$\n");
             printf("---------------------------------------\n");
             printf("Total:          10$\n");
             printf("****************************************\n");


        }
        else if(in == 5){
             printf("*************** Receipt ***************\n");
             printf("Item:           Cinderella\n");
             printf("Price:          15$\n");
             printf("---------------------------------------\n");
             printf("Total:          15$\n");
             printf("****************************************\n");


        }
        else
            printf("Invalid");



    }
    else if(in == 2){
            printf("Please enter your name");
            printf("Please enter the book name");
            printf("Please enter the Genre of the book");
            char name[50];
            fgets(name, sizeof(name), stdin);
            printf("Thank you, %s\n", name);
            char book[50];
            fgets(book, sizeof(book), stdin);
            printf("Book name: %s\n",book);
            char genre[50];
            fgets(genre, sizeof(genre), stdin);
            printf("Genre: %s\n",genre);



    }



    return 0;
}
