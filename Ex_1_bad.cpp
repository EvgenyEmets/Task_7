#include <map>

int main(int argc, char **argv) {
    std::map<int, int> Map;
    for (int i = 0; i < 1000000; i++) {
        Map.insert(std::make_pair(i, 0));
    }
    return 0;   
} 
