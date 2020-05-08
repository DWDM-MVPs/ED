/*
#include <stdio.h>
#include <string.h>

const char* Replace(const char* string, const char* filter, const char* replacement)
{
	char buffer[4096];
	const char* p;
	int i = 0;

	while (string[i])
	{
		if ((p = strstr(string + i, filter)) == false)
		{
			return string;
		}

		strncpy(buffer + strlen(buffer), string + i, (p - string) - i);
		buffer[p - string] = '\0';
		strcat(buffer, replacement);
		printf("STR: %s\n", buffer);
		i = (p - string) + strlen(filter);
	}

	return string;
}

const char* ConvertePastaWin_To_Unix(const char* pasta_win)
{
	return Replace(pasta_win, "\\", "//");
}

const char* ConvertePastaUnix_To_Win(const char* pasta_unix)
{
	return Replace(pasta_unix, "//", "\\");
}





int main()
{
	const char* pasta_WIN = "C:\\Users\\FMorgado\\Pictures\\Saved Pictures\\Video.mp4";
	const char* pasta_UNIX = "C://Users//FMorgado//Pictures//Saved Pictures//Video.mp4";

	printf("Pasta WIN > UNIX: %s\n", ConvertePastaWin_To_Unix(pasta_WIN));
	printf("Pasta UNIX > WIN: %s\n", ConvertePastaUnix_To_Win(pasta_UNIX));

	return 0;
}
*/