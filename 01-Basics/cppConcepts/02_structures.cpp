#include <bits/stdc++.h>
using namespace std;

struct card
{
    int shape;
    int face;
    int color;
};

string getColor(int color)
{
    return (color == 0) ? "Red" : "Black";
}

string getShape(int shape)
{
    switch (shape)
    {
    case 0:
        return "Hearts";
    case 1:
        return "Diamonds";
    case 2:
        return "Clubs";
    case 3:
        return "Spades";
    default:
        return "Unknown";
    }
}

string getFace(int face)
{
    if (face == 1)
        return "Ace";
    if (face == 11)
        return "Jack";
    if (face == 12)
        return "Queen";
    if (face == 13)
        return "King";
    return to_string(face);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct card deck[5];
    int index = 0;

    for (int i = 0; i < 2; i++) // color
    {
        for (int j = 0; j < 4; j++) // shape
        {
            for (int k = 1; k <= 13; k++) // face
            {
                assert(index < 5); // Ensure index stays within bounds

                deck[index].color = i;
                deck[index].shape = j;
                deck[index].face = k;

                // Debug statement
                cout << "Creating card at index: " << index << " with Face: "
                     << getFace(deck[index].face) << ", Shape: " << getShape(deck[index].shape)
                     << ", Color: " << getColor(deck[index].color) << endl;

                index++;
            }
        }
    }

    // Printing the deck
    for (int i = 0; i < 52; i++)
    {
        cout << getFace(deck[i].face) << " of " << getShape(deck[i].shape)
             << " (" << getColor(deck[i].color) << ")\n";
    }

    return 0;
}
