class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (auto it = tokens.rbegin(); it != tokens.rend(); it++) {
            st.push(*it);
        }

        stack<int> nums;

        while (!st.empty()) {
            if (st.top() != "+" && st.top() != "-" &&
                st.top() != "*" && st.top() != "/") {

                nums.push(stoi(st.top()));
                st.pop();
            }
            else {
                int temp1 = nums.top();
                nums.pop();

                int temp2 = nums.top();
                nums.pop();

                if (st.top() == "+") {
                    st.pop();
                    nums.push(temp1 + temp2);
                }
                else if (st.top() == "-") {
                    st.pop();
                    nums.push(temp2 - temp1);
                }
                else if (st.top() == "*") {
                    st.pop();
                    nums.push(temp1 * temp2);
                }
                else if (st.top() == "/") {
                    st.pop();
                    nums.push(temp2 / temp1);
                }
            }
        }

        return nums.top();
    }
};