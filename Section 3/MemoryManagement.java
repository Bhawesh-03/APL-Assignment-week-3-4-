public class GarbageCollectionDemo {
    static class MemoryObject {
        int value;
        MemoryObject(int val) { this.value = val; }
        @Override
        protected void finalize() {  // Called before garbage collection
            System.out.println("Garbage collected: " + value);
        }
    }

    public static void main(String[] args) {
        MemoryObject obj1 = new MemoryObject(42);
        MemoryObject obj2 = new MemoryObject(84);

        obj1 = null; // Eligible for garbage collection
        obj2 = null;

        System.gc(); // Request garbage collection (not guaranteed)
        System.out.println("Objects created, waiting for GC.");
    }
}
