let myFriends = [];

function addMyFriends(friendName) {
    myFriends.push(friendName);
}

addMyFriends("Rahul");
addMyFriends("Varun");
addMyFriends("Kunal");

console.log("Total number of students:", myFriends.length);
console.log(myFriends);


addMyFriends("Sahil");

console.log("Total number of students:", myFriends.length);
console.log(myFriends);

// myFriends[2] = undefined;

// console.log(myFriends);

let lestValue = myFriends.pop();

console.log(myFriends);
console.log(`last friend is ${lestValue}`); 
