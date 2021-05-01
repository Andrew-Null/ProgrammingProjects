struct test
{
	a:i32,
	b:i32
}

fn build() -> test
{
	println!("hello");
	return test 
	{
		a:5,
		b:10
	};

}

static example : test = build();

fn main()
{
	println!("world");
}
