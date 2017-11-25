let max x y = if x > y then x else y;;

let rec listmax xs = 
    let rec hello xs maxE =
        match xs with
            [] -> maxE
            |h::t -> hello t (max maxE h) in
        hello xs 0;;

let helloMax l= List.fold_left max [] l;;

let rec hello xs maxE =
    match xs with
        [] -> maxE
        |h::t -> hello t (max maxE h) in
    hello xs 0;;

(* List.fold_left : ('a -> 'b -> 'a) -> 'a -> 'b list -> 'a *)
