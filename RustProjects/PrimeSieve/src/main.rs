#![allow(non_snake_case)]
#![allow(dead_code)]

static DEFAULTS: [u8; 7] = [3, 5, 7, 11, 13, 17, 19];

const THREADS: u8 = 4;
const UT: u8 = THREADS - 2;

//ype PrimeMax

mod Sieve
{
	pub mod Checks
	{
	  #[allow(unused_parens)]
		#[inline]
	  pub fn Odd(num: u128) -> bool
	  {
	    ((num & 1) == 1)
	  }

	  pub fn Quick(num: u128, PV: &mut Vec<u128>)	//PV - prime vector
	  {
	    if Odd(num)
	    {
	      let mut Factorable = false;

	      for default in crate::DEFAULTS
	      {

          if num % (default as u128) == 0
          {
            Factorable = true;
            break;
          }

	      }

	      if Factorable == false 
	      {

					for prime in PV.iter() 
					{
						if num % *prime == 0
						{
							Factorable = true;
							break;
						}
						else if prime > &(num / 2)
						{
							break;
						}
					}
	      }

	      if Factorable == false
	      {
	        &PV.push(num);
	      }
	    }
	  }

	  pub fn Thorough(num: u128) -> bool
	  {
			let mut Factorable = !Odd(num);
			let mut counter: u128 = 3;
			while counter < (num / 2) && Factorable == false
			{
				Factorable = (num % counter) == 0;

				counter += (Odd(counter) as u128) + 1;
			}

			Factorable
		}

		pub fn Verify(PV: &mut Vec<u128>)
		{
			println!("Verifying");
			{
				&PV.retain(|&x| (Odd(x)) || (x != 1));
			}

			let mut FI = 0 as i128;
			println!("{:?}", PV);
			while FI <= (PV.len() as i128)
			{

				if (FI > (PV.len() as i128) - 1) || PV[FI as usize] > (PV.iter().max().unwrap() / (2 as u128) as u128) 
				{
					println!("breaking: {}", FI);
					break;
				}

				let temp = PV[FI as usize];
				println!("temp: {}, FI: {}", temp, FI);
			  PV.retain(|&x| ((x < temp) || (x == temp) || (x % temp != 0)));
				println!("hello {:?}: {} \n", PV, temp);
				FI += 1;
			}

			for default in crate::DEFAULTS
			{
				PV.retain(|&x| x != (default as u128));
			}
		}
	}

	mod FileIO
	{

	}

	fn Sieve()
	{

	}

}
#[allow(unused_variables)]
fn main()
{
	
	let mut Primes: Vec<u128> = Vec::new();
	for FV in 2..2_u128.pow(127)
	{
		Primes.push(FV);
	}
	//println!("{:?} {}", Primes, Primes.len());
	Sieve::Checks::Verify(&mut Primes);
	//println!("{:?}", Primes);
	//Sieve::Checks::Quick(7919, &mut Primes);

	println!("{:?}", Primes);
}
