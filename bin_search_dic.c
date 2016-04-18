//the binary search of dictionary

#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];

};

//the function of compare the size of two string
int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;

	while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;

	if ( s1[i] < s2[i])
		answer = -1; /* s1 < s2 */
		else if ( s1[i] == s2[i])
			answer = 0;/* s1 == s2 */
			else answer = 1;/* s1 > s2 */

			return answer;
}

//the function of search words in dictionary
int lookup(const struct entry dictionary[], const char search[], const int entries)
{
	int low = 0;
	int high = entries - 1;
	int mid, result;
	int compareStrings (const char s1[], const char s2[]);

	while ( low <= high )
	{
		mid = ( low + high ) / 2;
		result = compareStrings (dictionary[mid].word, search);

		if (result == -1 )
			low = mid + 1;
		else if (result == 1 )
			high = mid - 1;
		else
			return mid;/* found it */
	}
return -1;/* not found */
}

int main (void)
{
	const struct entry dictionary[100] ={
		{"aardvark", "a burrowing African mammal"}};

		int entries = 10;
		char word[15];
		int entry;
		int lookup (const struct entry dictionary[], const char search[], const int entries);

		printf("Enter word:");
		scanf ("%14s", word);

		entry = lookup (dictionary, word, entries);

		if ( entry != -1)
			printf("%s\n", dictionary[entry].definition);
		else
			printf("Sorry, the word %s is not in my dictionary.\n", word);
		return 0;

	
}