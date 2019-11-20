#include <stdio.h>

int main()
{

  struct car {
    char brand[10];
    int model;
    char letters[3];
    int numbers;
  };

  struct car list_car[2];
  int i;
  for (i = 0; i < 2; i++) {

  /*marca do veículo*/

  printf("insert the brand of the car: \n");
  scanf("%s", list_car[i].brand);
  printf("your car brand is %s", list_car[i].brand);

  /*model age*/

  printf("How your car model age? \n");
  scanf("%d", &list_car[i].model);
  printf("your car model is %d \n", list_car[i].model);

  /*identifier*/

  printf("tell me your car identifier first 3 letters \n");
  scanf("%s", list_car[i].letters);
  printf("tell now the last 4 numbers \n");
  scanf("%d", &list_car[i].numbers);
  printf("your identifier is: %s-%d \n", list_car[i].letters, list_car[i].numbers);

  }

  printf("%p", &list_car);

  return 0;
}

