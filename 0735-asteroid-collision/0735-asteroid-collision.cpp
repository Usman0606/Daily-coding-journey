
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        int n = asteroids.size();

        for (int i = 0; i < n; i++) {
            int val = asteroids[i];
            bool alive = true;

            while (!st.empty() && val < 0 && st.top() > 0) {

                if (st.top() < abs(val)) {
                    st.pop();
                }
                else if (st.top() == abs(val)) {
                    st.pop();
                    alive = false;
                    break;
                }
                else {
                    alive = false;
                    break;
                }
            }

            if (alive) {
                st.push(val);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
