const CHECKS: usize = 4;
const DIVISORS: [u128; CHECKS] = [3, 5, 7, 11];
const WORDS: [&str; CHECKS] = ["Fizz", "Buzz", "Fuzz", "Bizz"];

/*

struct factor
{
	num: u128,
	word: &str
}

//generate const array of factors

*/

use std::thread;

fn check(num: u128)
{

	let mut Match = false;

	for checki in 0..CHECKS
	{
		if num % DIVISORS[checki] == 0 //refactor to use array of factors instead of arrays DIVISORS and WORDS
		{
			Match = true;
			print!("{}", WORDS[checki]); //refactor here as well
		}
	}	
	
	if Match == false
	{
		print!("{}", num); //refactor here too
	}
	print!("\n");

}

fn main()
{
	const DLY: u32 = 100;
	const CHKS: u128 = CHECKS as u128;
	let mut i: u128 = 0;
	while true
	{
		check(i);
		std::thread::sleep_ms(DLY + ((i / CHKS) as u32));
		i += 1;
	}
}
