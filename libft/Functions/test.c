#include "libft.h"
#include <stdbool.h>


int	is_sep(char v, char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (v == c[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_len(char const *s, char *c)
{
	int	j;

	j = 0;
	while (s[j] != '\0' && is_sep(s[j], c) == 0)
	{
		j++;
	}
	return (j);
}

size_t	word_count(char const *s, char *c)
{
	size_t	count;
	int	i;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != '\0' && is_sep(s[i], c) == 1)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && is_sep(s[i], c) == 0)
			i++;
	}
	return (count);
}

char *verni_slovo(char const *s, char *c)
{
	char	*slovo;
	int	i;
	int	len;

	i = 0;
	len = word_len(s, c);
	slovo = (char *)malloc(sizeof(char) * len);
	if (!slovo)
		return (NULL);
	while (i < len)
	{
		slovo[i] = s[i];
		i++;
	}
	slovo[i] = '\0';
	return (slovo);
}



char	**ft_strsplit(char const *s, char *c)
{
	char	**array;
	int	i;

	i = 0;
	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s && is_sep(*s,c) == 1)
		{
			s++;
		}
		if (*s != '\0' && (strcmp(verni_slovo(s,c), "and") != 0))
		{
			array[i] = verni_slovo(s,c);
			i++;
    	}
		while (*s && is_sep(*s, c) == 0)
		{
			s++;
		}
	}
	array[i] = 0;
	return (array);
}

int dictionary(char *str)
{
  if (!strcmp("zero", str)){return 0;} if(!strcmp("one", str)){return 1;} if(!strcmp("two", str)){return 2;}
  if (!strcmp("three", str) ){return 3;} if(!strcmp("four", str) ){return 4;} if(!strcmp("five", str) ){return 5;} 
  if(!strcmp("six", str) ){return 6;} if(!strcmp("seven", str)){return 7;} if(!strcmp("eight", str)){return 8;} if(!strcmp("nine", str)){return 9;}
  if(!strcmp("ten", str)){return 10;} if(!strcmp("eleven", str)){return 11;} if(!strcmp("twelve", str)){return 12;} if(!strcmp("thirteen", str)){return 13;}
  if(!strcmp("fourteen", str)){return 14;} if(!strcmp("fifteen", str)){return 15;} if(!strcmp("sixteen", str)){return 16;} if(!strcmp("seventeen", str)){return 17;} 
  if(!strcmp("eighteen", str)){return 18;} if(!strcmp("nineteen", str)){return 19;} if(!strcmp("twenty", str)){return 20;} if(!strcmp("thirty", str)){return 30;}
  if(!strcmp("forty", str)){return 40;} if(!strcmp("fifty", str)){return 50;} if(!strcmp("sixty", str)){return 60;} if(!strcmp("seventy", str)){return 70;}
  if(!strcmp("eighty", str)){return 80;} if(!strcmp("ninety", str)){return 90;} if(!strcmp("hundred", str)){return 100;} if(!strcmp("thousand", str)){return 1000;}
  if(!strcmp("million", str)){return 1000000;}
  return (2000000);
}

long parse_int (const char* number) {
  
  char **strong;
  int	*arr;
  int i = 0;
  size_t  count = 0;
  long result = 0;
  
  strong = ft_strsplit(number, " -");
  arr = (int *)malloc(10 * sizeof(int));
  while(strong[i] != 0)
  {
	count++;
	arr[i] = dictionary(strong[i]);
	i++;
  }
  i = 0;
  while (i < count)
  {
	if (arr[i] == 100)
		result *= 100;
	else if (arr[i] == 1000)
		result *= 1000;
	else if (arr[i] == 1000000)
		return (1000000);
	else 
		result += arr[i];
	i++;
  }
  long rem = result % 1000;
  if (result > 100000 && rem > 100)
  {
	result /= 1000;
	result *= 10;
	result += rem;
  }
  return (result);
}

int main(int argc, char **argv)
{
  (void) argc;
  long res = parse_int(argv[1]);
//   char *blyat = "One Hundred Forty";
//   puts(blyat + 4);
  printf("%ld\n", res);
}