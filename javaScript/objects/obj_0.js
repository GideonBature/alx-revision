#!/usr/bin/node

let user = {
	name: "Gideon Bature",
	age: 80,
	isEngr: true,
};

for (const key in user) {
	console.log(`key = ${key}, value = ${user[key]}`);
}
