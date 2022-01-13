extern crate autopilot;
use std::thread;
use std::time;

fn main() 
{
	
	thread::sleep(time::Duration::from_millis(10000));
	let mut wl: usize = 0;
	let mut ment = String::from("w");
	while wl < 43200
	{
		ment.push(match (wl % 2 == 0, wl % 3 == 0, wl % 5 == 0, wl % 7 == 0)
		{
			(true,false,false,false) => 'w',
			(false,true,false,false) => 's', 
			(false,false,true,false) => 'd',
			(false,false,false,true) => 'a',
			(_,_,_,_) => ' '
		});
		thread::sleep(time::Duration::from_millis(1000));
		autopilot::key::type_string(&ment, &[], 60.0, 0.0);
		wl += 1;
		println!("{} / {} = {} :\n{}", wl, 43200, wl as f64/ 43200 as f64, ment);
	}
}
