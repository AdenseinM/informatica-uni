#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();

        // Ordina l'array
        sort(nums.begin(), nums.end());

        // Ciclo esterno: fisso il primo elemento
        for (int i = 0; i < n; i++) {

            // Salta i duplicati del primo elemento
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int target = -nums[i];
            int l = i + 1;
            int r = n - 1;

            // Two pointers
            while (l < r) {
                int sum = nums[l] + nums[r];

                if (sum < target) {
                    l++;
                }
                else if (sum > target) {
                    r--;
                }
                else {
                    // Trovata una tripletta valida
                    res.push_back({nums[i], nums[l], nums[r]});

                    // Salta duplicati di l
                    while (l < r && nums[l] == nums[l + 1])
                        l++;

                    // Salta duplicati di r
                    while (l < r && nums[r] == nums[r - 1])
                        r--;

                    // Sposta entrambi i puntatori
                    l++;
                    r--;
                }
            }
        }

        return res;
    }
};
