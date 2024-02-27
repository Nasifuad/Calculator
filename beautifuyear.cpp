#include <iostream>
using namespace std;

int main()
{
    bool gameWon;
    int count = 0;
    int hits = 4;
    int arr[4][4] = {
        {0, 1, 0, 1},
        {0, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 1, 0, 1}};
    while (!gameWon)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int r, c;
                cout << "Enter any row between 0 and 3\n";
                cin >> c;
                cout << "Enter any column between 0 and 3\n";
                cin >> r;
                if (arr[c][r] == 1)
                {
                    hits--;

                    arr[c][r] = 0;
                    cout << "hit congratulation"
                         << " " << hits << " "
                         << "hits left\n";

                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            cout << arr[i][j] << "\t";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "Missed\n";
                }
                count++;
                if (hits == 0)
                {
                    gameWon = true;
                }
            }
        }
    }
    if (hits == 0)
    {
        cout << "Congratulations you just take"
             << " " << count << " "
             << "hits to complete\n";
    }
    cout << "Weclome Winner\n";

    return 0;
}
