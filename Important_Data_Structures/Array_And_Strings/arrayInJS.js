let countries = ['USA', 'Japan', 'Canada', 'India', 'UK'];

// new way of declaring an array ->
let states = new Array('Punjab', 'JK', 'Himachal', 'Kolkata');

// console.log(countries);
// console.log(states);

// console.log(states.length);

// adding element by replacing a particular element 
states[1] = 'Delhi';
// console.log(states);

let user = new Array('Cipher Jana', 'Cipher@123.com', 20, true);

// console.log(user);

// deleting element from Array
user.pop();
// console.log(user);

// add Element in front of array (not recommanded)
user.unshift('New element');
// console.log(user);

// removing the first element from the array
user.shift();
// console.log(user);



// finding position of an element from an array 
// syntax -> array.indexOf(___Element_to_searched____);

console.log(user.indexOf(20));


// converting anything into an array using ->
console.log(Array.from(`cipher`));

console.log(Array.from(String(12345)));
