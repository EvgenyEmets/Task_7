#include <map>
#include <limits>
#include <random>


int main(int argc, char **argv) {
    std::map<int, int> Map;
    std::srand(1);
    for (int i = 0; i < 20000; i++) {
        int Key = std::rand() / 10000;
        int Lower = 0;
        if (Map.find(Key) == Map.end()) {
            for (auto tmp = Map.begin(); tmp != Map.end(); tmp++) {
                if (tmp->first < Key) {
                    Lower++;
                }
            }
        }
        Map.insert(std::make_pair(Key, Lower));
    }
    return 0;
}

