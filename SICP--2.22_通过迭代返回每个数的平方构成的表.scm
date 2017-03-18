(define (squareList1 items)
  (define (iter things answer)
    (if (null? things)
        answer
        (iter (cdr things)
              (cons (* (car things) (car things)) 
                    answer))))
(iter items '()))

(squareList1 (list 1 2 4))
(display "ok")

(define (squareList2 items)
  (define (iter things answer)
    (if (null? things)
        answer
        (iter (cdr things)
              (cons answer 
                    (* (car things) (car things))))))
(iter items '()))

(squareList2 (list 1 2 4))