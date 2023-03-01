let gray =
  fun
  | 0 => [""]
  | n when n > 0 => failwith("TODO")
  | _ => invalid_arg("n");

let%test _ = gray(0) == [""];
let%test _ = gray(1) == ["0", "1"];
let%test _ = gray(2) == ["00", "01", "11", "10"];
