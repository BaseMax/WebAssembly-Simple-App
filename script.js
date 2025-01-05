function getOperationString(operation) {
    switch (operation) {
        case 0: return '+';
        case 1: return '-';
        case 2: return '*';
        case 3: return '/';
        default: return '?';
    }
}

function runMainWithArgs(num1, num2, operation) {
    const args = [num1.toString(), num2.toString(), operation.toString()];
    
    console.log(`Running main with args: ${args.join(' ')}`);

    const result = Module.ccall('calculate_wrapper', 'number', ['number', 'number', 'number'], args);
    console.log(`Result: ${num1} ${getOperationString(operation)} ${num2} = ${result}`);

    return result;
}

Module.onRuntimeInitialized = () => {
    console.log("WebAssembly Module Initialized.");

    console.log("Examples:");
    runMainWithArgs(5, 3, 0); // Addition: 5 + 3 = 8
    runMainWithArgs(10, 4, 1); // Subtraction: 10 - 4 = 6
    runMainWithArgs(6, 7, 2); // Multiplication: 6 * 7 = 42
    runMainWithArgs(8, 2, 3); // Division: 8 / 2 = 4
};
