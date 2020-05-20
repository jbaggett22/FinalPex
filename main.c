#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "FinalPex.h"
#include "listAsLinkedList.h"

int main() {
    printf("hello world");
    //int numStrings = 178691;
    int numStrings = 8;
    //char dictionary[1000000][50];
    //char fileName[70];
    //char *dic;
    //malloc(sizeof(char[50]) * 178691);

//    char **dictionary = malloc(numStrings * sizeof(char *));
//    int i;
//    for (i = 0; i < numStrings; ++i) {
//        dictionary[i] = (char *)malloc(stringsize+1);
//    }
    //LinkedList* dictionaryList = createLinkedList();

    char dic[8][50];
    char balancedDic[8][50];
    char word[1000];
    FILE *fptr;
    if ((fptr = fopen("C:/Users/C22James.Baggett/CLionProjects/FinalPex/test_dictionary.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    int i = 0;
    while(!feof(fptr)){
        fscanf(fptr, "%[^\n]%*c", word);

        strcpy(dic[i], word);
        i++;
        //printf("Data from the file:\n%s\n", word);
    }
    int temp =7/2;
    printf("%d\n", temp);
//    int mid = numStrings / 2;
//    int low = mid -1;
//    int high = low + 1;
//    for(int i = 0; i < numStrings; ++i){
//        if(i == 0){
//            strcpy(balancedDic[i], dic[mid]);
//        }
//        if(i%2 != 0){
//            strcpy(balancedDic[i], dic[mid]);
//        }
//        if(i%2 == 0){
//
//        }
//        balancedDic[i] =
//        mid = numStrings / 2;
//        low = mid -1;
//        high = low + 1;

        //printf("inserting %s\n", dic[j]);
    //}
    printf("wow %s\n", dic[0]);
    //fscanf(fptr, "%[^\n]%*c", c);
    //fscanf(fptr, "%[^\n]", c);
    //printf("Data from the file:\n%s\n", c);
    fclose(fptr);


    return 0;


    //char fileName[] = "C:/Users/C22James.Baggett/source/repos/Pex4/Pex4/test_dictionary.txt";
    //FILE *file = fopen(fileName, "r");

//    char* word = NULL;
//    int i = 0;
//    int max = 50;
//    while (!feof(file)) {
//        sscanf()
//        fgets(word, max, file);
//        //sscanf(word, fileName, "%s");
//        stripNewline(word);
//        //strcpy(dictionary[i], word);
//        i++;
//
//        //insertWord(node, word);  /////
//    }
//    int fclose(FILE * file);
}


//ternaryInsert(tree, node){
//
//}


//BSTInsert(tree, node) {
//if (tree⇢root is null)
//tree⇢root = node
//node⇢left = null
//node⇢right = null
//else
//cur = tree⇢root
//while (cur is not null)
//if (node⇢key < cur⇢key)
//if (cur⇢left is null)
//cur⇢left = node
//cur = null
//else
//cur = cur⇢left
//else
//if (cur⇢right is null)
//cur⇢right = node
//cur = null
//else
//cur = cur⇢right
//        node⇢left = null
//node⇢right = null
//}
void stripNewline(char *word) {
    char *newLine;
    if ((newLine = strchr(word, '\n')) != NULL) {
        *newLine = '\0';
    }
    if ((newLine = strchr(word, '\r')) != NULL) {
        *newLine = '\0';
    }
}