/*
 LANG: CPP
 NAME: CHARLES
 QUESTION: Knight Hop
 COMMENT: implement DP
 DP procedure
 1. check data is answer
 2. generate additional data from the given
 3. verify the generated data
 4. repeat the old one

*/
#include <bits/stdc++.h>
using namespace std;
class position{
    public:
        int x;
        int y;
};
bool visited[9][9];
/*
 * check if certain position is already visited
 */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    position start, end;
    cin >> start.x >> start.y >> end.x >> end.y;
    vector<position> bfs;
    vector<position> newNode;
    bfs.push_back(start);
    visited[start.x][start.y] = true;
    int counter = 0;
    while (bfs.size() > 0) {
        newNode.clear();
        /*
         * empty the newNode vector every time I make a new step
         */
        for (position eachPosition : bfs) {
            if (eachPosition.x == end.x && eachPosition.y == end.y) {
                cout << counter << endl;
                /*
                 * if I am in the destination I will out put the current step which is counter
                 */
                return 0;
            } else {
                int x1 = eachPosition.x;
                int y1 = eachPosition.y;
                if (x1 + 1 <= 8) {
                    if (y1 + 2 <= 8) {
                        if (!visited[x1 + 1][y1 + 2]) {
                            visited[x1 + 1][y1 + 2] = true;
                            position newOne;
                            newOne.x = x1 + 1;
                            newOne.y = y1 + 2;
                            newNode.push_back(newOne);
                        }
                    }
                    if (y1 - 2 >= 1) {
                        if (!visited[x1 + 1][y1 - 2]) {
                            visited[x1 + 1][y1 - 2] = true;
                            position newOne;
                            newOne.x = x1 + 1;
                            newOne.y = y1 - 2;
                            newNode.push_back(newOne);
                        }
                    }
                }
                if (x1 + 2 <= 8) {
                    if (y1 + 1 <= 8) {
                        if (!visited[x1 + 2][y1 + 1]) {
                            visited[x1 + 2][y1 + 1] = true;
                            position newOne;
                            newOne.x = x1 + 2;
                            newOne.y = y1 + 1;
                            newNode.push_back(newOne);
                        }
                    }
                    if (y1 - 1 >= 1) {
                        if (!visited[x1 + 2][y1 - 1]) {
                            visited[x1 + 2][y1 - 1] = true;
                            position newOne;
                            newOne.x = x1 + 2;
                            newOne.y = y1 - 1;
                            newNode.push_back(newOne);
                        }
                    }
                }
                if (x1 - 2 >= 1) {
                    if (y1 + 1 <= 8) {
                        if (!visited[x1 - 2][y1 + 1]) {
                            visited[x1 - 2][y1 + 1] = true;
                            position newOne;
                            newOne.x = x1 - 2;
                            newOne.y = y1 + 1;
                            newNode.push_back(newOne);
                        }
                    }
                    if (y1 - 1 >= 1) {
                        if (!visited[x1 - 2][y1 - 1]) {
                            visited[x1 - 2][y1 - 1] = true;
                            position newOne;
                            newOne.x = x1 - 2;
                            newOne.y = y1 - 1;
                            newNode.push_back(newOne);
                        }
                    }
                }
                if (x1 - 1 >= 1) {
                    if (y1 + 2 <= 8) {
                        if (!visited[x1 - 1][y1 + 2]) {
                            visited[x1 - 1][y1 + 2] = true;
                            position newOne;
                            newOne.x = x1 - 1;
                            newOne.y = y1 + 2;
                            newNode.push_back(newOne);
                        }
                    }
                    if (y1 - 2 >= 1) {
                        if (!visited[x1 - 1][y1 - 2]) {
                            visited[x1 - 1][y1 - 2] = true;
                            position newOne;
                            newOne.x = x1 - 1;
                            newOne.y = y1 - 2;
                            newNode.push_back(newOne);
                        }
                    }
                }
                /*
                 * if statement above will try to hop to other possible positions on the board
                 * hop ways(8 ways):
                 * (x+1 , y+2) , (x+1 , y-2) , (x-1, y+2) , (x-1, y+2) , (x+2 ,y-1) , (x+2,y+1) , (x-2,y+1 ) , (x-2 , y -1)
                 */
            }
        }
        bfs = newNode;
        /*
         * Change the bfs to the new position that we have find
         */
        counter++;
        /*
         * increment the counter by 1 in each iteration so we know how many step it has take.
         */
    }
    cout<<"this test case is wrong"<<endl;
    return 0;
}
