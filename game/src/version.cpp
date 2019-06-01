#include <stdio.h>

void WriteVersion()
{
#ifndef __WIN32__
	FILE* fp = fopen("version.txt", "w");

	if (fp)
	{
		fprintf(fp, "TEST SV FOR CLANG8|C++2A\n");
		fprintf(fp, "BLACKDRAGONX61\n");
		fclose(fp);
	}
#endif
}

