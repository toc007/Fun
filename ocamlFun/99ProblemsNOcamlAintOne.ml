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
    let (orig, rev) = (l, rev l) in

