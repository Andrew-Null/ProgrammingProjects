const FACTORS: [u32 ; 2] = [3,5];

fn main()
{
  let mut total: u32 = 0;
	for num in 0..1000
  {
    for factor in FACTORS
    {
      if num % factor == 0
      {
        total += num;
        break;
      }
    }
  }
  println!("{}", total);
}
