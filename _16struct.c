// #include<stdio.h>
// #include<string.h>
// struct Books{
//     char title[50];
//     char author[50];
// };
// int main()
// {
//     struct Books book1;
//     strcpy(book1.title,"C++ Programming");
//     strcpy(book1.author,"Bjarne Stroustrup");
//     printf("Book 1 title :%s\n",book1.title);
//     printf("Book 1 author:%s\n",book1.author);
// }


















// #include<stdio.h>
// #include<string.h>

// struct Books{
//     char title[40];
//     char author[40];
// };
// int main()
// {
//     struct Books book1;
//     strcpy(book1.title,"C++ Programming");
//     strcpy(book1.author,"Bjarne Stroustrup");
//     printf("Book 1 title: %s\n",book1.title);
//     printf("Book 1 author: %s\n",book1.author);
// }

#include<stdio.h>
#include<string.h>
struct Books{
    char title[50];
    char author[50];
};
int main()
{
    struct Books book1;
    strcpy(book1.title,"C++ Programming");
    strcpy(book1.author,"Bjarne Stroustrup");
    printf("Book 1 title :%s\n",book1.title);
    printf("Book 1 author :%s\n",book1.author);
}