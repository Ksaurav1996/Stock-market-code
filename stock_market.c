#include <stdio.h>

int main() {
    float buy_price = 1480.00;
    float sell_price = 1523.00;
    float stop_loss = 1460.00;
    int quantity = 25;
    float current_price;
    float profit = 0.0;
    int time_in_trade = 0;

    printf("Enter the current price of the stock: ");
    scanf("%f", &current_price);

    while (current_price > 0) {
        if (current_price > sell_price) {
            // Sell the stock and compute the profit
            profit += (sell_price - buy_price) * quantity;
            printf("Sold stock at %.2f for a profit of %.2f\n", sell_price, (sell_price - buy_price) * quantity);
            break;
        } else if (current_price < stop_loss) {
            // Sell the stock and compute the loss
            profit -= (buy_price - stop_loss) * quantity;
            printf("Sold stock at %.2f for a loss of %.2f\n", stop_loss, (buy_price - stop_loss) * quantity);
            break;
        } else if (current_price < buy_price) {
            // Keep waiting
            printf("Waiting to buy stock at a better price\n");
        } else {
            // Keep holding the stock
            printf("Holding stock\n");
            time_in_trade++;
        }

        printf("Enter the current price of the stock: ");
        scanf("%f", &current_price);
    }

    printf("Total profit/loss: %.2f\n", profit);
    printf("Time in trade: %d\n", time_in_trade);

    return 0;
}
