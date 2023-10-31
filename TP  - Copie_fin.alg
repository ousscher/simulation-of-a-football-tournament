

   SOIENT
   /*---------------------declaration des structures------------------*/
       P , Q DES LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       L UN VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       Tab2 UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       Sa UNE STRUCTURE ( CHAINE , ENTIER ) ;
       V1 , V2 DES VECTEURS ( 8 ) DE CHAINES ;
       V UN VECTEUR ( 32 ) DE CHAINES ;
       T UN VECTEUR ( 8 ) DE ( CHAINE , CHAINE ) ;
       C1 , S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       C UNE CHAINE ;
       T1 UN VECTEUR ( 8 ) DE STRUCTURE ( CHAINE , CHAINE ) ;
       A UN ARB DE ( CHAINE , CHAINE ) ;
      /*---------------------declaration des variables------------------*/
       I , J , Critere DES ENTIERS ;
      /*---------------------declaration des modules------------------*/
      /*--------------------- les procedures ------------------*/
       Remp_equipe UNE ACTION ;
       Creation UNE ACTION ;
       Affichage_matchs UNE ACTION ;
       Hasard UNE ACTION ;
       Efavorite UNE ACTION ;
       Ha_fav UNE ACTION ;
       Nbr_car UNE ACTION ;
       Remp_qualifie UNE ACTION ;
       Qualification UNE ACTION ;
       Affichage_points UNE ACTION ;
       Affich_qualifie UNE ACTION ;
       Affecter UNE ACTION ;
       Matchs UNE ACTION ;
       Classement UNE ACTION ;
       phase1_prec UNE ACTION ;
       phase1_prec_fav UNE ACTION ;
      /*--------------------- les fonctions ------------------*/
       Recherche : FONCTION ( ENTIER ) ;
       Tab : FONCTION ( VECTEUR ( 8 ) DE ( CHAINE , CHAINE ) ) ;
       Creer : FONCTION ( ARB DE ( CHAINE , CHAINE ) ) ;
       Rech : FONCTION ( ENTIER ) ;
       Search : FONCTION ( ENTIER ) ;
       Qualif : FONCTION ( CHAINE ) ;
       Qu_favorite : FONCTION ( CHAINE ) ;
       Qu_hasard : FONCTION ( CHAINE ) ;
       Cr_alphabet : FONCTION ( CHAINE ) ;
       Cr_phase1 : FONCTION ( CHAINE ) ;
       Fav_phase1 : FONCTION ( CHAINE ) ;
    /*------------------programme pricipale-------------------*/
   DEBUT
       APPEL Remp_equipe ( Tab2 ) ;
       APPEL Creation ( Tab2 , L ) ;
       APPEL Affichage_matchs ( L , Tab2 ) ;
       APPEL Qualification ( Critere ) ;
       APPEL Affichage_points ( Tab2 ) ;
       APPEL Remp_qualifie ( Tab2 , V1 , V2 ) ;
       APPEL Affich_qualifie ( V1 , V2 ) ;
       T := Tab ( V1 , V2 ) ;
       A := Creer ( 3 ) ;
       APPEL Affecter ( A , T , 1 , 8 ) ;
       APPEL Classement ( V ) ;
       C := Qualif ( Critere ) ;
       ECRIRE ( 'le vinqueur est ---- : ' , C ) ;
       APPEL Matchs ( A ) ;
      
   FIN
  /*--------------------------------------------------------------------------*/
  /*----------------------------- < PHASE 1 > --------------------------------*/
  /*-------------------- les modules ------------------------ */
  /*--------------------- ACTION : Remp_equipe ------------------*/
   ACTION Remp_equipe ( T ) ;
   /* une procedure qui va nous realiser un tableau des pays participants dans la coupe
   du monde ainsi que leurs points gagnes */
   SOIENT
       T UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       S UNE STRUCTURE ( CHAINE , ENTIER ) ;
      
   DEBUT
      /*------------ GROUPE 1 -----------*/
      /* la 1ere colonne du tableau T represente le groupe n°1 */
       INIT_STRUCT ( S , [ 'PAYSBAS' , 0 ] ) ;
       AFF_ELEMENT ( T [ 1 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'SENEGAL' , 0 ] ) ;
       AFF_ELEMENT ( T [ 1 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'EQUADOR' , 0 ] ) ;
       AFF_ELEMENT ( T [ 1 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'QATAR' , 0 ] ) ;
       AFF_ELEMENT ( T [ 1 , 4 ] , S ) ;
      /*------------ GROUPE 2 -----------*/
      /* la 2eme colonne du tableau T represente le groupe n°2 */
       INIT_STRUCT ( S , [ 'ANGLETERE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 2 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'ETAT-UNIS' , 0 ] ) ;
       AFF_ELEMENT ( T [ 2 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'UKRANIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 2 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'IRAN' , 0 ] ) ;
       AFF_ELEMENT ( T [ 2 , 4 ] , S ) ;
      /*------------ GROUPE 3 -----------*/
      /* la 3eme colonne du tableau T represente le groupe n°3 */
       INIT_STRUCT ( S , [ 'ARGENTINE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 3 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'MEXIQUE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 3 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'POLOGNIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 3 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'ARABIESAOUDITE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 3 , 4 ] , S ) ;
      /*------------ GROUPE 4 -----------*/
      /* la 4eme colonne du tableau T represente le groupe n°4 */
       INIT_STRUCT ( S , [ 'FRANCE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 4 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'DANEMARK' , 0 ] ) ;
       AFF_ELEMENT ( T [ 4 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'TUNISIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 4 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'AUSTRALIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 4 , 4 ] , S ) ;
      /*------------ GROUPE 5 -----------*/
      /* la 5eme colonne du tableau T represente le groupe n°5 */
       INIT_STRUCT ( S , [ 'ESPAGNE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 5 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'ALLEMAGNE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 5 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'JAPAN' , 0 ] ) ;
       AFF_ELEMENT ( T [ 5 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'COSTARICA' , 0 ] ) ;
       AFF_ELEMENT ( T [ 5 , 4 ] , S ) ;
      /*------------ GROUPE 6 -----------*/
      /* la 6eme colonne du tableau T represente le groupe n°6 */
       INIT_STRUCT ( S , [ 'BELGIQUE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 6 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'CROATIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 6 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'MAROC' , 0 ] ) ;
       AFF_ELEMENT ( T [ 6 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'CANADA' , 0 ] ) ;
       AFF_ELEMENT ( T [ 6 , 4 ] , S ) ;
      /*------------ GROUPE 7 -----------*/
      /* la 7eme colonne du tableau T represente le groupe n°7 */
       INIT_STRUCT ( S , [ 'BRESIL' , 0 ] ) ;
       AFF_ELEMENT ( T [ 7 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'SUISSE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 7 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'SERBIE' , 0 ] ) ;
       AFF_ELEMENT ( T [ 7 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'CAMEROUN' , 0 ] ) ;
       AFF_ELEMENT ( T [ 7 , 4 ] , S ) ;
      /*------------ GROUPE 8 -----------*/
      /* la 8eme colonne du tableau T represente le groupe n°8 */
       INIT_STRUCT ( S , [ 'PORTUGAL' , 0 ] ) ;
       AFF_ELEMENT ( T [ 8 , 1 ] , S ) ;
       INIT_STRUCT ( S , [ 'URUGUAY' , 0 ] ) ;
       AFF_ELEMENT ( T [ 8 , 2 ] , S ) ;
       INIT_STRUCT ( S , [ 'COREEDUSUD' , 0 ] ) ;
       AFF_ELEMENT ( T [ 8 , 3 ] , S ) ;
       INIT_STRUCT ( S , [ 'GHANA' , 0 ] ) ;
       AFF_ELEMENT ( T [ 8 , 4 ] , S ) ;
      
   FIN
  /*--------------------- ACTION : Creation ------------------*/
   ACTION Creation ( T , V ) ;
   /* une procedure qui va nous creer un tableau qui contient les groupes
      des eliminatoires */
   SOIENT
       Tete , P , Q , L DES LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       T UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       V : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       I , J , K DES ENTIERS ;
       S1 : ( CHAINES , CHAINES ) ;
       S2 , S3 DES STRUCTURES ( CHAINES , ENTIERS ) ;
      
   DEBUT
       POUR I := 1 , 8
           L := NIL ;
           POUR J := 1 , 6
               ALLOUER ( P ) ;
               SI L <> NIL
                   AFF_ADR ( Q , P ) ;
                  
               SINON
                   L := P ;
                  
               FSI ;
               Q := P
           FPOUR ;
           AFF_ADR ( P , NIL ) ;
           P := L ;
           POUR J := 1 , 4
               K := J + 1 ;
               TQ K <= 4
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   S3 := ELEMENT ( T [ I , K ] ) ;
                   INIT_STRUCT ( S1 , [ STRUCT ( S2 , 1 ) , STRUCT ( S3 , 1 ) ] ) ;
                   AFF_VAL ( P , S1 ) ;
                   K := K + 1 ;
                   P := SUIVANT ( P ) ;
                  
               FTQ
           FPOUR ;
           AFF_ELEMENT ( V [ I ] , L ) ;
          
       FPOUR ;
      
   FIN
  /*--------------------- ACTION : Affichage_matchs ------------------*/
   ACTION Affichage_matchs ( L , T2 ) ;
   /* une procedure qui va afficher les matches de chaque groupe où chaque equipe
   va jouer 3 matchs */
   SOIENT
       L : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       I , J DES ENTIERS ;
       P UNE LISTE DE STRUCTURE ( CHAINES , CHAINES ) ;
       S1 UNE STRUCTURE ( CHAINES , CHAINES ) ;
       T2 UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       S UNE STRUCTURE ( CHAINES , ENTIERS ) ;
      
   DEBUT
       ECRIRE ( '----------- la repartition de groupe -----------' ) ;
       ECRIRE ( '------------------------------------------------' ) ;
       POUR I := 1 , 8
           ECRIRE ( '------------ groupe ' , I , ' ------------' ) ;
           ECRIRE ( '--------------------------------------' ) ;
           POUR J := 1 , 4
               S := ELEMENT ( T2 [ I , J ] ) ;
               ECRIRE ( STRUCT ( S , 1 ) ) ;
              
           FPOUR ;
          
       FPOUR ;
       ECRIRE ( '--------------- les matchs de la première phase ---------------' ) ;
       POUR I := 1 , 8
           ECRIRE ( 'les matchs du groupe numero ' , I , ' sont : ' ) ;
           ECRIRE ( '------------------------------------------' ) ;
           P := ELEMENT ( L [ I ] ) ;
           TQ P <> NIL
               S1 := VALEUR ( P ) ;
               ECRIRE ( STRUCT ( S1 , 1 ) , '     ' , 'VS' , '     ' , STRUCT ( S1 , 2 ) ) ;
               P := SUIVANT ( P ) ;
              
           FTQ ;
          
       FPOUR ;
      
   FIN
   /*--------------------- FONCTION : Recherche ------------------*/
   FONCTION Recherche ( T , C , I ) : ENTIER ;
   /* cette fonction va chercher le classement d'un pays dans son groupe à savoir
    sa position dans le tableau T */
   SOIENT
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       C UNE CHAINE ;
       I , J DES ENTIERS ;
       S UNE STRUCTURE ( CHAINE , ENTIER ) ;
      
   DEBUT
       POUR J := 1 , 4
           S := ELEMENT ( T [ I , J ] ) ;
           SI C = STRUCT ( S , 1 )
               Recherche := J ;
              
           FSI ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Remp_qualifie ------------------*/
   ACTION Remp_qualifie ( T , V1 , V2 )
   /* une procedure qui remplie les tableaux v1, v2 avec les equipes qualifiees de la 1ere phase */
   SOIENT
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       V1 , V2 DES VECTEURS ( 8 ) DE CHAINES ;
       S2 , M UNE STRUCTURE ( CHAINES , ENTIERS ) ;
       C UNE CHAINE ;
       I , J , K DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           M := ELEMENT ( T [ I , 1 ] ) ;
           K := 1 ;
           POUR J := 1 , 4
               SI STRUCT ( M , 2 ) < STRUCT ( ELEMENT ( T [ I , J ] ) , 2 )
                   M := ELEMENT ( T [ I , J ] ) ;
                   K := J ;
                  
               FSI ;
              
           FPOUR ;
           C := STRUCT ( M , 1 ) ;
           AFF_ELEMENT ( V1 [ I ] , C ) ;
           SI K <> 1
               M := ELEMENT ( T [ I , 1 ] ) ;
              
           SINON
               M := ELEMENT ( T [ I , 2 ] ) ;
              
           FSI ;
           POUR J := 1 , 4
               SI ( J <> K ) ET ( STRUCT ( M , 2 ) < STRUCT ( ELEMENT ( T [ I , J ] ) , 2 ) )
                   M := ELEMENT ( T [ I , J ] ) ;
                  
               FSI
           FPOUR ;
           C := STRUCT ( M , 1 ) ;
           AFF_ELEMENT ( V2 [ I ] , C ) ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Hasard ------------------*/
   ACTION Hasard ( T , L ) ;
   /* une procedure qui va gerer les matches du premiere phase et elle va choisir
      les pays qui gagnent aleatoirement ( par hasard ) */
   SOIENT
       L : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       P UNE LISTE DE STRUCTURE ( CHAINES , CHAINES ) ;
       S1 UNE STRUCTURE ( CHAINES , CHAINES ) ;
       S2 , M UNE STRUCTURE ( CHAINES , ENTIERS ) ;
       C UNE CHAINE ;
       I , J , K , E DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           P := ELEMENT ( L [ I ] ) ;
           TQ P <> NIL
               S1 := VALEUR ( P ) ;
               E := ALEANOMBRE ( 3 ) ;
              /* e est un nombre aleatoire entre 0 et 2 */
              /* si e=0 on a une egalisation entre les 2 equipes */
              /* si e=1 l'equipe 1 gagne, sinon l'equipe 2 */
               SI E = 0
                   C := STRUCT ( S1 , 1 ) ;
                   J := Recherche ( T , C , I ) ;
                   C := STRUCT ( S1 , 2 ) ;
                   K := Recherche ( T , C , I ) ;
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 1 ) ) ;
                   M := ELEMENT ( T [ I , K ] ) ;
                   AFF_STRUCT ( M , 2 , ( STRUCT ( M , 2 ) + 1 ) ) ;
                   AFF_ELEMENT ( T [ I , K ] , M ) ;
                  
               SINON
                   SI E = 1
                       C := STRUCT ( S1 , 1 ) ;
                       J := Recherche ( T , C , I ) ;
                       S2 := ELEMENT ( T [ I , J ] ) ;
                       AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                      
                   SINON
                       C := STRUCT ( S1 , 2 ) ;
                       J := Recherche ( T , C , I ) ;
                       S2 := ELEMENT ( T [ I , J ] ) ;
                       AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                      
                   FSI ;
                  
               FSI ;
               AFF_ELEMENT ( T [ I , J ] , S2 ) ;
               P := SUIVANT ( P ) ;
              
           FTQ ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Efavorite ------------------*/
   ACTION Efavorite ( T , L ) ;
  /* si 2 equipes sont dans le meme groupe, par default l'equipe 1 se trouve avant l'equipe 2 */
  /* dans le tableau d'equipes l'equipe 1 est favorite % à l'equipe 2 (selon le classement FIFA) */
   SOIENT
       L : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       P UNE LISTE DE STRUCTURE ( CHAINES , CHAINES ) ;
       S1 UNE STRUCTURE ( CHAINES , CHAINES ) ;
       S2 , M UNE STRUCTURE ( CHAINES , ENTIERS ) ;
       C , C1 , C2 UNE CHAINE ;
       I , J , K DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           P := ELEMENT ( L [ I ] ) ;
           TQ P <> NIL
               S1 := VALEUR ( P ) ;
               C1 := STRUCT ( S1 , 1 ) ;
               J := Recherche ( T , C1 , I ) ;
               C2 := STRUCT ( S1 , 2 ) ;
               K := Recherche ( T , C2 , I ) ;
               SI J < K
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                   AFF_ELEMENT ( T [ I , J ] , S2 ) ;
                  
               SINON
                   S2 := ELEMENT ( T [ I , K ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                   AFF_ELEMENT ( T [ I , K ] , S2 ) ;
                  
               FSI ;
               P := SUIVANT ( P ) ;
              
           FTQ ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Ha_fav ------------------*/
   ACTION Ha_fav ( T , L )
    /* une procedure qui va gerer les matches du premiere phase et elle va choisir
      les pays qui gagnent par hasard et par equipe favorite ( lorsque le nombre gerer
      aleatoirement est 0 et au meme temps la premeire equipe est classée avant la deuxieme
      la premiere equipe gagne et lorsque le nombre gerer
      aleatoirement est 1 et au meme temps la deuxieme equipe est classée avant la premiere
      la deuxieme equipe gagne et lorsque le nombre gerer
      aleatoirement est 0 et au meme temps la deuxieme equipe est classée avant la premiere
      le resultat va etre nulle */
   SOIENT
       L : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       P UNE LISTE DE STRUCTURE ( CHAINES , CHAINES ) ;
       S1 UNE STRUCTURE ( CHAINES , CHAINES ) ;
       S2 , M UNE STRUCTURE ( CHAINES , ENTIERS ) ;
       C UNE CHAINE ;
       I , J , K , E , Critere DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           P := ELEMENT ( L [ I ] ) ;
           TQ P <> NIL
               S1 := VALEUR ( P ) ;
               E := ALEANOMBRE ( 2 ) ;
               SI E = 0
              /* l'equipe 1 gagne selon le hasard et le favorite */
              /* par defaut dans le maillon l'equipe 1 classée avant 2 */
                   C := STRUCT ( S1 , 1 ) ;
                   J := Recherche ( T , C , I ) ;
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                  
               SINON
                   C := STRUCT ( S1 , 1 ) ;
                   J := Recherche ( T , C , I ) ;
                   C := STRUCT ( S1 , 2 ) ;
                   K := Recherche ( T , C , I ) ;
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 1 ) ) ;
                   M := ELEMENT ( T [ I , K ] ) ;
                   AFF_STRUCT ( M , 2 , ( STRUCT ( M , 2 ) + 1 ) ) ;
                   AFF_ELEMENT ( T [ I , K ] , M ) ;
                  
               FSI ;
               AFF_ELEMENT ( T [ I , J ] , S2 ) ;
               P := SUIVANT ( P ) ;
              
           FTQ ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Nbr_car ------------------*/
   ACTION Nbr_car ( T , L ) ;
  /* dans un match, l'equipe qui a moins de nombre caractere dans son nom va gagner */
   SOIENT
       L : VECTEUR ( 8 ) DE LISTES DE STRUCTURES ( CHAINES , CHAINES ) ;
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       P UNE LISTE DE STRUCTURE ( CHAINES , CHAINES ) ;
       S1 UNE STRUCTURE ( CHAINES , CHAINES ) ;
       S2 , M UNE STRUCTURE ( CHAINES , ENTIERS ) ;
       C1 , C2 UNE CHAINE ;
       I , J , K , E DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           P := ELEMENT ( L [ I ] ) ;
           TQ P <> NIL
               S1 := VALEUR ( P ) ;
               C1 := STRUCT ( S1 , 1 ) ;
               C2 := STRUCT ( S1 , 2 ) ;
               SI LONGCHAINE (C1) < LONGCHAINE(C2)
                   J := Recherche ( T , C1 , I ) ;
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                  
               SINON
                   J := Recherche ( T , C2 , I ) ;
                   S2 := ELEMENT ( T [ I , J ] ) ;
                   AFF_STRUCT ( S2 , 2 , ( STRUCT ( S2 , 2 ) + 3 ) ) ;
                  
               FSI ;
               AFF_ELEMENT ( T [ I , J ] , S2 ) ;
               P := SUIVANT ( P ) ;
              
           FTQ ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Qualification ------------------*/
   ACTION Qualification ( Critere )
   /* cette procedure va aider à choisir le critere qui va etre utiliser dans la
      premiere phase */
   SOIENT
       Critere UN ENTIER ;
      
   DEBUT
       ECRIRE ( 'quel le critere que vius voulez utiliser dans la 1ere phase ? ' ) ;
       ECRIRE ( 'pour le hasard appuiyez sur 1' ) ;
       ECRIRE ( 'pour l''equipe favorite appuiyez sur 2' ) ;
       ECRIRE ( 'pour le hasard et l''equipe favorite apuiyez sur 3' ) ;
       ECRIRE ( 'pour le nombre de caractere apuiyez sur 4' ) ;
       LIRE ( Critere ) ;
       SI Critere = 1
           APPEL Hasard ( Tab2 , L ) ;
          
       SINON
           SI Critere = 2
               APPEL Efavorite ( Tab2 , L ) ;
              
           SINON
               SI Critere = 3
                   APPEL Ha_fav ( Tab2 , L ) ;
                  
               SINON
                   APPEL Nbr_car ( Tab2 , L ) ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
   /*--------------------- ACTION : Affichage_points ------------------*/
   ACTION Affichage_points ( T )
   /* cette procedure va aider à afficher le nombre des points des equipes dans la
      premiere phase */
   SOIENT
       T : VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINES , ENTIERS ) ;
       I , J DES ENTIERS ;
      
   DEBUT
       POUR I := 1 , 8
           ECRIRE ( 'le nombre de points de chaque equipe du groupe ' , I ) ;
           POUR J := 1 , 4
               Sa := ELEMENT ( Tab2 [ I , J ] ) ;
               ECRIRE ( STRUCT ( Sa , 1 ) , '   ' , STRUCT ( Sa , 2 ) ) ;
              
           FPOUR ;
           ECRIRE ( '-------------------' ) ;
          
       FPOUR ;
      
   FIN
   /*--------------------- ACTION : Affich_qualifie ------------------*/
   ACTION Affich_qualifie ( V1 , V2 ) ;
   /* cette procedure va aider à afficher les equipes qualifiées en 1ere place
      et les equipes qualifiées en 2eme place dans la phase 1 */
   SOIENT
       V1 , V2 DES VECTEURS ( 8 ) DE CHAINES ;
       I , J DES ENTIERS ;
      
   DEBUT
       ECRIRE ( 'les equipes qalifies en 1er place sont : ' ) ;
       POUR I := 1 , 8
           ECRIRE ( ELEMENT ( V1 [ I ] ) ) ;
          
       FPOUR ;
       ECRIRE ( '-----------------------------------------' ) ;
       ECRIRE ( 'les equipes qalifies en 2eme place sont : ' ) ;
       POUR I := 1 , 8
           ECRIRE ( ELEMENT ( V2 [ I ] ) ) ;
          
       FPOUR ;
      
   FIN
  /*----------------------------- < PHASE 2 > --------------------------------*/
  /*-------------------- les modules ------------------------ */
  /*------------------ FONCTION : TAB -------------------------*/
   FONCTION Tab ( T1 , T2 ) : VECTEUR ( 8 ) DE ( CHAINE , CHAINE ) ;
   /* cette fonction va construire un vecteur qui contient les pays qualifiés au 8eme
      de finale à partir de deux vecteurs des equipes qualifiées en 1ere place
      et des equipes qualifiées en 2eme place dans la phase 1 */
   SOIENT
       I , J UN ENTIER ;
       C1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       T1 , T2 DES VECTEURS ( 8 ) DE CHAINES ;
       V UN VECTEUR ( 8 ) DE ( CHAINE , CHAINE ) ;
      
   DEBUT
       POUR I := 1 , 8
           AFF_STRUCT ( C1 , 1 , ELEMENT ( T1 [ I ] ) ) ;
           SI MOD ( I , 2 ) = 0
               J := I - 1 ;
              
           SINON
               J := I + 1 ;
              
           FSI ;
           AFF_STRUCT ( C1 , 2 , ELEMENT ( T2 [ J ] ) ) ;
           AFF_ELEMENT ( T [ I ] , C1 ) ;
          
       FPOUR ;
       Tab := T ;
      
   FIN
  /*------------------ FONCTION : Creer -------------------------*/
   FONCTION Creer ( Pr ) : ARB DE ( CHAINE , CHAINE )
   /* cette fonction va construire l'arbre de la 2eme phase */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       C UNE STRUCTURE ( CHAINE , CHAINE ) ;
       Pr UN ENTIER ;
      
   DEBUT
       AFF_STRUCT ( C , 1 , 'vide' ) ;
       AFF_STRUCT ( C , 2 , 'vide' ) ;
       SI ( Pr < 0 )
           Creer := NIL ;
          
       SINON
           CREERNOEUD ( A ) ;
           AFF_INFO ( A , C ) ;
           AFF_FG ( A , Creer ( Pr - 1 ) ) ;
           AFF_FD ( A , Creer ( Pr - 1 ) ) ;
           Creer := A ;
          
       FSI ;
      
   FIN
  /*------------------ ACTION : Affecter -------------------------*/
   ACTION Affecter ( A , T , Ii , If ) ;
   /* cette procedure va aider à affecter les pays qualifiés au 8eme de finale dans
      les feuilles de l'arbre (dans chaque feuille une equipe et son adversaire) */
   SOIENT
       A UN ARB DE STRUCTURE ( CHAINE , CHAINE ) ;
       T UN VECTEUR ( 8 ) DE STRUCTURE ( CHAINE , CHAINE ) ;
       Ii , If DES ENTIERS ;
      
   DEBUT
       SI ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL )
           AFF_INFO ( A , ELEMENT ( T [ Ii ] ) ) ;
          
       SINON
           APPEL Affecter ( FG ( A ) , T , Ii , ( Ii + If + 1 ) / 2 ) ;
           APPEL Affecter ( FD ( A ) , T , ( Ii + If + 1 ) / 2 , If ) ;
          
       FSI ;
      
   FIN
  /*------------------ ACTION : Matchs -------------------------*/
   ACTION Matchs ( A )
   /* cette procedure va afficher les matches de chaque etapes de la coupe du monde
      (8eme de finale, quart de finale, demi finale et le finale) */
   SOIT
       F UNE FILE DE ARB DE ( CHAINE , CHAINE ) ;
       A UN ARB DE ( CHAINE , CHAINE ) ;
       M UN POINTEUR VERS ARB DE ( CHAINE , CHAINE ) ;
       I UN ENTIER ;
      
   DEBUT
       CREERFILE ( F ) ;
       M := A ;
       ENFILER ( F , A ) ;
       I := 1 ;
       TQ NON FILEVIDE ( F )
           DEFILER ( F , M ) ;
           SI I = 8
               ECRIRE ( '-------------------------------------' ) ;
               ECRIRE ( 'les matchs de 8eme finale sont : ' ) ;
               ECRIRE ( '-------------------------------------' ) ;
              
           FSI ;
           SI I = 4
               ECRIRE ( '-------------------------------------' ) ;
               ECRIRE ( 'les matchs de quart finale sont : ' ) ;
               ECRIRE ( '-------------------------------------' ) ;
              
           FSI ;
           SI I = 2
               ECRIRE ( '-------------------------------------' ) ;
               ECRIRE ( 'les matchs de demi finale sont : ' ) ;
               ECRIRE ( '-------------------------------------' ) ;
              
           FSI ;
           SI I = 1
               ;
               ECRIRE ( '-------------------------------------' ) ;
               ECRIRE ( 'le match de la finale est : ' ) ;
               ECRIRE ( '-------------------------------------' ) ;
              
           FSI ;
           ECRIRE ( INFO ( M ) ) ;
           SI FG ( M ) # NIL
               ENFILER ( F , FG ( M ) )
           FSI ;
           SI FD ( M ) # NIL :
               ENFILER ( F , FD ( M ) )
           FSI ;
           I := I + 1 ;
          
       FTQ
   FIN
   /*--------------------- ACTION : Classement ------------------*/
   ACTION Classement ( V ) ;
   /* le classement des pays de la 8eme de finale selon le classement de la FIFA */
   SOIENT
       V UN VECTEUR ( 32 ) DE CHAINES ;
      
   DEBUT
       AFF_ELEMENT ( V [ 1 ] , 'BRESIL' ) ;
       AFF_ELEMENT ( V [ 2 ] , 'BELGIQUE' ) ;
       AFF_ELEMENT ( V [ 3 ] , 'FRANCE' ) ;
       AFF_ELEMENT ( V [ 4 ] , 'ARGENTINE' ) ;
       AFF_ELEMENT ( V [ 5 ] , 'ANGLETERE' ) ;
       AFF_ELEMENT ( V [ 6 ] , 'ESPAGNE' ) ;
       AFF_ELEMENT ( V [ 7 ] , 'PORTUGAL' ) ;
       AFF_ELEMENT ( V [ 8 ] , 'MEXIQUE' ) ;
       AFF_ELEMENT ( V [ 9 ] , 'PAYSBAS' ) ;
       AFF_ELEMENT ( V [ 10 ] , 'DANEMARK' ) ;
       AFF_ELEMENT ( V [ 11 ] , 'ALLEMAGNE' ) ;
       AFF_ELEMENT ( V [ 12 ] , 'URUGUAY' ) ;
       AFF_ELEMENT ( V [ 13 ] , 'SUISSE' ) ;
       AFF_ELEMENT ( V [ 14 ] , 'ETAT-UNIS' ) ;
       AFF_ELEMENT ( V [ 15 ] , 'CROATIE' ) ;
       AFF_ELEMENT ( V [ 16 ] , 'SENEGAL' ) ;
       AFF_ELEMENT ( V [ 17 ] , 'IRAN' ) ;
       AFF_ELEMENT ( V [ 18 ] , 'JAPAN' ) ;
       AFF_ELEMENT ( V [ 19 ] , 'MAROC' ) ;
       AFF_ELEMENT ( V [ 20 ] , 'SERBIE' ) ;
       AFF_ELEMENT ( V [ 21 ] , 'POLOGNIE' ) ;
       AFF_ELEMENT ( V [ 22 ] , 'UKRANIE' ) ;
       AFF_ELEMENT ( V [ 23 ] , 'COREEDUSUD' ) ;
       AFF_ELEMENT ( V [ 24 ] , 'COSTARICA' ) ;
       AFF_ELEMENT ( V [ 25 ] , 'TINISIE' ) ;
       AFF_ELEMENT ( V [ 26 ] , 'CAMEROUN' ) ;
       AFF_ELEMENT ( V [ 27 ] , 'CANADA' ) ;
       AFF_ELEMENT ( V [ 28 ] , 'AUSTRALIE' ) ;
       AFF_ELEMENT ( V [ 29 ] , 'EQUADOR' ) ;
       AFF_ELEMENT ( V [ 30 ] , 'ARABIESAOUDITE' ) ;
       AFF_ELEMENT ( V [ 31 ] , 'QATAR' ) ;
       AFF_ELEMENT ( V [ 32 ] , 'GHANA' ) ;
      
   FIN

   /*--------------------- FONCTION : Qu_hasard ------------------*/
   FONCTION Qu_hasard ( A , S1 ) : CHAINE
   /* cette fonction va gerer les finales selon le critere "par hasard" où elle
      va choisir l'equipe qui gagne par hazard selon un nombre gerer aleatoirement */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       C , C2 DES CHAINE ;
       E : ENTIER ;

   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           E := ALEANOMBRE ( 2 ) ;
           SI E = 0
               C := STRUCT ( S1 , 1 ) ;

           SINON
               C := STRUCT ( S1 , 2 ) ;

           FSI ;
           Qu_hasard := C ;

       SINON
           S := INFO ( A ) ;
           AFF_STRUCT ( S , 1 , Qu_hasard ( FG ( A ) , S1 ) ) ;
           AFF_STRUCT ( S , 2 , Qu_hasard ( FD ( A ) , S1 ) ) ;
           AFF_INFO ( A , S ) ;
           E := ALEANOMBRE ( 2 ) ;
           SI E = 0
               C2 := STRUCT ( S , 1 ) ;

           SINON
               C2 := STRUCT ( S , 2 ) ;

           FSI ;
           Qu_hasard := C2 ;

       FSI ;

   FIN
  /*--------------------- FONCTION : Rech ------------------*/
   FONCTION Rech ( V , C ) : ENTIER ;
   /* cette fonction va chercher le classement d'un pays à savoir
    sa position dans le tableau V */
   SOIENT
       V UN VECTEUR ( 32 ) DE CHAINES ;
       C UNE CHAINE ;
       I , Trouv UN ENTIER ;
      
   DEBUT
       I := 1 ;
       Trouv := 0 ;
       TQ ( I <> 33 ) ET ( Trouv <> 1 )
           SI C = ELEMENT ( V [ I ] )
               ;
               Trouv := 1 ;
              
           FSI ;
           I := I + 1 ;
          
       FTQ ;
       Rech := I ;
      
   FIN

   /*--------------------- FONCTION : Qu_favorite ------------------*/
   FONCTION Qu_favorite ( A , V , S1 ) : CHAINE
   /* cette fonction va gerer les finales selon le critere "equipe favorite" où elle
      va choisir l'equipe qui gagne à partir de son classement de la FIFA */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       V UN VECTEUR ( 32 ) DE CHAINES ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       C , C2 , C3 DES CHAINE ;
       B , F : ENTIER ;
      
   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           B := Rech ( V , STRUCT ( S1 , 1 ) ) ;
           F := Rech ( V , STRUCT ( S1 , 2 ) ) ;
           SI B < F
               C := STRUCT ( S1 , 1 ) ;
              
           SINON
               C := STRUCT ( S1 , 2 ) ;
              
           FSI ;
           Qu_favorite := C ;
          
       SINON
           S := INFO ( A ) ;
           AFF_STRUCT ( S , 1 , Qu_favorite ( FG ( A ) , V , S1 ) ) ;
           AFF_STRUCT ( S , 2 , Qu_favorite ( FD ( A ) , V , S1 ) ) ;
           AFF_INFO ( A , S ) ;
           B := Rech ( V , STRUCT ( S , 1 ) ) ;
           F := Rech ( V , STRUCT ( S , 2 ) ) ;
           SI B < F
               C2 := STRUCT ( S , 1 ) ;
              
           SINON
               C2 := STRUCT ( S , 2 ) ;
              
           FSI ;
           Qu_favorite := C2 ;
          
       FSI ;
      
   FIN

  /*--------------------- FONCTION : Search ------------------*/
   FONCTION Search ( C , T ) : ENTIER
   /* cette fonction va chercher et recupirer le nombre des points des equipes */
   SOIENT
       C , C1 DES CHAINES ;
       T UN VECTEUR ( 8 , 4 ) DE ( CHAINE , ENTIER ) ;
       I , J , K DES ENTIERS ;
       W UNE STRUCTURE ( CHAINE , ENTIER ) ;
      
   DEBUT
       POUR I := 1 , 8
           POUR J := 1 , 4
               W := ELEMENT ( T [ I , J ] ) ;
               C1 := STRUCT ( W , 1 ) ;
               SI C = C1
                   K := STRUCT ( W , 2 ) ;
                  
               FSI ;
              
           FPOUR ;
          
       FPOUR ;
       Search := K
   FIN
  /*--------------------- FONCTION : Cr_phase1 ------------------*/
   FONCTION Cr_phase1 ( A , S1 , T ) : CHAINE
   /* cette fonction va gerer les finales selon le critere "les resultats de la phase 1"
      où elle va choisir l'equipe qui gagne à partir de ses resultats dans la premier phase
     (l'equipe qui a plus de points gagne) */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       T UN VECTEUR ( 8 , 4 ) DE ( CHAINE , ENTIER ) ;
       C1 , C2 , C DES CHAINE ;
       X , Y DES ENTIERS ;
      
   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           C1 := STRUCT ( S1 , 1 ) ;
           C2 := STRUCT ( S1 , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           SI X <= Y
               C := C2 ;
              
           SINON
               C := C1 ;
              
           FSI ;
           Cr_phase1 := C ;
          
       SINON
           AFF_STRUCT ( S , 1 , Cr_phase1 ( FG ( A ) , S1 , T ) ) ;
           AFF_STRUCT ( S , 2 , Cr_phase1 ( FD ( A ) , S1 , T ) ) ;
           AFF_INFO ( A , S ) ;
           S := INFO ( A ) ;
           C1 := STRUCT ( S , 1 ) ;
           C2 := STRUCT ( S , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           SI X <= Y
               C := C2 ;
              
           SINON
               C := C1 ;
              
           FSI ;
           Cr_phase1 := C ;
          
       FSI ;
      
   FIN

  /*--------------------- ACTION : phase1_prec ------------------*/
   action phase1_prec ( A , S1 , T , C , E )
   /* cette fonction va gerer les finales selon deux criteres
      (les resultats de la phase 1 + ceux des étapes précédentes de la phase 2)
      où elle va choisir l'equipe qui gagne selon ses points dans la phase 1 et aussi ... */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       T UN VECTEUR ( 8 , 4 ) DE ( CHAINE , ENTIER ) ;
       C1 , C2 , C DES CHAINE ;
       X , Y , E , m , n DES ENTIERS ;

   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           C1 := STRUCT ( S1 , 1 ) ;
           C2 := STRUCT ( S1 , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           SI X <= Y
               C := C2 ;
               x := y - x ;

           SINON
               C := C1 ;
               x := x - y ;

           FSI ;
           e := x;

       SINON
           appel phase1_prec (fg(a) , s1 , T , C1 , m );
           appel phase1_prec (fd(a) , s1 , T , C2 , n );
           AFF_STRUCT ( S , 1 , C1) ;
           AFF_STRUCT ( S , 2 , C2 ) ;
           AFF_INFO ( A , S ) ;
           SI m <= n
               C := C2 ;
               x := n-m;

           SINON
               C := C1 ;
               x := m - n;
           FSI ;
           e := x ;

       FSI ;

   FIN

    /*--------------------- FONCTION : Fav_phase1 ------------------*/
   FONCTION Fav_phase1 ( A , S1 , V , T ) : CHAINE ;
   /* cette fonction va gerer les finales selon deux criteres (les resultats de la phase 1 + equipe favorite) où elle
      va choisir l'equipe qui gagne selon son classement de la FIFA et si elle a plus points que l'adversaire) */
   SOIENT
       T UN VECTEUR ( 8 , 4 ) DE ( CHAINE , ENTIER ) ;
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       V UN VECTEUR ( 32 ) DE CHAINES ;
       C1 , C2 , C DES CHAINES ;
       X , Y , B , F DES ENTIERS ;

   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           C1 := STRUCT ( S1 , 1 ) ;
           C2 := STRUCT ( S1 , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           B := Rech ( V , C1 ) ;
           F := Rech ( V , C2 ) ;
           B := B - X ;
           F := F - Y ;
           SI B < F
               C := C1 ;

           SINON
               C := C2 ;

           FSI ;
           Fav_phase1 := C ;

       SINON
           S := INFO ( A ) ;
           AFF_STRUCT ( S , 1 , Fav_phase1 ( FG ( A ) , S1 , V , T ) ) ;
           AFF_STRUCT ( S , 2 , Fav_phase1 ( FD ( A ) , S1 , V , T ) ) ;
           AFF_INFO ( A , S ) ;
           C1 := STRUCT ( S , 1 ) ;
           C2 := STRUCT ( S , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           B := Rech ( V , STRUCT ( S , 1 ) ) ;
           F := Rech ( V , STRUCT ( S , 2 ) ) ;
           B := B - X ;
           F := F - Y ;
           SI B < F
               C := STRUCT ( S , 1 ) ;

           SINON
               C := STRUCT ( S , 2 ) ;

           FSI ;
           Fav_phase1 := C ;

       FSI ;

   FIN

   /*--------------------- ACTION : phase1_prec_fav ------------------*/
   action phase1_prec_fav ( A , S1 , T , C , E )
   /* cette fonction va gerer les finales selon trois criteres */
   /* (les resultats de la phase 1 + ceux des étapes précédentes de la phase 2 + equipe favorite)*/
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       T UN VECTEUR ( 8 , 4 ) DE ( CHAINE , ENTIER ) ;
       C1 , C2 , C DES CHAINE ;
       X , Y , E , m , n DES ENTIERS ;

   DEBUT
          S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           C1 := STRUCT ( S1 , 1 ) ;
           C2 := STRUCT ( S1 , 2 ) ;
           X := Search ( C1 , T ) ;
           Y := Search ( C2 , T ) ;
           m := Rech ( V , C1 ) ;
           n := Rech ( V , C2 ) ;
           x := x - m;
           y := y - n ;
           SI X <= Y
               C := C2 ;
               x := y - x ;

           SINON
               C := C1 ;
               x := x - y ;

           FSI ;
           e := x;

       SINON
           appel phase1_prec (fg(a) , s1 , T , C1 , m );
           appel phase1_prec (fd(a) , s1 , T , C2 , n );
           AFF_STRUCT ( S , 1 , C1) ;
           AFF_STRUCT ( S , 2 , C2 ) ;
           AFF_INFO ( A , S ) ;
           y := Rech ( V , C1 ) ;
           x := Rech ( V , C2 ) ;
            m := m - x;
           n := n - y ;
           SI m <= n
               C := C2 ;
               m := n-m;

           SINON
               C := C1 ;
               m := m - n;
           FSI ;
           e := m ;

       FSI ;

   FIN

   /*--------------------- FONCTION : Cr_alphabet ------------------*/
   FONCTION Cr_alphabet ( A , S1 ) : CHAINE
   /* cette fonction va gerer les finales selon le critere "alphabet" où elle
      va choisir l'equipe qui gagne à partir de l'equipe qui a moins de nombre de caractere
      dans son nom */
   SOIENT
       A UN ARB DE ( CHAINE , CHAINE ) ;
       S , S1 UNE STRUCTURE ( CHAINE , CHAINE ) ;
       C1 , C2 , C DES CHAINE ;

   DEBUT
       S1 := INFO ( A ) ;
       SI ( ( FG ( A ) = NIL ) ET ( FD ( A ) = NIL ) )
           C1 := STRUCT ( S1 , 1 ) ;
           C2 := STRUCT ( S1 , 2 ) ;
           SI LONGCHAINE(C1) < LONGCHAINE(C2)
               C := C1 ;

           SINON
               C := C2 ;

           FSI ;
           Cr_alphabet := C ;

       SINON
           AFF_STRUCT ( S , 1 , Cr_alphabet ( FG ( A ) , S1 ) ) ;
           AFF_STRUCT ( S , 2 , Cr_alphabet ( FD ( A ) , S1 ) ) ;
           AFF_INFO ( A , S ) ;
           S := INFO ( A ) ;
           C1 := STRUCT ( S , 1 ) ;
           C2 := STRUCT ( S , 2 ) ;
           SI LONGCHAINE(C1) < LONGCHAINE(C2)
               C := C1 ;

           SINON
               C := C2 ;

           FSI ;
           Cr_alphabet := C ;

       FSI ;

   FIN

   /*--------------------- FONCTION : Qualif ------------------*/
   FONCTION Qualif ( Critere ) : CHAINE
   /* cette fonction va aider à choisir le critere qui va etre utiliser dans la
      deuxieme phase */
   SOIT
       Critere UN ENTIER ;
       C UNE CHAINE ;
       s une structure (chaine , entier );
       e un entier;

   DEBUT
       ECRIRE ( 'choisissez votre critere ...' ) ;
       ECRIRE ( 'pour selectionner le hasard appuiyez sur 0' ) ;
       ECRIRE ( 'pour l''equipe favorite appuiyez sur 1 ' ) ;
       ECRIRE ( 'pour selectionner selon un critere alphabatique appuiyez 2 (chaine courte)' ) ;
       ECRIRE ( 'pour le traitement selon le resultat de la phase 1 appuiyez 3 ' ) ;
       ECRIRE ( 'pour le traitement selon l''equipe favorite et le resultat de phase 1 appuiyez 4' ) ;
       ecrire ( ' pour le traitement selon les resultatas precedentes de la phase 1 et 2 appuiyez sur 5 ');
       ecrire ( 'pour le critere vi appuiyez sur 6' );
       LIRE ( Critere ) ;
       SI Critere = 0
           C := Qu_hasard ( A , S1 ) ;

       sinon
       SI Critere = 1
           C := Qu_favorite ( A , V , S1 ) ;

       sinon
       SI Critere = 2
           C := Cr_alphabet ( A , S1 ) ;

       sinon
       SI Critere = 3
           C := Cr_phase1 ( A , S1 , Tab2 ) ;

       sinon
       SI Critere = 4
           C := Fav_phase1 ( A , S1 , V , Tab2 ) ;
       sinon
       si critere = 5
           appel phase1_prec (A , s1 , TAB2 , C , e);
      sinon
       si critere = 6
       appel phase1_prec_fav (A , s1 , tab2 , c , e);
       sinon
       ecrire ('critere non defini ');
       fsi;
       fsi;
       fsi;
       fsi;
       fsi;
       fsi;
       fsi;
       Qualif := C
   FIN

   /*----------------------------- < FIN > --------------------------------*/
