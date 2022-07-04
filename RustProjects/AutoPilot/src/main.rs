extern crate autopilot;
use std::thread;
use std::time;

const LOOPS: usize = 475;

fn main() 
{
	
	thread::sleep(time::Duration::from_millis(10000));
	let mut wl: usize = 0;
	let mut ment = String::from("w");
	while wl < LOOPS
	{
		ment.push(match (wl % 2 == 0, wl % 3 == 0, wl % 5 == 0, wl % 7 == 0)
		{
			(true,false,false,false) => 'w',
			(false,true,false,false) => 's', 
			(false,false,true,false) => 'd',
			(false,false,false,true) => 'a',
			(_,_,_,_) => 'f'
		});
		thread::sleep(time::Duration::from_millis(1000));
		autopilot::key::type_string(&ment, &[], 60.0, 0.0);
		wl += 1;
		println!("{} / {} = {} :\n{}", wl, LOOPS, wl as f64/ LOOPS as f64, ment);
	}
}
