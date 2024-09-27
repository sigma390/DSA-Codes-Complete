// Bob is doing a research in Pendulum. He is just pushing the pendulum aside and the pendulum started moving in toand-fro motion. Bob will push the pendulum always towards his right side to start the oscillation. Bob wanted to
// calculate the distance between extreme position and the centre position of pendulum for each oscillations. He
// somehow calculated all the possible distance. Since he is busy in this research he is giving the task to his assistant
// who needs to arrange the values as instructed.
// Since he is pushing the pendulum to his right always. He wanted to store that distance in the right extreme of the
// arrangement. And the pendulum will move towards the extreme left at that time he want that value to be stored in
// the left most extreme in the arrangement. And this continues till the pendulum stops. He is also sure that the
// distance reached at that oscillation will always be lesser than the previous oscillation towards that particular
// end.Write a program to arrange the distance as instructed.
// Sample Input:
// 5
// 1 3 2 5 4
// Sample Output:
// 4 2 1 3 5
// Explanation:
// The maximum distance in the given data is 5 hence that is placed in the right most end
// The next maximum element is 4 which is placed in the left most end.
// Again the pendulum oscillates towards right to cover a distance of 3 and this continues.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void arrangePendulumDistances(vector<int> &distances)
{
    // Sort the distances in ascending order
    sort(distances.begin(), distances.end());

    // Create a new vector to store the arranged distances
    vector<int> result(distances.size());

    int left = 0;                     // Pointer to place elements on the left side
    int right = distances.size() - 1; // Pointer to place elements on the right side

    // Place the elements alternatively starting with the rightmost side
    for (int i = distances.size() - 1; i >= 0; --i)
    {
        if ((distances.size() - 1 - i) % 2 == 0)
        {
            // Place element at right end for even-numbered iterations (starting with 0th iteration)
            result[right--] = distances[i];
        }
        else
        {
            // Place element at left end for odd-numbered iterations
            result[left++] = distances[i];
        }
    }

    // Output the arranged distances
    for (int d : result)
    {
        cout << d << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> distances{1, 4, 5, 2, 3};
    arrangePendulumDistances(distances);

    return 0;
}
