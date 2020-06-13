// 嵌套结构体
#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
}

book = {
    "红楼梦",
    "曹雪芹",
    31.2,
        {2020,11,29},
        "机械出版者"
};

int main(void)
{
    struct Book book;
    printf("请输入书名：");
    scanf("%s", book.title);
    printf("请输入作者： ");
    scanf("%s", book.author);
    printf("请输入售价：");
    scanf("%f", &book.price);
    printf("请输入出版日期：");
    scanf("%u", &book.date);
    printf("请输入出版社：");
    scanf("%s", book.publisher);

    printf("\n====数据录入完毕=====\n\n");

    printf("书名：%s\n", book.title);
    printf("作者：%s\n", book.author);
    printf("售价：%.2f\n", book.price);
    printf("出版日期：%d-%d-%d\n", book.date.year, book.date.month, book.date.day);
    printf("出版社：%s\n", book.publisher);

    return 0;
}



