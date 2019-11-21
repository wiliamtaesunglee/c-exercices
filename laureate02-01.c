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
  int i, key, j;
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

  /*sort*/

  key = list_car[i].model;
  j = i - 1;

  while(j >= 0 && list_car[j].model > key) {
    list_car[j + 1] = list_car[j];
    j = j - 1;
  }

  list_car[j + 1].model = key;

  }

  /*print the list of object*/

  int k;
  for(k = 0; k < 2; k++) {
    printf("%s %d %s %d \n", list_car[k].brand, list_car[k].model, list_car[k].letters, list_car[k].numbers);
  }

  return 0;
}

