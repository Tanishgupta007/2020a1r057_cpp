#include <iostream>
using namespace std;

struct player
{
    char name[20];
    int innings;
    int runsscored;
    int notouts;
};

int main(int argc, const char **argv)
{

    struct player p[50];
    int count, i, n;
    float avg[50];
    cout << "Enter the number of player: " << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the player name: " << endl;
        cin >> p[i].name;
        cout << "Enter the player innings: " << endl;
        cin >> p[i].innings;
        cout << "Enter the player runs scored: " << endl;
        cin >> p[i].runsscored;
        cout << "Enter the player not outs: " << endl;
        cin >> p[i].notouts;
    }

    for (i = 0; i < n; i++)
    {
        avg[i] = (float)(p[i].runsscored) / (p[i].innings - p[i].notouts);
    }
    count = 0;
    for (i = 0; i < n; i++)
    {
        /* code */
        if (avg[i] > 50.0)

        {
            cout << "Player with more than 50 " << p[i].name << endl;
            count++;
        }
    }

    cout << "No of player with avg more than 50 is " << count;
    return 0;
}