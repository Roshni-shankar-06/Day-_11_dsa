class Solution {
 public:
  bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1,
                    int x2, int y2) {
    auto clamp = [&](int center, int mn, int mx) {
      return max(mn, min(mx, center));
    };

   
