#include <stdio.h>

int main() {
    char hi[] = {'H', 'i', ' ', 'a', 'l', 'l', '!', '!' };
    char helloeveryone[16] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                             'e', 'v', 'e', 'r', 'y', 'o', 'n', 'e', '!' };
    puts(hi);
    puts(helloeveryone);
    printf("%p %p", hi, helloeveryone);
}
