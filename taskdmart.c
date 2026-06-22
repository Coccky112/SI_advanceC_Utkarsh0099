#include <stdio.h>

int main()
{
    int select, qty;
    float total = 0;

    printf("====== D-Mart Billing System ------\n");
    printf("======= Inventory Invoice =======\n");
    printf("======== PURCHASE ITEMS =========\n");

    do
    {
        printf("\nProducts Available:\n");
        printf("1. Groceries              Rs.150\n");
        printf("2. Clothes                Rs.220\n");
        printf("3. Electronic Items       Rs.120\n");
        printf("4. Soft Drinks            Rs.180\n");
        printf("5. Footwear               Rs.250\n");
        printf("6. Milk                   Rs.90\n");
        printf("7. Fruits                 Rs.80\n");

        printf("\nEnter product number: ");
        scanf("%d", &select);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (select)
        {
        case 1:
            total += 150 * qty;
            break;

        case 2:
            total += 220 * qty;
            break;

        case 3:
            total += 120 * qty;
            break;

        case 4:
            total += 180 * qty;
            break;

        case 5:
            total += 250 * qty;
            break;

        case 6:
            total += 90 * qty;
            break;

        case 7:
            total += 80 * qty;
            break;

        default:
            printf("Invalid Product!\n");
            continue;
        }

        printf("Current Bill = Rs. %.2f\n", total);

        printf("\nEnter 0 to continue shopping or 1 to exit: ");
        scanf("%d", &select);

    } while (select == 0);

    printf("\n====================\n");
    printf("Final Bill = Rs. %.2f\n", total);
    printf("====================\n");

    printf("Thank You For Shopping!\n");

    return 0;
}