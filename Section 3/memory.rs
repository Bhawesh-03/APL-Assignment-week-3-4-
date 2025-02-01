fn main() {
    let x = Box::new(5);  // Heap allocation with ownership
    println!("Value: {}", x);
    // Memory is automatically freed when 'x' goes out of scope
}