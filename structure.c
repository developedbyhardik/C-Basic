#include<stdio.h>
#include<stdlib.h>
#include <string.h>
    
struct Book{
     char title[100];
     char author[100];
};

int main(){

      struct Book book1;
   
      strcpy( book1.title, "Harry Potter" );
      strcpy( book1.author, "JK Rowling");

      printf("%s \n", book1.title);
      printf("%s \n", book1.author);

      return 0;
}
