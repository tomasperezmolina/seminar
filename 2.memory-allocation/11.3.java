import java.util.List;

class Main4 {
    static void doSomething(Integer number) {

    }

    static void doSomething(String str) {

    }

    static void doSomething(List<Integer> numbers) {

    }

    /* 
        
        Generics do not exist once the code compiles.
        At runtime we cannot use the generics value to distinguish functions

        This won't compile, as the type will be the same as void doSomething(List<Integer> numbers)
        The type of the function turns to:
        
        void doSomething(List numbers)

        static void doSomething(List<String> strings) {

        }
    */

}  
