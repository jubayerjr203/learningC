#include <stdio.h>

int main(void){

int num;
printf("enter a number: ");
scanf("%d", &num);

if ((num % 4 == 0 && num % 100 !=0 )|| num %400 == 0){
printf("%d is leep year", num);

} else{
printf("%d is not leep year", num);

}



}