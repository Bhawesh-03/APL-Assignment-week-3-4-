fn create_box() -> Box<i32> {
    let num = Box::new(42);  // Allocates memory on the heap
    num  // Ownership is transferred to the caller
}

fn main() {
    let my_box = create_box();
    println!("Value in Rust: {}", my_box);
    // Memory is automatically deallocated when my_box goes out of scope
}
