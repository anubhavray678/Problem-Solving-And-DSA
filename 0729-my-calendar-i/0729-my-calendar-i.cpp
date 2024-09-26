class MyCalendar {
private:
    vector<pair<int, int>> bookings;
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
         for (const auto& b : bookings) {
            if (max(b.first, start) < min(b.second, end)) {
                return false;
            }
        }
        // If no overlap, add the event to the bookings
        bookings.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

 /*
 * [start, end]
 * make a grid - (30 * 1)
 * for every start and end -> fill gid with '1' with range (start, end-1)
 *
 */