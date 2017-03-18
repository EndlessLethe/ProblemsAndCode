(define (same-parity first . args)
  (define (fliter l)
    (cond ((null? l) '())
          ((= (remainder first 2) (remainder (car l) 2)) (cons (car l) (fliter (cdr l))))
          (else (fliter (cdr l)))))
  (cons first (fliter args)))
  
(same-parity 1 2 3 4 5)