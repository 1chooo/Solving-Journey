#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];
    int length;
    int count = 0;

    while (fgets(sentence, sizeof(sentence), stdin)) {
        length = strlen(sentence);

        for (int i = 0; i < length; i++) {
            if (sentence[i] == '\"') {
                count++;

                if (count % 2 == 1)
                    printf("``");
                else
                    printf("''");
            } else {
                printf("%c", sentence[i]);
            }
        }
    }
    
    return 0;
}
