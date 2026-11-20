#include <string>
#include <vector>

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

void small_factorial() {
    int result = 1;
    for (int i = 1; i <= 6; ++i) result *= i;
    (void)result;
}

void geometric_sum() {
    int acc = 0;
    int term = 1;
    for (int i = 0; i < 8; ++i) { acc += term; term *= 2; }
    (void)acc;
}

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

extern "C" int amber_canyon();
extern "C" void prime_hollow();
extern "C" void cedar_fjord();

int main() {
    vector_reverse();
    small_factorial();
    geometric_sum();
    factorial_sum();
    prime_hollow();
    cedar_fjord();
    return amber_canyon();
}
