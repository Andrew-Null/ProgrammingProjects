use std::io;

pub struct Player
{
	Currency: u16,
	PId: (i8, String),
	Facing: Direction
}

impl Player
{
	pub const fn NewTemp() -> Player
	{
		Player
		{
			Currency: 0,
			PId: (-1, String::from("Temp")),
			Facing: Direction::North
		}
	}
}

enum Direction
{
	North = 0,
	South = 1,
	East = 2,
	West = 3
}

//2, 3, 4, 6, 8
//2 4 8

pub enum GameSize
{
	small = 2,
	medium = 4,
	large = 8
}

pub fn GetPCount() -> GameSize
{
	let mut input = String::new();
	io::stdin().read_line(&mut input).expect("GetPCount() failed");

	GameSize::medium
}