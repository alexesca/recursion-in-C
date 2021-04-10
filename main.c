#include <stdio.h>

void printSentenceFour(int numDucks, int startingDucks) {
    numDucks == 0 ?
    printf("But none of the %i little ducks came back\n\n\n", startingDucks) :
    printf("But only %d little ducks came back\n\n\n", numDucks);
}



int closingParagraph(int startingDucks) {
    char sentence1[] = "Sad mother duck went out one day\n";
    char sentence2[] = "Over the hill and far away\n";
    char sentence3[] = "Mother duck said, \"Quack, quack, quack, quack\"\n";

    printf("%s", sentence1);
    printf("%s", sentence2);
    printf("%s", sentence3);
    printf("And all of %d little ducks came back\n\n\n", startingDucks);

    return 0;

}

int mainParagraph(int numDucks, int startingDucks) {
    if (numDucks == 0) {
        closingParagraph(startingDucks);
        return 0;
    }

    char sentence1[] = "%d little ducks went out one day\n";
    char sentence2[] = "Over the hill and far away\n";
    char sentence3[] = "Mother duck said, \"Quack, quack, quack, quack\"\n";

    printf(sentence1, numDucks);
    printf("%s", sentence2);
    printf("%s", sentence3);
    printSentenceFour(numDucks - 1, startingDucks);

    return mainParagraph(numDucks - 1, startingDucks);
}




int main() {
    mainParagraph(5, 5);
    return 0;
}

