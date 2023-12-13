#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int consonants = 0, digits = 0, vowels = 0, spaces = 0, character = 0, words = 0;
	char str[] = "My name is Walter Hartwell White. I live at 308 Negra Arroyo Lane, Albuquerque, New Mexico, 87104. This is my confession.";
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
		if (isdigit(str[i]))
		{
			digits++;
		}
		else if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' ')
		{
			consonants++;
		}
		else if (str[i] != ' ')
		{
			vowels++;
		}
		else
		{
			spaces++;
		}
		character++;
		if (i == 0 && str[i] != ' ' || str[i] != ' ' && str[i - 1] == ' ')
		{
			words++;
		}
	}
	printf("Consonants: %d\nVowels: %d\nDigits: %d\nSpaces: %d\nCharacters: %d\nWords: %d", consonants, vowels, digits, spaces, character, words);
}

