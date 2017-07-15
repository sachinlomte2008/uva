#include <bits/stdc++.h>
using namespace std;


int main(){
while (true)
    {
        int m, n;
        cin >> m >> n;
        if (m == 1 && n == 1)
        {
            break;
        }
        int prev_m = 0;
        int prev_n = 1;
        int next_m = 1;
        int next_n = 0;
        while (true)
        {
            int middle_m = prev_m + next_m;
            int middle_n = prev_n + next_n;

            if (middle_m == m && middle_n == n)
            {
                break;
            }
            else
            {
                if (middle_m * n > middle_n * m)
                {
                    cout << "L";
                    next_m = middle_m;
                    next_n = middle_n;
                }
                else
                {
                    cout << "R";
                    prev_m = middle_m;
                    prev_n = middle_n;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
