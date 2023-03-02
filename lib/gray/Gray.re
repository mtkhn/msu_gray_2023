let rec gray =
  fun
  | 0 => [""]
  | n when n > 0 =>
    (gray(n - 1) |> List.map(str => "0" ++ str))
    @ (gray(n - 1) |> List.rev |> List.map(str => "1" ++ str))
  | _ => invalid_arg("n");

let%test _ = gray(0) == [""];
let%test _ = gray(1) == ["0", "1"];
let%test _ = gray(2) == ["00", "01", "11", "10"];
let%test _ = gray(3) == ["000", "001", "011", "010", "110", "111", "101", "100"];
let%test _ = List.length(gray(10)) == 1024
