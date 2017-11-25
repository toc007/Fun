let wtf x = match x with
                _ when x <= 10  ->  Printf.printf "IRMA GERD le 10"
                |_              ->  Printf.printf "IRMA GERD Big number";;


let makeRand (seed1, seed2) = 
    let seed = (Array.of_list [seed1;seed2]) in
    let s = Random.State.make seed in
    (fun (x,y) -> (x + (Random.State.int s (y-x))))
