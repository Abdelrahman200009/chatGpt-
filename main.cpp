#include <iostream>
class sum{
public:
    static int get_sum(int x, int y) {
        return x + y;
    }
  };
int main() {
    int var1 = 5;
    int var2 = 6;

    std::cout << sum::get_sum(var1,var2) << std::endl;
}
