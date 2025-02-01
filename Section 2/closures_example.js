function outerFunction() {
    let x = 10;
    function innerFunction() {
        x += 5;
        console.log(x);
    }
    return innerFunction;
}

const closure = outerFunction();
closure();
