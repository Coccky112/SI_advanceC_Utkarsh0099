#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[30];
    float price;
    int stock;
};

int main()
{
    struct Product p[10];
    int n = 0;
    int choice, ch, id, i, qty;
    float bill = 0;

    while (1)
    {
        printf("\n1.Owner\n2.Customer\n3.Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n1.Add\n2.Delete\n3.Change Price\n4.Update Stock\n5.Display\n");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                printf("Enter ID Name Price Stock\n");
                scanf("%d%s%f%d", &p[n].id, p[n].name, &p[n].price, &p[n].stock);
                n++;
                break;

            case 2:
                printf("Enter Product ID : ");
                scanf("%d", &id);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        p[i] = p[n - 1];
                        n--;
                        printf("Deleted");
                        break;
                    }
                }
                break;

            case 3:
                printf("Enter Product ID : ");
                scanf("%d", &id);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("New Price : ");
                        scanf("%f", &p[i].price);
                    }
                }
                break;

            case 4:
                printf("Enter Product ID : ");
                scanf("%d", &id);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        printf("New Stock : ");
                        scanf("%d", &p[i].stock);
                    }
                }
                break;

            case 5:
                printf("\nID\tName\tPrice\tStock\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\t%d\n",
                           p[i].id, p[i].name, p[i].price, p[i].stock);
                }
            }
        }

        else if (choice == 2)
        {
            printf("\n1.View Products\n2.Buy Product\n3.Payment\n");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:

                printf("\nID\tName\tPrice\tStock\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\t%d\n",
                           p[i].id, p[i].name, p[i].price, p[i].stock);
                }

                break;

            case 2:

                printf("Enter Product ID : ");
                scanf("%d", &id);

                printf("Quantity : ");
                scanf("%d", &qty);

                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        if (qty <= p[i].stock)
                        {
                            bill = p[i].price * qty;
                            p[i].stock -= qty;
                            printf("Product Added");
                        }
                        else
                            printf("Out of Stock");
                    }
                }

                break;

            case 3:

                printf("Total Bill = %.2f\n", bill);
                printf("Payment Successful\n");
            }
        }

        else
            break;
    }

    return 0;
}