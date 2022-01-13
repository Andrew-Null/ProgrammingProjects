use std::thread;
use std::time;

 fn Fibonacci(index: u128) -> u128
{
	if index <= 2 {return 1}
	return (Fibonacci(index - 1) + Fibonacci(index - 2)) as u128;
}

fn FiboDebug(index: u128) -> u128
{
	if index <= 2 {return 1}
	
	print!("One : {} | ", index,);
	let One = FiboDebug(index - 1);
	println!("{}", One);
	print!("Two : {} | ", index);
	let Two = FiboDebug(index - 2);
	println!("{}", Two);
	return One + Two;
}

fn FibonacciThreaded(index: u128) -> thread::JoinHandle<u128>
{
	if index <= 2 {return thread::spawn(|| {1})};
	
	return thread::spawn(move|| 
	{
		let Two = thread::spawn(move||
		{
			return Fibonacci(index.clone() - 2)
		});
		return Fibonacci(index.clone() - 1) + Two.join().unwrap() as u128
	});
	
}

fn FibonacciMemoization(index: u128) -> u128
{
	if index <= 2 {return 1;}

	let mut Ary: Vec<Option<u128>> = Vec::new();
	{
		let mut temp = 0;
	//	let half = index / 2;
		loop
		{
			if temp > index
			{
				break
			}
			Ary.push(Option::None);
			temp += 1;
		}
	}
	Ary[0] = Option::Some(1);
	Ary[1] = Option::Some(1);
	return Memo::Memoization(&mut Ary, index - 2) + Memo::Memoization(&mut Ary, index - 1);
}

/*fn FibMemoCustom<T: /*std::ops::Deref +*/ std::ops::Add<Output = T>>(index: u128, One: T, Two: T) -> T
{
	if index == 1 {return One}
	if index == 2 {return Two}

	let mut Ary: Vec<Option<T>> = Vec::new();
	let mut lc = 0;
	while lc < index
	{
		Ary.push(Option::None);
		lc += 1;
	}

	Ary[0] = Option::Some(One);
	//Ary[1] = Option::Some(Two);
	
	//return Memo::Memoization::<T>(&mut Ary, index - 2) + Memo::Memoization::<T>(&mut Ary, index - 1);
	return Two

}*/

pub fn FibMemoStatic(index: u128) -> u128 
{
	Memo::Lengthen(index);
	let mut Ary;
	Ary = unsafe{Memo::AryS.clone().unwrap()};
	match Ary[(index - 1) as usize]
	{
		Option::None => 
		{
			unsafe{Memo::AryS = Some(Memo::StaticMemo(index, &mut Ary))};
			FibMemoStatic(index)
		}, 
		Option::Some(ret) => return ret
	}
}

mod Memo
{
	pub fn Memoization(Ary: &mut Vec<Option<u128>>, index: u128) -> u128
	{
		return match Ary[(index - 1) as usize]
		{
			Option::None => 
			{
				Ary[(index - 1) as usize] = Some(Memoization(Ary, index - 1) + Memoization(Ary, index - 2));
				Ary[(index - 1) as usize].unwrap()
			},
			Some(value) => 
			{
				value
			}
		}
	}

	pub static mut AryS: Option<Vec<Option<u128>>> = Option::None;

	#[inline]
	pub fn InitAryS()
	{
		//println!("creating");
		unsafe
		{
			match AryS
			{
				Option::Some(_) =>(),
				Option::None =>
				{
					let temp: Vec<Option<u128>> = vec![Option::Some(1), Option::Some(1)];
					AryS = Some(temp);
				}
			}
		}
	}

	pub fn Lengthen(index: u128)
	{
		//print!("lengthening | ");
		//std::thread::sleep(std::time::Duration::from_millis(1000));
		unsafe
		{
			match &mut AryS.clone()
			{
				Option::Some(Ary) =>
				{
					//l = &Ary.len();	
					let l = AryS.clone().unwrap().len();
					//println!("{} : {}", l, index);
					for fv in l..(index as f64 * 1.25) as usize
					{
						Ary.push(Option::None);
					}
					AryS = Some(Ary.clone());
				}
				Option::None =>
				{
					//println!("recursion");
					InitAryS();
					Lengthen(index);
				}
			}
		}
	}

	pub fn StaticMemo(index: u128, Ary: &mut Vec<Option<u128>>) -> Vec<Option<u128>>
	{
		println!("{}", index);
		//std::thread::sleep(std::time::Duration::from_millis(500));
		return match Ary[(index - 1) as usize] 
		{
			Option::None => 
			{
				Ary[(index - 1) as usize] = Some(Memoization(Ary, index - 1) + Memoization(Ary, index - 2));
				Ary.clone().to_vec()
			},
			Some(value) => 
			{
				Ary[(index - 1) as usize] = Option::Some(value);
				////println!("{} : {:?}",index, Ary);
				Ary.clone().to_vec()
			}
		}
	}

}

#[cfg(test)]
mod FibTests
{
	const DEPTH: u128 = 40;
	#[test]
	fn Threaded()
	{
		assert_eq!(super::FibonacciThreaded(20).join().unwrap(), super::Fibonacci(20));
	}

	#[test]
	fn MemoT()
	{
		assert_eq!(super::FibonacciMemoization(DEPTH), super::Fibonacci(DEPTH));
		//assert_eq!(super::FibonacciMemoization(Depth), super::FibMemoStatic(Depth));
	}

	#[test]
	fn MemoStatic()
	{
		//let Depth = 10;
		super::FibMemoStatic(186);
		//let mut Ary;

		for fv in 1..186
		{
			//println!("{}", fv);
			assert_eq!(super::FibonacciMemoization(fv), super::FibMemoStatic(fv));
			//super::FibMemoStatic(fv);
			//super::FibonacciMemoization(fv);
		}


//		assert_eq!(One, OneS);
		//assert_eq!(Two, TwoS);
	}
}
fn main()
{
	FiboDebug(15);
}
