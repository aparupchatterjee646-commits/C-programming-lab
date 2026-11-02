//write a c programe to print the following pattern
//*w.a.p to print
//12345
//1234
//123
//12
//1
#include <stdio.h>
int main()
{
    int n, i, j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
} 
	
