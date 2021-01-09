#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int m; //Total number of rows
int n; //Total number columns

double w; //The size of each tile in inches
double h; //The size of each tile in inches

int x; // X location on the board
int y; // Y location on the board

double vx; // Travel speed of moter x
double vy; // Travel speed of moter y

double distanceX(int xs)
{
    double distance;
    distance = abs(xs - x) * w;
    return distance;
}

double distanceY(int ys)
{
    double distance;
    distance = abs(ys - y) * h;
    return distance;
}

// This going to calculate the cost of the node
// Dont need this but im going to keep it
double nodeDistance(int xs, int ys)
{
    double cost = 0;

    cost = (distanceX(xs) * distanceX(xs)) + (distanceY(ys) * distanceY(ys));

    return cost;
}

double maxVelocity(int xs, int ys)
{
    double tx = distanceX(xs) / vx;
    double ty = distanceY(ys) / vy;
    return max(tx, ty);
}

void main()
{

    cout << "Please enter total number of rows: ";
    cin >> m;

    cout << "Please enter total number of columns: ";
    cin >> n;

    cout << "Please enter height of tiles: ";
    cin >> h;

    cout << "Please enter width of tiles: ";
    cin >> w;

    cout << "How fast is motor x going(in/sec)? ";
    cin >> vx;

    cout << "How fast is motor y going(in/sec)? ";
    cin >> vy;

    cout << "Please enter your start location X: ";
    cin >> x;

    cout << "Please enter your start location Y: ";
    cin >> y;

    for (int ys = 0; ys < m; ys++)
    {
        for (int xs = 0; xs < n; xs++)
        {
            cout << setiosflags(ios::fixed) << setprecision(3) << maxVelocity(xs, ys) << "\t";
        }
        cout << endl;
    }

    system("pause");
}