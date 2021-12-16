#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create(char **argv, int total_files) {
    FILE *created_file = fopen(argv[2], "w");
    for (int number_of_file = 0; number_of_file < total_files; number_of_file++) {
        
    }
}

void extract(char *file_name) {

}

void list(char *file_name) {

}

int main(int argc, char **argv) {
    if (strcmp(argv[1], "--file") != 0)
        return 1;

    if (strcmp(argv[3], "--create") == 0)
        create(argv, argc - 4);

    else if (strcmp(argv[3], "--extract") == 0)
        extract(argv[2]);

    else if (strcmp(argv[3], "--list") == 0)
        list(argv[2]);

    else
        return 1;
}
