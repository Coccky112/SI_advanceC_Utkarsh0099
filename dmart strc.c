#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    char category[30];
    char unit[10];
    int qty;
    float mrp;
    float discount;
    float sellingPrice;
    float amount;
};

int main()
{
    int n, i;
    float subtotal = 0, gst, total;

    printf("========================================\n");
    printf("                         DMART\n");
    printf("                    INVENTORY BILL\n");
    printf("========================================\n");

    printf("Enter Number of Products: ");
    scanf("%d", &n);

    struct Product items[n];

    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Product %d ---\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &items[i].id);

        printf("Product Name: ");
        scanf("%s", items[i].name);

        printf("Category: ");
        scanf("%s", items[i].category);

        printf("Unit (Kg/Ltr/Pcs): ");
        scanf("%s", items[i].unit);

        printf("Quantity: ");
        scanf("%d", &items[i].qty);

        printf("MRP: ");
        scanf("%f", &items[i].mrp);

        printf("Discount (%%): ");
        scanf("%f", &items[i].discount);

        items[i].sellingPrice = items[i].mrp - (items[i].mrp * items[i].discount / 100);
        items[i].amount = items[i].sellingPrice * items[i].qty;

        subtotal = subtotal + items[i].amount;
    }

    printf("\n-------------------------------------------------------------------------------\n");
    printf("ID\tProduct\tCategory\tUnit\tQty\tMRP\tDisc%%\tPrice\tAmount\n");
    printf("---------------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t\t%s\t%d\t%.2f\t%.2f%%\t%.2f\t%.2f\n",
               items[i].id, items[i].name, items[i].category, items[i].unit,
               items[i].qty, items[i].mrp, items[i].discount,
               items[i].sellingPrice, items[i].amount);
    }

    gst = subtotal * 0.05;
    total = subtotal + gst;

    printf("======================================\n");
    printf("Subtotal          : %.2f\n", subtotal);
    printf("GST (5%%)          : %.2f\n", gst);
    printf("--------------------------------------\n");
    printf("Grand Total       : %.2f\n", total);
    printf("======================================\n");

    printf("Store Name        : DMart\n");
    printf("Invoice No.       : DM2026001\n");
    printf("Payment Mode      : Cash\n");
    printf("Customer Type     : Retail\n");
    printf("========================================\n");
    printf("        THANK YOU FOR SHOPPING AT DMART!\n");
    printf("========================================\n");

    return 0;
}