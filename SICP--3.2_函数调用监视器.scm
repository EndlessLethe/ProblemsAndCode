(define (make-monitored proc)
  (define count 0)
  (define (processer input)
    (begin
      (set! count (+ count 1))
      (proc input)))
  (define (how-many-calls?)
    count)
  (define (reset-count)
    (begin
      (set! counter 0)
      (display "already reset the count")))
  (define (dispatch m)
    (cond ((eq? m 'how-many-calls?) (how-many-calls?))
          ((eq? m 'reset-count) (reset-count))
          (else (processer m))))
  dispatch)
     

(define s (make-monitored sqrt))
(s 100)
(s 'how-many-calls?)
(s 200)
(s 'how-many-calls?)