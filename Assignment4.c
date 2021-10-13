/*  Moses Mccabe
    Assignemt 4
     CSCI 41
*/
#include<stdio.h>
//#include<string.h>


main()
{
// char userID[5];
 float Whizbangs = 5.00, Gizmos = 10.15, Widgets = 5.99,
             Wabbits = 7.75, Elmers = 9.50;
 int Replay = 1, whizbangs, gizmos, widgets, wabbits, elmers;
 float temp, subWhizbangs, subGizmos, subWidgets, subWabbits, subElmers,
       shippingHandling, saleTax, total, grandTotal;

while(Replay == 1)
{
 char userID[5];
// system("clear");
 printf("\nWelcome to Shodd Dee Manufacturing");
 printf("\n\nHere is a List of our product");
 printf("\nWhizbangs $5.00 each");
 printf("\nGizmos $10.25 each");
 printf("\nWidgets $5.99 each");
 printf("\nWabbits $7.75 each");
 printf("\nElmers $9.50 each\n");
 
 printf("\nEnter ID: ");
 scanf("%s", &userID);

 printf("\n1 of 5 - Enter amount of Whizbangs @ $5.00 each: ");
 scanf("%f", &temp);
 whizbangs = (int)temp;
 whizbangs = abs(whizbangs);
 printf("\n2 of 5 - Enter amount of Gizmos @ $10.15 each: ");
 scanf("%f", &temp);
 gizmos = (int)temp;
 gizmos = abs(gizmos);
 printf("\n3 of 5 - Enter amount of Widgets @ $5.99 each: ");
 scanf("%f", &temp);
 widgets = (int)temp;
 widgets = abs(widgets);
 printf("\n4 of 5 - Enter amount of Wabbits @ $7.75 each: ");
 scanf("%f", &temp);
 wabbits = (int)temp;
 wabbits = abs(wabbits);
 printf("\n5 of 5 - Enter amount of Elmers @ $9.50 each: ");
 scanf("%f", &temp);
 elmers = (int)temp;
 elmers = abs(elmers);
 
 // computation
 subWhizbangs = Whizbangs * whizbangs;
 subGizmos = Gizmos * gizmos;
 subWidgets = Widgets * widgets;
 subWabbits = Wabbits * wabbits;
 subElmers = Elmers * elmers;
 
 total = subWhizbangs + subGizmos + subWabbits + subElmers + subWidgets;
 shippingHandling = total * 0.1;
 saleTax = total * 0.095;
 grandTotal = total + shippingHandling + saleTax;

 if(total > 0)
 {
  printf("\n\nEmployee ID:  %s", userID);
  if(whizbangs > 0)
    printf("\n%i Whizbangs @ $5.00      $%.2f", whizbangs, subWhizbangs);
  if(gizmos > 0)
    printf("\n%i Gizmos @ $10.25       $%.2f", gizmos, subGizmos);
  if(widgets > 0)
    printf("\n%i Widgets @ $5.99      $%.2f", widgets, subWidgets);
  if(wabbits > 0)
    printf("\n%i Wabbits @ $7.75         $%.2f", wabbits, subWabbits);
  if(elmers > 0)
    printf("\n%i Elmers @ $9.50          $%.2f", elmers, subElmers);
 
  printf("\n\nSubtotal                 $%.2f", total);
  printf("\nshippingHandling           $%.2f", shippingHandling);
  printf("\nSale Tax                   $%.2f", saleTax);
  printf("\n--------------------------------------------");
  printf("\nGrand Total                $%.2f\n\n", grandTotal);  
 }
 else
 {
   printf("\n\nYou did not puchase anyone\n");
 }

printf("Replay Application (1 - Yes, 2 - NO): ");
scanf("%i", &Replay);
printf("\n");


}

}
