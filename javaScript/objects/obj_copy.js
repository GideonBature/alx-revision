#!/usr/bin/node

const user = {
	name: "Gideon",
	year: 2023,
};

console.log(user);

const userCopy = user;

console.log(userCopy);

user.name = "Bene";
console.log(user);
console.log(userCopy);
