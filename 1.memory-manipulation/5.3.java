class Main {
    static class Point2D {
        public int x = 0;
        public int y = 0;
    }

    public static void setToZero(int n) {
        n = 0;
    }

    public static void setX(Point2D point, int x) {
        point.x = x;
    }

    public static void main(String[] args) {
        int x = 5;
        System.out.printf("x before: %d\n", x);
        setToZero(x);
        System.out.printf("x after:  %d\n", x);

        System.out.println();

        Point2D point = new Point2D();
        System.out.printf("point before:       %d, %d\n", point.x, point.y);
        setX(point, x);
        System.out.printf("point after:        %d, %d\n", point.x, point.y);
    }
}