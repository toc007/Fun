type nat = 
    | Z
    | S of nat;;

let rec natToInt n =
    match n with
    |Z -> 0
    |S n' -> 1+natToInt n';;

let rec intToNat i =
    if i <= 0 then
        Z
    else
        S (intToNat (i-1));;

let rec plus n m = 
    match (n, m) with 
    |(_, Z) -> n
    |(Z, _) -> m
    |(S n', S m') -> S (S (plus n' m'));;

let rec sub n m =
    match (n, m) with
    |(Z, Z) -> Z
    |(Z, _) -> Z
    |(_, Z) -> n
    |(S n', S m') -> sub n' m';;

let rec dumbMult n m = 
    match n with
    |Z -> Z
    |S n' -> plus m (dumbMult n' m);;

let intSub n m =
    natToInt (sub (intToNat n) (intToNat m));;

let intAdd n m =
    natToInt (plus (intToNat n) (intToNat m));;

let intDumbMult n m =
    natToInt (dumbMult (intToNat n) (intToNat m));;


let selectOp n m op = 
    match op with
    |"add" -> intAdd n m
    |"sub" -> intSub n m
    |"dumbMult" -> intDumbMult n m
    |_ -> 0;;
