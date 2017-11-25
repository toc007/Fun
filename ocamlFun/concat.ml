let concat l =
    let rec helper ssf l =
        match l with
        [] -> ssf
        |h::t -> helper (ssf^h) t
    in
    helper "" l;;
