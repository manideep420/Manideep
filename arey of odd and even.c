#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int odd[10], even[10];
   int i, j = 0, k = 0;

   for(i = 0; i < 10; i++) {
      if(arr[i] % 2 == 0) { 
         even[j] = arr[i]; 
         j++;
      } else { 
         odd[k] = arr[i]; 
         k++;
      }
   }

   printf("Odd elements: ");
   for(i = 0; i < k; i++) {
      printf("%d ", odd[i]);
   }

   printf("\nEven elements: ");
   for(i = 0; i < j; i++) {
      printf("%d ", even[i]);
   }

   return 0;
}
