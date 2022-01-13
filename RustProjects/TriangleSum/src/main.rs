fn Sum(index: u128) -> u128
{
	if index <= 1 {return index as u128}
	return index + Sum(index - 1);
}


fn main() 
{
	let mut lc = 74825;//this is large enough to crash
	let mut speed = 1;
	loop
	{

		for _ in 0..1 
		{
			lc += speed;		
			Sum(lc);
		}
		println!("{}", lc);
		
	}
}
