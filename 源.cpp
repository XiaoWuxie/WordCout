#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	if (argc == 3) {
		char array1[1000];
		char array2[1000];
		strcpy(array2, argv[2]);
		strcpy(array1, argv[1]);
		FILE* fp;
		int character = 0, word = 0;
		char ch;
		if ((fp = fopen(array2, "r")) == NULL)
		{
			printf("���ļ�����\n");
			return 0;
		}
		ch = fgetc(fp);

		char temp = ch;
		while (ch != EOF)
		{
			if ((ch == ' ' || ch == ',' || ch == '\n') && (temp != ' ' && temp != ',' && temp != '\n'))
			{
				word++;
			}
			character++;
			temp = ch;
			ch = fgetc(fp);
		}
		if (temp != ' ' && temp != ',' && temp != '\n')
			word++;
		if (array1[1] == 'c') {
			printf("�ַ���:%d\n", character);
		}
		else if (array1[1] == 'w') {
			printf("������:%d\n", word);
		}
		else {
			printf("�������\n");
		}
		fclose(fp);
	}
	else {
		printf("������󣡣���\n");
	}
	return 0;
}
