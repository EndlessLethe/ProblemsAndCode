(define (gcdRe a b)
    (if (= b 0) a (gcdRe b (remainder a b))))
(define (makeRat n d)
  (let ((g (gcdRe n d)))
    (begin
      (cond ((< (* n d) 0)
                         (begin
                           (set! d (abs d))
                           (set! n (-(abs n))))))
     (cons (/ n g) (/ d g)))))