#include <iostream>
using namespace std;

struct player
{
    char name[20];
    int innings;
    int notouts;
    int runs;
};

int main()
{
    player p[100];
    int count, n, i;
    float avg[50];
    cout << "Enter the number of players: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the Name, no of innings, notouts and runs scored by the player: ";
        cin >> p[i].name >> p[i].innings >> p[i].notouts >> p[i].runs;
    }
    for (i = 0; i < n; i++)
    {
        avg[i] = (float)p[i].runs / p[i].innings - p[i].notouts;
    }
    count = 0;
    for (i = 0; i < n; i++)
    {
        if (avg[i] > 50.0)
        {
            cout << "player with average more than 50 is " << endl;
            count++;
        }
    }
    cout << "Number of player with avg more than 50 is: " << count;
    return 0;
}