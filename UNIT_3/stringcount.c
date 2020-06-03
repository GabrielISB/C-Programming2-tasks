int count_words(char phrase[]) {
	int i = 0;                  /* index into the string */
	int word_count = 0;         /* count of seen words */

	while (1) {

		if (phrase[i] == '\0') {
			/* end of the string, get out of the loop */
			break;
		}

		if (phrase[i] == '\n') {
			/* newline is not a word character */
			++i;
			continue;
		}

		/
		/
		if (phrase[i] != ' ') {
			if (i == 0) {
				++word_count;
			} else if (phrase[i - 1] == ' ') {
				++word_count;
			}
		}

		++i;
	}

	return word_count;
}

int main(void) {
	int result;
	char line[100];             

	printf("Enter a string: ");
	fgets(line, sizeof(line), stdin);

	result = count_words(line);
	printf("Found %d words\n", result);

	return(0);
}
