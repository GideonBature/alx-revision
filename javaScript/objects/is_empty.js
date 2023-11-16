#!/usr/bin/node

function isEmpty(obj) {
	for (key in obj) {
		return (false);
	}
	return (true);
}

let shedule = {};
console.log(isEmpty(shedule));
shedule["8:30"] = "get up";
console.log(isEmpty(shedule));
