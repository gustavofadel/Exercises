# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

bool printed = false;
int turn;
string events;
vector<pair<int, int>> players = {{0, 0}, {0, 0}};

int main () {_
    cin >> events;
    
    for (char event: events) {
        if (event == 'Q') {
            if (players[turn].first == 2) {
                if (turn == 0) {
                    cout << players[0].first << " (winner) - " << players[1].first << "\n";
                    printed = true;
                }
                
                else {
                    cout << players[0].first << " - " << players[1].first << " (winner)\n";
                    printed = true;
                }
            }
            
            else {
                if (turn == 0) {
                    cout << players[0].first << " (" << players[0].second << "*) - " << players[1].first << " (" << players[1].second << ")\n";
                    printed = true;
                }
                
                else {
                    cout << players[0].first << " (" << players[0].second << ") - " << players[1].first << " (" << players[1].second << "*)\n";
                    printed = true;
                }
            }
        }
        
        else {
            if (players[turn].first < 2) {
                if (event == 'R') {
                    turn ^= 1;
                }
                
                players[turn].second++;
                
                if (players[turn].second == 10 || (players[turn].second >= 5 && players[turn].second - players[turn ^ 1].second >= 2)) {
                    players[turn].first++;
                    players[turn].second = players[turn ^ 1].second = 0;
                }
            }
        }
    }
    
    if (!printed) {
        cout << "\n";
    }
}