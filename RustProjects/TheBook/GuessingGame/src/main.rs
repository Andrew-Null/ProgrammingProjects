use rand::Rng;
fn main()
{


	let mut SN = rand::thread_rng().gen_range(1,100); //secret number
	
	loop
	{
	println!("guess");
	let mut guess = String::new();
	std::io::stdin()
		.read_line(&mut guess)
		.expect("read failed");
	println!("{}", guess);

	


	let guess: u32 = guess.trim().parse()
		.expect("guess");
	
	
		match guess.cmp(&SN)
		{
			std::cmp::Ordering::Less => println!("smaller"),
			std::cmp::Ordering::Greater => println!("larger"),
			std::cmp::Ordering::Equal => 
			{
				println!("correct");
				break;
			}
		}
	}


	println!("the answer was {}", SN);
}
