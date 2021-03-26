import java.util.List;
import java.util.ArrayList;

class Main2 {
    public static void main(String[] args) {
        System.out.print("\n\n"); // Spacing

        List<Integer> numbers = new ArrayList<>();
        numbers.add(4);
        numbers.add(3);
        numbers.add(2);
        numbers.add(1);
        
        System.out.print("numbers: ");
        for(Integer i : numbers) {
            System.out.print(i + ", ");
        }
        System.out.println();

        // Java < 1.5
        List old_numbers = new ArrayList();
        old_numbers.add(4);
        old_numbers.add(3);
        old_numbers.add(2);
        old_numbers.add(1);
        
        System.out.print("old_numbers: ");
        for(Object i : old_numbers) {
            System.out.print(i + ", "); // All Objects have toString so it is not 100% equal to a void*
        }
        System.out.println();
        
    }
}