#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main()
{
	int i = 60;
	char input[100] = { 0 };
	system("shutdown -s -t 60");
	while (1) {
		printf("请输入你是我爸爸，否则电脑将在%d秒后自动关机！\n");
		scanf("%s",input);
		if (strcmp(input, "你是我爸爸")==0) {
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
