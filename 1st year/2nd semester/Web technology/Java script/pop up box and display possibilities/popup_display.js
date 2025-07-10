// Alert Box
alert("Welcome to the JavaScript Demo!");

// Confirm Box
let isConfirmed = confirm("Do you want to continue?");
if (isConfirmed) {
  document.write("User clicked OK<br>");
} else {
  document.write("User clicked Cancel<br>");
}

// Prompt Box
let name = prompt("What is your name?", "Guest");
document.write("Hello, " + name + "!<br>");

// innerHTML usage
document.getElementById("output").innerHTML += "This is added using innerHTML.<br>";

// Console Log
console.log("This message is shown in the console");

// window.alert (same as alert)
window.alert("This is another alert using window.alert!");
