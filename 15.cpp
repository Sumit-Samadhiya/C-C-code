#include <stdio.h>

int main() {
    float costPerDozen, sellingPricePerDozen;
    float dozenCount = 25 / 12;
    printf("Dr %f",dozenCount);
    float bananaCount = 25;
    float totalCost, totalSellingPrice, profit;

    printf("Enter the cost per dozen bananas: ");
    scanf("%f", &costPerDozen);

    printf("Enter the selling price per dozen bananas: ");
    scanf("%f", &sellingPricePerDozen);

    totalCost = costPerDozen * dozenCount;
    totalSellingPrice = sellingPricePerDozen * dozenCount;
    profit = totalSellingPrice - totalCost;

    printf("\nProfit/Loss Calculation:\n");
    printf("----------------------------\n");
    printf("Total Cost: $%.2f\n", totalCost);
    printf("Total Selling Price: $%.2f\n", totalSellingPrice);
    printf("Profit/Loss: $%.2f\n", profit);

    return 0;
}

