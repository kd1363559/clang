#include<stdio.h>
#include<string.h>
main()
{
	int cnt;
	char str[] = "orange";

	cnt = 0;
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("•¶š—ñF%s\n", &str[0]);
	printf("•¶š”‚Í%d•¶š\n", cnt);
	printf("•¶š”‚Í%d•¶š\n", strlen(str));
}