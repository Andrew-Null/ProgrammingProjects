use super::Pieces;
use super::Player;

const SIZE: usize = 23;
type PrepBoard = [ [ Pieces::Pieces ; SIZE ] ; SIZE ]; //prepared board
static mut Board: PrepBoard = [ [ Pieces::Pieces::EmptyEP(Pieces::Empty::EmptyS::new()) ; SIZE] ; SIZE ];

pub struct Location
{
	X: usize,
	Y: usize
}

pub fn DispBoard()
{
	let SizeSquared = SIZE * (SIZE - 1);
	let mut row: usize = 0;
	let mut column: usize = 0;
	//let mut prints = 0;
	unsafe
	{
		for x in 0..(SizeSquared)
		{
			column = x % SIZE;
			row = (x - column) / SIZE;

			if let Pieces::Pieces::EmptyEP(info) = Board[column][row]
			{
				print!("E{}\t", info.HLSLO);
			}
			else { print!("[!]\t");}
			

			if x % SIZE == SIZE - 1 && x != 0
			{
				print!("\n");
				//prints = 0;
			}
		}
		println!("");
	}
}

/*pub fn PlacePiece(WP: Pieces::PieceID, Where: Location, ByWho: Player::Player) //WP - which piece
{
	Board[Where.X % (SIZE + 1)][Where.Y % (SIZE + 1)] = match WP
	{

	}
}*/