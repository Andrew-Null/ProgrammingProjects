// inspiratio: https://www.youtube.com/watch?v=X_DdGRjtwAo
use rand::Rng;

#[derive(Copy, Clone)]
enum Constants {
    Threads = 12,
    Sides = 20,
    Rolls = 1_000_000,
}

type OJH = Option<std::thread::JoinHandle<u8>>;

const InitOption: OJH = Option::None;


fn SpawnThread(id: usize) -> OJH {
    Option::Some(std::thread::spawn(move || {
        let mut gen = rand::thread_rng();
        let mut total: usize = 0;
        for _ in 0..Constants::Rolls as usize {
            let (one, two): (u8, u8) = (gen.gen_range(1..Constants::Sides as u8), gen.gen_range(1..=Constants::Sides as u8));
            //if id == 0 {
            //    println!("({}, {})", one, two);
            //}
            total += {
                if one > two {one} else {two}
            } as usize;
        }
        let res = (total / (Constants::Rolls as usize)) as u8;
        println!("thread {} result: {}", id, res);
        res
    }))
}

fn main() {
    let mut Pool: [OJH ; Constants::Threads as usize] = [InitOption ; Constants::Threads as usize];
    for index in 0..Constants::Threads as usize {
        Pool[index] = SpawnThread(index);
    }

    let mut total = 0;
    for thread in Pool {
        match thread {
            Option::None => {println!("Not all pool entries were replaced"); panic!();},
            Option::Some(thrd) => {
                total += thrd.join().expect("a thread did not join successfully");
            }
        }
    }
    println!("Final result: {}", total / Constants::Threads as u8);
}
