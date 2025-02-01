public class MemoryManagement {
    public static void main(String[] args) {
        Integer obj = new Integer(5);  // Object allocated on the heap
        System.out.println("Value: " + obj);
        // Garbage collector will handle deallocation
    }
}