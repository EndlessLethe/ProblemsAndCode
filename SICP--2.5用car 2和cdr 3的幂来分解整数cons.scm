(define (cons-val x y)
  (* (expt 2 x) (expt 3 y)))

(define (car-val val)
  (get-num val 2 0))

(define (cdr-val val)
  (get-num val 3 0))


(define (get-num x n t)
  (if (= (remainder x n) 0)
      (get-num (/ x n) n (+ t 1))
      t))


(car-val 24)
(car-val 108)
(cdr-val 24)
(cdr-val 108)
(define v (cons-val 4 5))
(car-val v)
(cdr-val v)