#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float health, item_distance, item_impact;
    cout << "Enter hero's health" << endl;
    cin >> health;

    while (health > 0)
    {

        if (health > 0 && health < 1)
        {
            cout << "Hero's health = 1" << endl;
            health = 1.0f;
        };

        cout << "Write item distance and impact (in one line)" << endl;
        cin >> item_distance >> item_impact;

        if(item_impact < 0 || item_impact > 0)
        { 
            if(item_distance > 100)
            {
                cout << "There wasn't interaction." << endl;
            } else
            {
                health += ceil(item_impact * ( 1 / item_distance) *10) / 10;

                if (item_impact > 0)
                {
                    cout << "Hero was healed! \n" << "Health: " << health << endl;
                } else {
                    cout << "Hero was Damaged! \n" << "Health: " << health << endl;
                }
            };
        } else {
            cout << "There wasn't interaction." << endl;
        };
    };

    cout << "Hero dead!" << endl;

    return 0;
};
