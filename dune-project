(lang dune 3.4)
(name gray)

(package
 (name gray)
 (synopsis "Gray code")
 (depends
  (ocaml (and (>= 4.14) (< 5.0)))

  ; Build
  (ppx_jane (and :build (>= 0.15.0)))
  (reason (and :build (>= 3.8.0)))

  ; Runtime
  (core (>= 0.15.0))
  (cmdliner (>= 1.1.1))))
