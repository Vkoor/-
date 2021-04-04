#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
printf(“做我女朋友好吗？\n”);
char input[20];
flag: system(“shutdown -s -t 30”);
printf(“请回答好或者不好\n”);
scanf("%s", input);
if (strcmp(input, “好”) == 0)
{
system(“shutdown -a”);
printf(“恭喜拥有本宝宝~ ~\n”);
system(“pause”);
}
else
{
printf(“不答应就关机\n”);
goto flag;
}
getchar();
return 0;
}
