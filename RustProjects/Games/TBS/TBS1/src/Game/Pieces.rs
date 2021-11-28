pub mod Empty;

#[derive(Copy, Clone)]
enum Direction
{
	North,
	East,
	South,
	West,
	Exact(usize, usize)
}

trait PBehaviour
{
	fn PMove(donde: Direction);
	fn PAttack(donde: Direction);
	fn PRDamage(cuanto: u8);
	fn PInspect();
}

#[derive(Copy, Clone)]
pub enum Pieces
{ // ep - enum piece
	EmptyEP(Empty::EmptyS), //0
	BasicEP, //2 PId - player id
	CoreEP, //1
	ProjectileEP//3
}

pub enum PieceID
{
	Empty,
	Basic,
	Core,
	Projectile
}

/*const Templates: [Pieces; 4] = 
[
	Pieces::Empty{HLSLO: 0},
	Pieces::Basic{Health: 10, PId: 0, Facing: Direction::North},
	Pieces::Core{Health: 30, PId: 0},
	Pieces::Projectile{Damage: 1, WhereTo: Direction::North}
];*/

