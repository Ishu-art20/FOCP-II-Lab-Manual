#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class MovieTicket {
    unordered_map<int, unordered_set<int>> booked; // movie -> customers
public:

    string BOOK(int x, int y) {
        if(booked[y].size() >= 100) return "false";
        if(booked[y].count(x)) return "false";

        booked[y].insert(x);
        return "true";
    }

    string CANCEL(int x, int y) {
        if(!booked[y].count(x)) return "false";

        booked[y].erase(x);
        return "true";
    }

    string IS_BOOKED(int x, int y) {
        if(booked[y].count(x)) return "true";
        return "false";
    }

    int AVAILABLE_TICKETS(int y) {
        return 100 - booked[y].size();
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    MovieTicket mt;
    string query;

    while(Q--) {
        string op;
        cin >> op;

        if(op == "BOOK") {
            int x, y;
            cin >> x >> y;
            cout << mt.BOOK(x, y) << endl;
        }
        else if(op == "CANCEL") {
            int x, y;
            cin >> x >> y;
            cout << mt.CANCEL(x, y) << endl;
        }
        else if(op == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            cout << mt.IS_BOOKED(x, y) << endl;
        }
        else if(op == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            cout << mt.AVAILABLE_TICKETS(y) << endl;
        }
    }

    return 0;
}