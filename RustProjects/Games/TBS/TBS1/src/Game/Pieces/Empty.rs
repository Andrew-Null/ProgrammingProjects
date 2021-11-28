#[derive(Copy, Clone)]
pub struct EmptyS{pub HLSLO: u8} //hlslo - how long since last occupied 

impl EmptyS
{
	pub const fn new() -> EmptyS
	{
		EmptyS{HLSLO: 0}
	}

	pub fn PInspect(self)
	{
		println!("This space has been uninhabited for {} turns", self.HLSLO)
	}

	pub fn PAge(mut self)
	{
		self.HLSLO += 1;
	}
}