open Cmdliner;

let () = {
  let n = {
    let doc = "Bit length of code words.";
    let docv = "N";
    Arg.(required & pos(0, some(int), None) & info([], ~doc, ~docv));
  };

  let gray = {
    let info = Cmd.info("gray", ~doc="Gray code");
    let gray = n => Gray.gray(n) |> List.iter(Stdio.print_endline);
    Cmd.v(info, Term.(const(gray) $ n));
  };

  gray |> Cmd.eval |> exit;
};
