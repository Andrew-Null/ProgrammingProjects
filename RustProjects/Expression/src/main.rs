trait Eval
{
	fn Eval (&self) -> i128;
  fn Evaluate(p: i128, t: i128, o: OP) -> i128;
}

#[derive(Copy, Clone)]
struct Expr<'a>
{
  pn: term<'a>, //primero
  sn: term<'a>, //second
  op: OP
}

#[derive(Copy, Clone)]
enum OP
{
	Add,
  Sub,
  Mul,
  Div,
}

impl Eval for Expr<'_>
{
	fn Eval(&self) -> i128
	{
		match(self.pn, self.sn)
    {
			(term::num(o), term::num(t)) => Expr::Evaluate(o, t, self.op),
      (term::num(o), term::expr(t)) => Expr::Evaluate(o, t.Eval(), self.op),
      (term::expr(o), term::num(t)) => Expr::Evaluate(o.Eval(), t, self.op),
      (term::expr(o), term::expr(t)) => Expr::Evaluate(o.Eval(), t.Eval(), self.op)
    }
	}

  fn Evaluate(p:i128, t: i128, o: OP) -> i128
  {
    match o
    {
      OP::Add => p + t,
      OP::Sub => p - t,
      OP::Mul => p * t,
      OP::Div => p / t
    }
  }
}

#[derive(Copy, Clone)]
enum term<'a>
{
	num(i128),
  expr(&'a Expr<'a>)
}

fn main()
{
  let one = Expr
  {
    pn: term::num(8),
    sn: term::num(2),
    op: OP::Add
  };

  let two = Expr
  {
    pn: term::num(15),
    sn: term::num(3),
    op: OP::Div
  };

  let three =  Expr
  {
    pn: term::expr(&one),
    sn: term::expr(&two),
    op: OP::Sub
  };



	let echo = three.Eval();
  println!("{}", echo);

}
