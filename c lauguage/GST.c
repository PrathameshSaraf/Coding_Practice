#include<stdio.h>
#include<conio.h>
void main ()
{


       float  qty =1,MRP=0,TMRP=0,GST=0,Tcost=0 ;
       char  a[20];
    printf("\nwelcome in GST calculater");
    printf("\nonly  18 percent GST calculated in this software");
    printf("                                                                ");
    printf("\nenter the item name ");
    scanf("%S",&a);
    printf("                                                                ");
    printf("\nenter the quntity of item ");
    scanf("%f",&qty);
    printf("                                                                ");
    printf("\nenter the cost of this one item ");
    scanf("%f",&MRP);
    printf("                                                                ");
    TMRP =MRP*qty;
    printf("\nthe total cost is all item %f",TMRP);
     printf("                                                                ");
     GST =(MRP*qty/100)*18;
    printf ("\nthe GST on this price %f",GST);
     printf("                                                                ");
     Tcost =GST+ TMRP ;
    printf("\nthe total cost in GST include %f",Tcost);
    printf("                                                                ");
    printf("\nthank you using gst calculater");
  getch();
}
