let rec filter f xs = 
    match xs with
    [] -> []
    | h::t -> if f h then h::(filter f t) else filter f t;;

let rec filterTail f xs = 
    let rec myPenis f xs res =
            match xs with
            [] -> res
            | h::t -> let res' = if f h then h::res else res
        in
            myPenis f t res'
    in
        myPenis f xs [];;
