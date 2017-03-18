(define (lastPair items)
  (if (null?  (cdr items))
      (car items) ;can't find "nil"
      (lastPair (cdr items))))