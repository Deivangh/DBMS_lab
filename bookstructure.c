#include<stdio.h>
#include<string.h>
union Book
{
    char title[50];
    char author[20];
    int price;
};

void main()
{
    union Book b1,b2;
    puts("Enter the book name");
    scanf("%[^\n]%*c",b1.title);
    //strcpy(b1.title,"The child");
    puts("Enter the authors name");
    scanf("%[^\n]%*c",b1.author);
    //strcpy(b1.author,"Charles davins");
    b1.price=250;
    printf("The title of the book is %s wriiten by the author %s and it costs of rupees %d",b1.title,b1.author,b1.price);

}