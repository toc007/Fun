(* retuns the last element of a list *)
let rec last l = 
    match l with
        | [h]   -> Some h
        | h::t  -> last t
        | _     -> None;;

(* find the last but one elements of a list *)
let rec last_two l =
    match l with
        | [h;t] -> Some (h,t)
        | h::t  -> last_two t
        | _     -> None;;

(* Find the ith element of the list *)
(*
let rec at i l = 
    match l with
        | h::t when i=1   -> Some h
        | h::t when i>1   -> at (i-1) t
        | _                 -> None;;
*)
let rec at i l = 
    try Some (List.nth l (i-1))
    with Failure "nth" -> None;;

(* Find the number of elements of a list *)
let length l = 
    List.fold_left (fun a x -> a+1) 0 l;;

(* Reverse a list *)
let rev l = 
    List.fold_left (fun a x -> x::a) [] l;;

(* Find if a list is a palendrome *)
let rec is_palindrome l = 
    l = (rev l)
(*
let rec palendromeHelper l rl =
    match (l, rl) with
        | ([],[]) -> true
        | (hl::tl, hr::tr) when hl = hr -> palendromeHelper tl tr
        | _ -> false
in
palendromeHelper l (rev l);;
*)

(* Flatten a nested list structure *)
type 'a node =
    | One of 'a 
    | Many of 'a node list;;

let rec flatten l =
    match l with
        | [] -> []
        | (One h)::t -> h::(flatten t)
        | (Many h)::t -> (flatten h)@(flatten t);;

(* Eliminate consecutive duplicates of list elements *)
let rec compress l =
    match l with
        | [] -> []
        | h::[] -> [h]
        | h1::(h2::t) when h1 = h2 -> compress (h1::t)
        | h1::(h2::t) -> h1::(compress (h2::t));;

(* Pack consecutive duplicates of list elements into sublists *)
let rec pack l = 
    match l with
        | [] -> []
        | h::t -> 
                let res = pack t in
                match res with 
                    | [] -> [[h]]
                    | rh::rt -> 
                            let rhh::rtt = rh in
                            if rhh = h then
                                (h::rh)::rt
                            else
                                [h]::res;;

let encode l =
    let packed = pack l in 
    List.map (fun x -> (List.length x, List.hd x)) packed;;

type 'a rle =
    | One of 'a
    | Many of int * 'a;;

let modEncode l = 
    let packed = pack l in
    let mapfn x = 
        if (List.length x) > 1 then Many (List.length x, List.hd x) else One List.hd x
    in
    map mapfn packed;;
