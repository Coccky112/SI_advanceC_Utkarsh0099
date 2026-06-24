#include <stdio.h>

int main()
{
    char item_name[10][20] = {
        "Laptop", "Mobile", "Headphone", "SmartWatch",
        "TV", "Camera", "Printer", "Speaker",
        "Tablet", "PowerBank"};

    int id[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};

    int quantity[10] = {5, 10, 8, 6, 4, 3, 7, 9, 5, 12};

    float MRP[10] = {
        55000, 25000, 3000, 5000,
        45000, 35000, 12000, 4000,
        20000, 1500};

    int choice;
    float total_cost = 0;

    do
    {
        printf("\n========== CROMA ==========\n");
        printf("1. View Inventory\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nItem Name\tID\tQty\tPrice\n");

            for (int i = 0; i < 10; i++)
            {
                printf("%s\t%d\t%d\t%.2f\n",
                       item_name[i], id[i],
                       quantity[i], MRP[i]);
            }
        }

        else if (choice == 2)
        {
            int id_input;
            printf("Enter Product ID: ");
            scanf("%d", &id_input);

            int found = 0;

            for (int i = 0; i < 10; i++)
            {
                if (id_input == id[i])
                {
                    found = 1;

                    int input_quantity;
                    printf("Enter Quantity: ");
                    scanf("%d", &input_quantity);

                    if (input_quantity > quantity[i])
                    {
                        printf("Insufficient Stock!\n");
                    }
                    else
                    {
                        float cost = input_quantity * MRP[i];

                        total_cost += cost;

                        quantity[i] -= input_quantity;

                        printf("Added to Cart\n");
                        printf("Cost = %.2f\n", cost);
                    }
                    break;
                }
            }

            if (found == 0)
            {
                printf("Invalid Product ID!\n");
            }
        }

        else if (choice == 3)
        {
            printf("\n===== CROMA RECEIPT =====\n");
            printf("Total Amount = %.2f\n", total_cost);
            printf("Thank You For Shopping!\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}