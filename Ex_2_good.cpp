#include <map>
#include <limits>
#include <random>


int main(int argc, char **argv) {
    std::map<int, int> Map;
    std::srand(1);
    for (int i = 0; i < 20000; i++) {
        int Key = std::rand() / 10000;
        int Lower = 0;
        auto Hint = Map.begin();
        if (Map.find(Key) == Map.end()) {
            for (auto tmp = Map.begin(); tmp != Map.end(); tmp++) {
                if (tmp->first < Key) {
                    Lower++;
                } else {
                    Hint = tmp--;
                    break;
                }
            }
        }
        Map.insert(Hint, std::make_pair(Key, Lower));
    }
    return 0;
}

