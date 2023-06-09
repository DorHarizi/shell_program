#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codecA.h"
#include "codecB.h"

int main(int argc, char* argv[]){
    if(argc < 3){
        printf("Usage: encode <codec> <message>\n");
        return 1;
    }
    char* codec = argv[1];
    char* message = argv[2];
    if(strcmp(codec, "codecA") == 0){
        encode_codecA(message);
        }else if(strcmp(codec, "codecB") == 0){
            encode_codecB(message);
        }else{
            printf("Invalid code\n");
            return 1;
        }
        printf("%s\n", message);

    }
