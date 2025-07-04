function sayhello(name){
	console.log("Hello world");
	console.log("Hello world",name);
	console.log(`Hello there, ${name} \nHow are you ?`)
}
sayhello();
sayhello("jyoti");
function namastey(){
	return "Hello in India";
}
var greeting=namastey();
console.log(greeting);
console.log(`namastey means "${namastey()}"`)

var getUserRole=function (name,role){
	switch(role){
		case "admin":
			return `${name} is admin with all access`;
			break;
		case "subadmin":
			return `${name} is sub-admin with access to create and delete courses`;
			break;
		case "testprep":
			return `${name} is testprep with access to create and delete tests`;
			break;
		case "user":
			return `${name} is user to consume content`;
			break;
		default:
			return `${name} is a trial user`
			break;
	}
};
console.log(getUserRole("Jyotirmaya","testprep"))

function tipper(a){
	var bill=a;
	return bill;
};
console.log(tipper("34"))
//scope chain
//the scope is cully bracket in function


//this
console.log(this)
var game="basketball";
function sayName(){
	var name="Jyoti";
	console.log(this);
}
sayName();


//array
var countries =["India","Uk","London"];
console.log(countries);
var states=["Odisha","Maharastra","West Bengal"]
console.log(states[1]);
console.log(states.reverse())
console.log(states.length)
states[0]="Bihar";
states[3]="Rajastan";
console.log(states)
states.pop();
console.log(states)

states.unshift("Kerala");
console.log(states)
states.shift();
console.log(states)


console.log(states.indexOf("Odisha"))
