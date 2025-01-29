#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calc.h"

void fatal(char* msg) {
    fprintf(stderr, "<bin2dec> Error: %s\n", msg);
    exit(1);
}

int is_valid_binary(char* binary) {
    for(size_t i = 0; i < strlen(binary); ++i) {
        if (binary[i] != '0' && binary[i] != '1') {
            return 0;
        }
    }

    return 1;
}

void usage() {
    printf("USAGE: ./bin2dec <binary>");
}

int main(int argc __attribute__((unused)), char* argv[]) {
    if (argc < 2 || argc > 3) {
        usage();
        exit(1);
    }

    if (strcmp(argv[1], "-s") == 0) {
        if (!argv[2] || !is_valid_binary(argv[2])) {
            usage();
            exit(1);
        }

        long long result = b2d_convert(argv[2], 1);

        fprintf(stdout, "%lld\n", result);

        return 0;
    }
  
    if (!is_valid_binary(argv[1])) {
        fatal("Invalid binary");
    }

    long long result = b2d_convert(argv[1], 0);

    fprintf(stdout, "%lld\n", result);

    return 0;
}

