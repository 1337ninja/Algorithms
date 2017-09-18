#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using std::vector;
using std::numeric_limits;
using std::cin;
using std::cout;
using std::min;
using std::max;

double BuySellStockOnce (const vector<double>& stockPrices) {
  
  auto minPrice = numeric_limits<double>::max();
  auto maxProfit = 0.0;
  for (const auto& prices: stockPrices) {
      minPrice = min(prices, minPrice);
      auto profit = prices - minPrice;
      maxProfit = max(profit, maxProfit);
  }
  return maxProfit;
}

int main() {

    double stock;
    int n;
    cin >> n;
    vector<double> stockPrices;
    for (int i=0; i<n; i++) {
        cin >> stock;
        stockPrices.push_back(stock);
    }
    cout << BuySellStockOnce(stockPrices);
}