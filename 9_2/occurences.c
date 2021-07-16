#include <stdio.h>


int my_getchar();

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++){
        ndigit[i] = 0;
    }

    while ((c = my_getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t'){
            nwhite++;
        }
        else
            nother++;
    }
    printf("digits =");
    for (i = 0; i < 10; i++)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

}


int my_getchar()
{
	int c;

	if ((c = getchar()) == EOF )
	{
		if(ferror(stdin))
		{
			perror("Error indicator is set");
			exit(1);
		}
		if(feof(stdin))
		{
			perror("end-of-file indicator is set");
			return EOF;
		}
		perror("neither error nor end-of-file indicator is set");
		exit(2);
	}
	return c;
}
