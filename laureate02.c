#include <stdio.h>

int main()
{

  /*marca do veículo*/

  char brand[10];
  printf("insert the brand of the car: \n");
  scanf("%s", brand);
  printf("your car brand is %s", brand);

  /*model age*/

  int model;
  printf("How your car model age? \n");
  scanf("%d", &model);
  printf("your car model is %d \n", model);

  /*identifier*/

  char letters[3];
  int numbers;
  printf("tell me your car identifier first 3 letters \n");
  scanf("%s", letters);
  printf("tell now the last 4 numbers \n");
  scanf("%d", &numbers);
  printf("your identifier is: %s-%d ", letters, numbers);



  return 0;
}
