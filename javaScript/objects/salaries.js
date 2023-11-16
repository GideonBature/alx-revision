#!/usr/bin/node

const salaries = {
	John: 100,
	Ann: 160,
	Pete: 130,
};

const emptySalaries = {};

sum = 0;

for (salary in salaries) {
	sum += salaries[salary];
}
console.log(sum);
