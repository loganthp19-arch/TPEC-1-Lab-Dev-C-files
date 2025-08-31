#include <stdio.h>
#include <string.h>
int strStr(char* haystack, char* needle)
{
    int hsize = strlen(haystack);
    int nsize = strlen(needle);

    int res = -1;
    int i = 0, j = 0;

    while (haystack[i] != '\0' && needle[j] != '\0') 
	{
        if (haystack[i] == needle[j]) 
		{
            i++;
            j++;
        } else 
		{
            i++;
            j = 0;
        }
    }

    if (j == nsize) 
	{
        res = i - nsize;
    } else 
	{
        res = -1;
    }

    return res;
}

int main() 
{
    char haystack[100];
    char needle[100];
    scanf("%s", haystack);
    scanf("%s", needle);
    int result = strStr(haystack, needle);
    printf("%s\n", haystack);
    printf("%s\n", needle);
    printf("%d\n", result);
    return 0;
}
