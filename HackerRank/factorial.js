function factorial(n) {
	let ans = 1;
	for(let i = n; i >= 1; i--) {
		ans = ans * i;
	}
	
	return ans;
}


const n = 10;
console.log(factorial(n));



