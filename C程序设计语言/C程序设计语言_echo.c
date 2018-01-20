   #include <stdio.h>

   /* echo command-line arguments; 2nd version */
   main(int argc, char *argv[])
   {
//       while (--argc > 0)
//           printf("%s%s", *++argv, (argc > 1) ? " " : "");
//       printf("\n");
       
       int c[2] = {1,2,};
       printf("%d\n",c);
       printf("%d", *c);
       printf("%d", *(++c));
       //ËµÃ÷argv++ = argv[1]??
	   // ¸éÖÃ  
       
       
       
       return 0;
   }


