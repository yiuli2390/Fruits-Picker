#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

class FruitSymbol {
    public:
        FruitSymbol(string name, int weight) : name_(name), weight_(weight), count_(0) {}

        // Getter
        string getName() const { return name_; }
        int getWeight() const { return weight_; }
        int getCount() const { return count_; }
        void incrementCount() { count_++; }

    private:
        // Private attribute
        string name_;
        int weight_;
        int count_;
};

class FruitList {
    public:
        FruitList() {
            // Initialize the list of fruit symbols
            fruits_ = {
                FruitSymbol("Seven", 10),
                FruitSymbol("Bell", 15),
                FruitSymbol("Melon", 20),
                FruitSymbol("Plum", 25),
                FruitSymbol("Orange", 15),
                FruitSymbol("Lemon", 10),
                FruitSymbol("Cherry", 5)
            };
        }

        void picker(int num_pickers) {
            // Seed the random number generator with the current time
            srand((unsigned int)time(NULL));

            // Perform the specified number of pickers
            for (int i = 0; i < num_pickers; i++) {
                // Generate a random number between 1 and 100
                int rand_num = rand() % 100 + 1;
                cout << "Random number: " << rand_num << endl;

                // Determine which fruit symbol corresponds to the random number generated
                int cum_sum = 0;
                for (int j = 0; j < fruits_.size(); j++) {
                    cum_sum += fruits_[j].getWeight();
                    if (rand_num <= cum_sum) {
                        // Update the count for the chosen fruit symbol
                        fruits_[j].incrementCount();
                        cout << fruits_[j].getName() << " (count = " << fruits_[j].getCount() << ")" << endl;
                        break;
                    }
                }
            }
        }

    private:
        vector<FruitSymbol> fruits_;
};

int main() {
    FruitList fruit; // Create an Object
    // Perform 15 such random selections
    fruit.picker(15);
    return 0;
}
