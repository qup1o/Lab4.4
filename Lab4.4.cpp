#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, x, xp, xk, dx, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    if (R <= 0 || R >= 10)
    {
        cout << "R must be between 0 and 10" << endl;
        return 1;
    }

    cout << fixed;
    cout << "      Function y(x)" << endl;
    cout << "------------------------" << endl;
    cout << "| " << setw(8) << "x" << " | " << setw(9) << "y" << " |" << endl;
    cout << "------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -8 - R)
            y = -R;
        else if (x < -8 + R)
            y = -R + sqrt(R * R - (x + 8) * (x + 8));
        else if (x <= 2)
            y = -R + (x - (-8 + R)) * (2 + R) / (10 - R);
        else if (x <= 6)
            y = 0;
        else
            y = (x - 6) * (x - 6);

        cout << "| " << setw(8) << setprecision(2) << x
            << " | " << setw(9) << setprecision(3) << y << " |" << endl;

        x += dx;
    }
    cout << "------------------------" << endl;

    return 0;
}