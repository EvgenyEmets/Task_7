#include <map>
#include <limits>
#include <random>


int main(int argc, char **argv) {
    std::map<int, int> Map;
    for (int i = 0; i < 1000000 / 2; i++) {
        Map.insert(std::make_pair(i * 2, 0));
    }
    for (int i = 0; i < 1000000 / 2; i++) {
        Map.insert(std::make_pair(i * 2 + 1, 0));
    }
    return 0;
}

