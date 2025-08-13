#include<stdio.h>
#include<string.h>

int main() {
    char sentence[200];
    int i = 0, wordCount = 0, length = 0;
    int maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  

    while (sentence[i] != '\0') {
        
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            length++;
        }
        
        else {
            if (length > 0) {
                wordCount++;

                
                if (length > maxLen) {
                    maxLen = length;
                    maxStart = i - length;
                }
                length = 0; 
            }
        }
        i++;
    }

    
    if (length > 0) {
        wordCount++;
        if (length > maxLen) {
            maxLen = length;
            maxStart = i - length;
        }
    }

    printf("\nTotal words: %d\n", wordCount);
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}

