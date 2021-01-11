class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
    static const array<int, 13> months{
      {0,31,28,31,30,31,30,31,31,30,31,30,31}
    };
    static const array<string, 7> dayName{
      {"Sunday","Monday","Tuesday","Wednesday",
      "Thursday","Friday","Saturday"}
    };
    
    int sum = 4;
    for (int i = 1971; i < year; ++i) {
      if (is_leap(i)) {
        sum += 366;
      } else {
        sum += 365;
      }
    }
    for (int i = 1; i < month; ++i) {
      if (i == 2 && is_leap(year)) {
        ++sum;
      }
      sum += months[i];
    }
    sum += day;
    return dayName[sum % 7];
  }
  
private:
  bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  }
};
