#include<stdio.h>
int strcnt(char* p,char buf[]);
main()
{
	char buf[256];
	int mojisu;
	printf("•¶š—ñHF");
	gets(buf);
	mojisu = strcnt(buf,buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·B\n", mojisu);

}

int strcnt(char* p,char buf[])
{
	int cnt,i;
	char m, k;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	for (i = 0; i == cnt || (i - 1) == cnt; i++,cnt--) {
		m = buf[i];
		buf[i] = buf[cnt];
		buf[cnt] = m;
	}
}