#include<iostream>
#include<string>

using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int lengthOfJewels = jewels.length();
    int lengthOfStones = stones.length();
    int count = 0;

    for(int i = 0; i < lengthOfJewels; i++) {

        for(int j = 0; j < lengthOfStones; j++) {
            if(jewels[i] == stones[j])
                count++;
        }
    }

    return count;
}

int main() {
    string jewels, stones;
    getline(cin, jewels);
    getline(cin, stones);

    cout << numJewelsInStones(jewels, stones) << "\n";
    return 0;
}
