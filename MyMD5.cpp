#include <stdio.h>
#include "MD5/md5.h"


//////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	const char* szMD5 = MDFile(argv[0]);
	printf("szMD5 = %s\n", szMD5);

	getchar();
	return 0;
}

