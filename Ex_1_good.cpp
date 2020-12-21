#include <map>
#include <limits>

int main(int argc, char **argv) {
    std::map<int, int> Map = {{0,0}};
    for (int i = 0; i < 1000000; i++) {
        Map.insert(Map.end()--, std::make_pair(i, 0));
    }
    return 0;
}    

