#include <iostream>
#include <vector>
#include <algorithm>

struct Destination {
    std::string name;
    double price;
};

bool compareByPrice(const Destination &a, const Destination &b) {
    return a.price < b.price;
}

int main() {
    std::vector<Destination> destinations = {
        {"Paris", 1200.50},
        {"Cairo", 800.00},
        {"Tokyo", 1500.00},
    };

    std::sort(destinations.begin(), destinations.end(), compareByPrice);

    std::cout << "Destinations sorted by price:\n";
    for (const auto &d : destinations) {
        std::cout << d.name << " - $" << d.price << "\n";
    }

    return 0;
}
