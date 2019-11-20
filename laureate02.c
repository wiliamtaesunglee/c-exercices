#include <stdio.h>

int main()
{

  struct car {
    char brand[10];
    int model;
    char letters[3];
    int numbers;
  };

  struct car car0;

  char list[10];

  /*marca do veículo*/

  printf("insert the brand of the car: \n");
  scanf("%s", car0.brand);
  printf("your car brand is %s", car0.brand);

  /*model age*/

  printf("How your car model age? \n");
  scanf("%d", &car0.model);
  printf("your car model is %d \n", car0.model);

  /*identifier*/

  printf("tell me your car identifier first 3 letters \n");
  scanf("%s", car0.letters);
  printf("tell now the last 4 numbers \n");
  scanf("%d", &car0.numbers);
  printf("your identifier is: %s-%d \n", car0.letters, car0.numbers);

  int count = 0;
  while ( count < 10) {
    printf("%d \n", count);
    count++;
  }

  return 0;
}
