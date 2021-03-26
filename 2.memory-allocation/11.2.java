import java.util.List;
import java.util.ArrayList;

class Main3 {

    static class Point2D {
        public int x = 0;
        public int y = 0;

        @Override
        public String toString() {
            return "Point2D{x: " + x + ", y: " + y + "}";
        }
    }

    public static void main(String[] args) {
        System.out.print("\n\n"); // Spacing

        List points = new ArrayList();
        points.add(new Point2D());
        points.add(new Point2D());
        points.add(new Point2D());
        points.add(new Point2D());
        
        System.out.print("points before: ");
        for(Object i : points) {
            System.out.print(i + ", ");
        }
        System.out.println();

        System.out.println();

        moveAll(points, 5, 5);

        System.out.print("points after:  ");
        for(Object i : points) {
            System.out.print(i + ", ");
        }
        System.out.println();
    }

    static void moveAll(List points, int x, int y) { // I know that this list will contain Point2Ds
        for(Object p : points) {
            Point2D point = (Point2D) p; // Object does not have Point2D properties, we need to cast it.
            point.x = x;
            point.y = y;
        }
    }
}
