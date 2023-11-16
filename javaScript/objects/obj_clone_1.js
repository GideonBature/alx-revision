#!/usr/bin/node

const user = {
	name: "Gideon Bature",
	year: 2023,
};

console.log(user);

const canSwim = {
	swim: 'Yes',
}

const canBath = {
	canBath: 'Yes',
}

Object.assign(user, canSwim, canBath);

console.log(user);

Object.assign(user, {languages: ['c', 'py', 'js'],});

console.log(user);
