let mapp f l = 
    let base = [] in
        let fold_fn acc elmt = (f elmt)::acc in
            List.fold_left fold_fn base l;;

(* map (a' -> b') -> a' list -> b' list *)
(* ()*)
List.fold_right;;

let partition f l= 
    let acc = ([], []) in 
        let fold_fn (a, b) elem= 
            if f elem then  
                (elem::a, b) 
            else 
                (a, elem::b) in
    List.fold_left fold_fn acc l;;

