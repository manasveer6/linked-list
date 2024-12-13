#include <stdio.h>
#include <string.h>

void main() {
  
  char *dic[80] = {
    "A", "Apple",
    "B", "Boy",
    "C", "Cat",
    "D", "Dog",
    "", ""
  };

  char word[50];
  printf("Enter char A/B/C/D: ");
  scanf("%s", word);

  char **p = dic;

    while(*p) {
      if(!strcmp(*p, word)) {
        printf("%s for %s", word, *(p+1));
        break;
      }
      p = p + 2;
    }

    if(!*p)
      printf("Not found");
}
