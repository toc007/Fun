(* fun takes the local var where the var is declared*)
let f () = 
    let x = 10 in x+1;;

let f () = 
    let x = 10 in fun () -> x+1;;

(* defined fun/var cannot be changed outside of the defined scope *)

(* when a var is being looked up, start from last binding *)


(**
 *  _______________________________
 *  | x  | 1
 *  | f  | <code, pr_to_vals_used>
 *
 * )
