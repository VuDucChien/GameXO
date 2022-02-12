#include <iostream>
using namespace std;

char matrix[3][3] = {
    '1','2','3',
    '4','5','6',
    '7','8','9'
};

char player = 'X';

void Draw()
{
    cout << "GAME XO"<<endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

void Input()
{
    int input;
    cout << "Ban muon danh vao o: ";
    cin >> input;

    switch (input)
    {
    case 1:
        matrix[0][0] = player;
        break;
    case 2:
        matrix[0][1] = player;
        break;
    case 3:
        matrix[0][2] = player;
        break;
    case 4:
        matrix[1][0] = player;
        break;
    case 5:
        matrix[1][1] = player;
        break;
    case 6:
        matrix[1][2] = player;
        break;
    case 7:
        matrix[2][0] = player;
        break;
    case 8:
        matrix[2][1] = player;
        break;
    case 9:
        matrix[2][2] = player;
        break;
    default:
        break;
    }
}

void TogglePlayer()
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

char Win()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')

        return 'X';
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
        return 'X';

    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')

        return 'O';
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
        return 'O';

    return '/';
}
int main()
{
    Draw();
    while (1) {
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        TogglePlayer();
    }
    return 0;
}
