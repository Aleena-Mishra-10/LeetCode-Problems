class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int time = 0;

        int preX = points[0][0];
        int preY = points[0][1];
        for (int i = 1; i < points.length; i++) {
            int x = points[i][0];
            int y = points[i][1];
            time += Math.max(Math.abs(preX - x), Math.abs(preY - y));
            preX = x;
            preY = y;
        }
        return time;
    }
}
