// Functions in JavaScript
function greet(name) {
  console.log("Hello " + name);
}
greet("Alice");

function localScope() {
  let localVar = "I'm local";
  console.log(localVar);
}
localScope();

let globalVar = "I'm global";
function showGlobal() {
  console.log(globalVar);
}
showGlobal();