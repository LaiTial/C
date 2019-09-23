//±¸±¸´Ü Ãâ·Â ÇÁ·Î±×·¥

#include <stdio.h>

int main(void)
{
	int i = 1;

loop:

	printf("3 * %d = %d\n", i, 3 * i);
	i++;
	if (i > 9)
	{
		goto end;
	}
	goto loop;

end:

	return 0;
}
