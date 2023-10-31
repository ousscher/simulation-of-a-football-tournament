  /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             R้alis้e par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/


  /*---------------------declaration des structures------------------*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <windows.h>

  int i;
  typedef int bool ;
  typedef char * string255 ;

  #define True 1
  #define False 0

  /** Impl้mentation **\: LISTE DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tss Type_Tss  ;
  typedef Type_Tss * Typestr_Tss ;
  typedef string255 Type1_Tss  ;
  typedef string255 Type2_Tss  ;
  struct Tss
    {
      Type1_Tss Champ1 ;
      Type2_Tss Champ2 ;
    };

  Type1_Tss Struct1_Tss ( Typestr_Tss S)
    {
      return  S->Champ1 ;
    }

  Type2_Tss Struct2_Tss ( Typestr_Tss S)
    {
      return  S->Champ2 ;
    }

  void Aff_struct1_Tss ( Typestr_Tss S, Type1_Tss Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tss ( Typestr_Tss S, Type2_Tss Val )
    {
      strcpy( S->Champ2 , Val );
    }


  /** Listes lin?aires cha?n?es **/

  typedef Typestr_Tss Typeelem_LTss   ;
  typedef struct Maillon_LTss * Pointeur_LTss ;

  struct Maillon_LTss
    {
      Typeelem_LTss  Val ;
      Pointeur_LTss Suiv ;
    } ;

  Pointeur_LTss Allouer_LTss (Pointeur_LTss *P)
    {
      *P = (struct Maillon_LTss *) malloc( sizeof( struct Maillon_LTss)) ;
      (*P)->Val = malloc(sizeof(Type_Tss));
      (*P)->Val->Champ1 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ2 = malloc( 255 * sizeof(char));
      (*P)->Suiv = NULL;
    }

  void Aff_val_LTss(Pointeur_LTss P, Typeelem_LTss Val)
    {
      Typeelem_LTss _Temp ;
      _Temp = malloc(sizeof(Type_Tss));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      Val = _Temp ;
      P->Val = Val ;
    }

  void Aff_adr_LTss( Pointeur_LTss P,  Pointeur_LTss Q)
    {
      P->Suiv = Q ;
    }

  Pointeur_LTss Suivant_LTss(  Pointeur_LTss P)
    { return( P->Suiv ) ;  }

  Typeelem_LTss Valeur_LTss( Pointeur_LTss P)
    { return( P->Val) ; }

  void Liberer_LTss ( Pointeur_LTss P)
    { free (P);}


  /** Impl้mentation **\: TABLEAU DE LISTES DE STRUCTURES**/

  /** Tableaux **/

  typedef Pointeur_LTss Typeelem_V8LTss ;
  typedef Typeelem_V8LTss * Typevect_V8LTss ;

  Typeelem_V8LTss Element_V8LTss ( Typevect_V8LTss V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8LTss ( Typevect_V8LTss V  , int I1 ,  Typeelem_V8LTss Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** Impl้mentation **\: TABLEAU DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tsi Type_Tsi  ;
  typedef Type_Tsi * Typestr_Tsi ;
  typedef string255 Type1_Tsi  ;
  typedef int Type2_Tsi  ;
  struct Tsi
    {
      Type1_Tsi Champ1 ;
      Type2_Tsi Champ2 ;
    };

  Type1_Tsi Struct1_Tsi ( Typestr_Tsi S)
    {
      return  S->Champ1 ;
    }

  Type2_Tsi Struct2_Tsi ( Typestr_Tsi S)
    {
      return  S->Champ2 ;
    }

  void Aff_struct1_Tsi ( Typestr_Tsi S, Type1_Tsi Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tsi ( Typestr_Tsi S, Type2_Tsi Val )
    {
       S->Champ2 = Val ;
    }


  /** Tableaux **/

  typedef Typestr_Tsi Typeelem_V8_4Tsi ;
  typedef Typeelem_V8_4Tsi * Typevect_V8_4Tsi ;

  Typeelem_V8_4Tsi Element_V8_4Tsi ( Typevect_V8_4Tsi V , int I1 , int I2 )
    {
      return  *(V +  (I1-1)*4 + (I2-1)  ) ;
    }

  void Aff_element_V8_4Tsi ( Typevect_V8_4Tsi V  , int I1 , int I2,  Typeelem_V8_4Tsi Val )
    {
      Typeelem_V8_4Tsi _Temp ;
      _Temp = malloc(sizeof(Type_Tsi));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      _Temp->Champ2 = Val->Champ2;
      Val = _Temp ;
      *(V +  (I1-1)*4 + (I2-1)  ) = Val ;
    }


  /** Impl้mentation **\: TABLEAU DE CHAINES DE CARACTERES**/

  /** Tableaux **/

  typedef string255 Typeelem_V8s ;
  typedef Typeelem_V8s * Typevect_V8s ;

  Typeelem_V8s Element_V8s ( Typevect_V8s V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8s ( Typevect_V8s V  , int I1 ,  Typeelem_V8s Val )
    {
     strcpy( *(V +  (I1-1)  ) , Val );
    }


  /** Impl้mentation **\: TABLEAU DE CHAINES DE CARACTERES**/

  /** Tableaux **/

  typedef string255 Typeelem_V32s ;
  typedef Typeelem_V32s * Typevect_V32s ;

  Typeelem_V32s Element_V32s ( Typevect_V32s V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V32s ( Typevect_V32s V  , int I1 ,  Typeelem_V32s Val )
    {
     strcpy( *(V +  (I1-1)  ) , Val );
    }


  /** Impl้mentation **\: TABLEAU DE STRUCTURES**/

  /** Tableaux **/

  typedef Typestr_Tss Typeelem_V8Tss ;
  typedef Typeelem_V8Tss * Typevect_V8Tss ;

  Typeelem_V8Tss Element_V8Tss ( Typevect_V8Tss V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8Tss ( Typevect_V8Tss V  , int I1 ,  Typeelem_V8Tss Val )
    {
      Typeelem_V8Tss _Temp ;
      _Temp = malloc(sizeof(Type_Tss));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      Val = _Temp ;
      *(V +  (I1-1)  ) = Val ;
    }


  /** Impl้mentation **\: ARBRE BINAIRE DE STRUCTURES**/

  /** Arbres de recherche binaire **/

  typedef Typestr_Tss Typeelem_ATss   ;
  typedef struct Noeud_ATss * Pointeur_ATss ;

  struct Noeud_ATss
    {
      Typeelem_ATss  Val ;
      Pointeur_ATss Fg ;
      Pointeur_ATss Fd ;
      Pointeur_ATss Pere ;
     } ;

  Typeelem_ATss Info_ATss( Pointeur_ATss P )
    { return P->Val;   }

  Pointeur_ATss Fg_ATss( Pointeur_ATss P)
    { return P->Fg ; }

  Pointeur_ATss Fd_ATss( Pointeur_ATss P)
    { return P->Fd ; }

  Pointeur_ATss Pere_ATss( Pointeur_ATss P)
    { return P->Pere ; }

  void Aff_info_ATss ( Pointeur_ATss P, Typeelem_ATss Val)
    {
      Typeelem_ATss _Temp ;
      _Temp = malloc(sizeof(Type_Tss));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      _Temp->Champ2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      strcpy(_Temp->Champ2, Val->Champ2);
      Val = _Temp ;
       P->Val = Val ;
    }

  void Aff_fg_ATss( Pointeur_ATss P, Pointeur_ATss Q)
    { P->Fg =  Q;  }

  void Aff_fd_ATss( Pointeur_ATss P, Pointeur_ATss Q)
    { P->Fd =  Q ; }

  void Aff_pere_ATss( Pointeur_ATss P, Pointeur_ATss Q)
    { P->Pere =  Q ; }

  void Creernoeud_ATss( Pointeur_ATss *P)
    {
      *P = (struct Noeud_ATss *) malloc( sizeof( struct Noeud_ATss))   ;
      (*P)->Val = malloc(sizeof(Type_Tss));
      (*P)->Val->Champ1 = malloc( 255 * sizeof(char));
      (*P)->Val->Champ2 = malloc( 255 * sizeof(char));
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_ATss( Pointeur_ATss P)
    { free( P ) ; }


  /** Impl้mentation **\: FILE DE ARBRES BINAIRES DE STRUCTURES**/
  /** Files d'attente **/

  typedef Pointeur_ATss Typeelem_FATss ;
  typedef  struct Filedattente_FATss * Pointeur_FATss ;
  typedef  struct Maillon_FATss * Ptliste_FATss ;

  struct Maillon_FATss
    {
      Typeelem_FATss Val ;
      Ptliste_FATss Suiv  ;
    };

  struct Filedattente_FATss
    {
      Ptliste_FATss Tete, Queue ;
    };

  void Creerfile_FATss ( Pointeur_FATss *Fil   )
    {
      *Fil = (struct Filedattente_FATss *) malloc( sizeof( struct Filedattente_FATss)) ;
      (*Fil)->Tete = NULL ;
      (*Fil)->Queue = NULL ;
    }

  bool Filevide_FATss (Pointeur_FATss Fil  )
    { return  Fil->Tete == NULL ;}

  void Enfiler_FATss ( Pointeur_FATss Fil , Typeelem_FATss Val   )
    {
      Ptliste_FATss Q;

      Q = (struct Maillon_FATss *) malloc( sizeof( struct Maillon_FATss))   ;
      Q->Val = Val ;
      Q->Suiv = NULL;
      if ( ! Filevide_FATss(Fil) )
        Fil->Queue->Suiv = Q ;
      else Fil->Tete = Q;
        Fil->Queue = Q;
    }

  void Defiler_FATss (Pointeur_FATss Fil, Typeelem_FATss *Val )
    {
      if (! Filevide_FATss(Fil) )
        {
          *Val = Fil->Tete->Val ;
          Fil->Tete =  Fil->Tete->Suiv;
        }
      else printf ("%s \n", "File d'attente vide");
    }

  /** Variables du programme principal **/
  Pointeur_LTss P=NULL;
  Pointeur_LTss Q=NULL;
  Typevect_V8LTss L;
  Typevect_V8_4Tsi Tab2;
  Typestr_Tsi Sa;
  Typevect_V8s V1;
  Typevect_V8s V2;
  Typevect_V32s V;
  Typevect_V8Tss T;
  Typestr_Tss C1;
  Typestr_Tss S;
  Typestr_Tss S1;
  string255 C;
  Typevect_V8Tss T1;
  Pointeur_ATss A=NULL;
  int I;
  int J;
  int Critere;
  int _Px1;
  int _Px2;
  int _Px3;
  int _Izw;  /** Variable de contr๔le **/

  /** Fonctions standards **/

  int Aleanombre( int N )
    { return ( rand() % N ); }

  int Mod( int a, int b)
    { return ( a % b ); }


  /** Initialisation d'une structure **/
  void Init_struct_Tsi ( Typestr_Tsi S, Type_Tsi S_ )
    {
      strcpy( S->Champ1 , S_.Champ1 );
      S->Champ2 = S_.Champ2 ;
    }


  /** Initialisation d'une structure **/
  void Init_struct_Tss ( Typestr_Tss S, Type_Tss S_ )
    {
      strcpy( S->Champ1 , S_.Champ1 );
      strcpy( S->Champ2 , S_.Champ2 );
    }


  /** Prototypes des fonctions **/

  void Remp_equipe (Typevect_V8_4Tsi *T);
  void Creation (Typevect_V8_4Tsi *T , Typevect_V8LTss *V);
  void Affichage_matchs (Typevect_V8LTss *L , Typevect_V8_4Tsi *T2);
  int  Recherche (Typevect_V8_4Tsi *T , string255 *C , int *I) ;
  void Remp_qualifie (Typevect_V8_4Tsi *T , Typevect_V8s *V1 , Typevect_V8s *V2);
  void Hasard (Typevect_V8_4Tsi *T , Typevect_V8LTss *L);
  void Efavorite (Typevect_V8_4Tsi *T , Typevect_V8LTss *L);
  void Ha_fav (Typevect_V8_4Tsi *T , Typevect_V8LTss *L);
  void Nbr_car (Typevect_V8_4Tsi *T , Typevect_V8LTss *L);
  void Qualification (int *Critere);
  void Affichage_points (Typevect_V8_4Tsi *T);
  void Affich_qualifie (Typevect_V8s *V1 , Typevect_V8s *V2);
  Typevect_V8Tss Tab (Typevect_V8s *T1 , Typevect_V8s *T2) ;
  Pointeur_ATss Creer (int *Pr) ;
  void Affecter (Pointeur_ATss *A , Typevect_V8Tss *T , int *Ii , int *If);
  void Matchs (Pointeur_ATss *A);
  void Classement (Typevect_V32s *V);
  string255  Qu_hasard (Pointeur_ATss *A , Typestr_Tss *S1) ;
  int  Rech (Typevect_V32s *V , string255 *C) ;
  string255  Qu_favorite (Pointeur_ATss *A , Typevect_V32s *V , Typestr_Tss *S1) ;
  int  Search (string255 *C , Typevect_V8_4Tsi *T) ;
  string255  Cr_phase1 (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T) ;
  void Phase1_prec (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T , string255 *C , int *E);
  string255  Fav_phase1 (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V32s *V , Typevect_V8_4Tsi *T) ;
  void Phase1_prec_fav (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T , string255 *C , int *E);
  string255  Cr_alphabet (Pointeur_ATss *A , Typestr_Tss *S1) ;
  string255  Qualif (int *Critere) ;
  void nom ();

  /*--------------------------------------------------------------------------*/
  /*----------------------------- < PHASE 1 > --------------------------------*/
  /*-------------------- les modules ------------------------ */
  /*--------------------- ACTION : Remp_equipe ------------------*/
  void Remp_equipe (Typevect_V8_4Tsi *T)
    {
      /** Variables locales **/
      Typestr_Tsi S;
      Type_Tsi S_S;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tsi));
     S->Champ1 = malloc(255 * sizeof(char));
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "PAYSBAS") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 1 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "SENEGAL") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 1 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "EQUADOR") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 1 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "QATAR") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 1 , 4   , S ) ;
    /*------------ GROUPE 2 -----------*/
    /* la 2eme colonne du tableau *T represente le groupe nฐ2 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ANGLETERE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 2 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ETAT-UNIS") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 2 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "UKRANIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 2 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "IRAN") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 2 , 4   , S ) ;
    /*------------ GROUPE 3 -----------*/
    /* la 3eme colonne du tableau *T represente le groupe nฐ3 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ARGENTINE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 3 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "MEXIQUE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 3 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "POLOGNIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 3 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ARABIESAOUDITE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 3 , 4   , S ) ;
    /*------------ GROUPE 4 -----------*/
    /* la 4eme colonne du tableau *T represente le groupe nฐ4 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "FRANCE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 4 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "DANEMARK") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 4 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "TUNISIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 4 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "AUSTRALIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 4 , 4   , S ) ;
    /*------------ GROUPE 5 -----------*/
    /* la 5eme colonne du tableau *T represente le groupe nฐ5 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ESPAGNE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 5 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "ALLEMAGNE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 5 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "JAPAN") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 5 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "COSTARICA") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 5 , 4   , S ) ;
    /*------------ GROUPE 6 -----------*/
    /* la 6eme colonne du tableau *T represente le groupe nฐ6 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "BELGIQUE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 6 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "CROATIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 6 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "MAROC") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 6 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "CANADA") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 6 , 4   , S ) ;
    /*------------ GROUPE 7 -----------*/
    /* la 7eme colonne du tableau *T represente le groupe nฐ7 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "BRESIL") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 7 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "SUISSE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 7 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "SERBIE") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 7 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "CAMEROUN") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 7 , 4   , S ) ;
    /*------------ GROUPE 8 -----------*/
    /* la 8eme colonne du tableau *T represente le groupe nฐ8 */
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "PORTUGAL") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 8 , 1   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "URUGUAY") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 8 , 2   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "COREEDUSUD") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 8 , 3   , S ) ;
     S_S.Champ1= malloc(255 * sizeof(char));
     strcpy(S_S.Champ1 , "GHANA") ;
     S_S.Champ2 = 0 ;
     Init_struct_Tsi ( S , S_S )  ;
     Aff_element_V8_4Tsi ( *T , 8 , 4   , S ) ;

    }
  /*--------------------- ACTION : Creation ------------------*/
  void Creation (Typevect_V8_4Tsi *T , Typevect_V8LTss *V)
    {
      /** Variables locales **/
      Pointeur_LTss Tete=NULL;
      Pointeur_LTss P=NULL;
      Pointeur_LTss Q=NULL;
      Pointeur_LTss L=NULL;
      int I;
      int J;
      int K;
      Typestr_Tss S1;
      Typestr_Tsi S2;
      Typestr_Tsi S3;
      Type_Tss S_S1;

      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     S3 = malloc(sizeof(Type_Tsi));
     S3->Champ1 = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       L  =  NULL ;
       for( J  =  1 ;J <=  6 ; ++J){
         Allouer_LTss (& P ) ;
         if( L != NULL) {
           Aff_adr_LTss ( Q , P ) ;
           }
         else
           {
           L  =  P ;

         } ;
         Q  =  P;
       } ;
       Aff_adr_LTss ( P , NULL ) ;
       P  =  L ;
       for( J  =  1 ;J <=  4 ; ++J){
         K  =  J + 1 ;
         while( K <= 4) {
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
      /* Affectation globale de structure */
           strcpy(S3->Champ1,   Element_V8_4Tsi ( *T , I , K   )->Champ1);
           S3->Champ2 =   Element_V8_4Tsi ( *T , I , K   )->Champ2;
 ;
           S_S1.Champ1= malloc(255 * sizeof(char));
           strcpy(S_S1.Champ1 , Struct1_Tsi(S2)) ;
           S_S1.Champ2= malloc(255 * sizeof(char));
           strcpy(S_S1.Champ2 , Struct1_Tsi(S3)) ;
           Init_struct_Tss ( S1 , S_S1 )  ;
           Aff_val_LTss ( P , S1 ) ;
           K  =  K + 1 ;
           P  =  Suivant_LTss ( P ) ;

         }
       } ;
       Aff_element_V8LTss ( *V , I   , L ) ;

     } ;

    }
  /*--------------------- ACTION : Affichage_matchs ------------------*/
  void Affichage_matchs (Typevect_V8LTss *L , Typevect_V8_4Tsi *T2)
    {
      /** Variables locales **/
      int I , i , a;
      int J;
      Pointeur_LTss P=NULL;
      Typestr_Tss S1;
      Typestr_Tsi S;

      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S = malloc(sizeof(Type_Tsi));
     S->Champ1 = malloc(255 * sizeof(char));
     printf ( " %s\n", "----------- la repartition de groupe -----------" ) ;
     printf ( " %s\n", "------------------------------------------------" ) ;
     for( I  =  1 ;I <=  8 ; ++I){
       printf ( " %sn", "------------ groupe " );
       printf ( " %d", I );
       printf ( " %s\n", " ------------" ) ;
       printf ( " %s\n", "--------------------------------------" ) ;
       for( J  =  1 ;J <=  4 ; ++J){
      /* Affectation globale de structure */
         strcpy(S->Champ1,   Element_V8_4Tsi ( *T2 , I , J   )->Champ1);
         S->Champ2 =   Element_V8_4Tsi ( *T2 , I , J   )->Champ2;
 ;
         printf ( " %s\n", Struct1_Tsi(S) ) ;

       } ;

     } ;
     printf ( " %s\n", "--------------- les matchs de la premiere phase ---------------" ) ;
     for( I  =  1 ;I <=  8 ; ++I){
       printf ( " %s\n", "---------------------------------------------------------------" ) ;
       printf ( " %s", "les matchs du groupe numero " );
       printf ( " %d", I );
       printf ( " %s\n", " sont : " ) ;
       printf ( " %s\n", "---------------------------------------------------------------" ) ;
       P  =  Element_V8LTss ( *L , I   ) ;
       while( P != NULL) {
      /* Affectation globale de structure */
         strcpy(S1->Champ1,   Valeur_LTss ( P )->Champ1);
         strcpy(S1->Champ2,   Valeur_LTss ( P )->Champ2);
 ;
         printf ( " %s", Struct1_Tss(S1) );
         a = 14 - strlen(Struct1_Tss(S1));
         for ( i = 1 ; i <=a ; i++)
         {
             printf ("%s" , " ");
         }
         printf ( " %s", "     VS           " );
         printf ( " %s\n", Struct2_Tss(S1) ) ;
         P  =  Suivant_LTss ( P ) ;

       } ;

     } ;

    }
  /*--------------------- FONCTION : Recherche ------------------*/
  int  Recherche (Typevect_V8_4Tsi *T , string255 *C , int *I)
    {
      /** Variables locales **/
      int  Recherche2 ;
      int J;
      Typestr_Tsi S;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tsi));
     S->Champ1 = malloc(255 * sizeof(char));
     for( J  =  1 ;J <=  4 ; ++J){
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Element_V8_4Tsi ( *T , *I , J   )->Champ1);
       S->Champ2 =   Element_V8_4Tsi ( *T , *I , J   )->Champ2;
 ;
       if(strcmp( *C, Struct1_Tsi ( S  )) == 0 ) {
         Recherche2  =  J ;

       } ;

     } ;

     return Recherche2 ;
    }
  /*--------------------- ACTION : Remp_qualifie ------------------*/
  /* une procedure qui remplie les tableaux v1, v2 avec les equipes qualifiees de la 1ere phase */

  void Remp_qualifie (Typevect_V8_4Tsi *T , Typevect_V8s *V1 , Typevect_V8s *V2)
    {
      /** Variables locales **/
      Typestr_Tsi S2;
      Typestr_Tsi M;
      string255 C;
      int I;
      int J;
      int K;

      /** Corps du module **/
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     M = malloc(sizeof(Type_Tsi));
     M->Champ1 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
      /* Affectation globale de structure */
       strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , 1   )->Champ1);
       M->Champ2 =   Element_V8_4Tsi ( *T , I , 1   )->Champ2;
 ;
       K  =  1 ;
       for( J  =  1 ;J <=  4 ; ++J){
         if( Struct2_Tsi ( M  ) < Struct2_Tsi ( Element_V8_4Tsi ( *T , I , J   )  )) {
      /* Affectation globale de structure */
           strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           M->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           K  =  J ;

         } ;

       } ;
       strcpy (C,   Struct1_Tsi ( M  )) ;
       Aff_element_V8s ( *V1 , I   , C ) ;
       if( K != 1) {
      /* Affectation globale de structure */
         strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , 1   )->Champ1);
         M->Champ2 =   Element_V8_4Tsi ( *T , I , 1   )->Champ2;
 ;
         }
       else
         {
      /* Affectation globale de structure */
         strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , 2   )->Champ1);
         M->Champ2 =   Element_V8_4Tsi ( *T , I , 2   )->Champ2;
 ;

       } ;
       for( J  =  1 ;J <=  4 ; ++J){
         if( ( J != K ) && ( Struct2_Tsi ( M  ) < Struct2_Tsi ( Element_V8_4Tsi ( *T , I , J   )  ) )) {
      /* Affectation globale de structure */
           strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           M->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;

         }
       } ;
       strcpy (C,   Struct1_Tsi ( M  )) ;
       Aff_element_V8s ( *V2 , I   , C ) ;

     } ;

    }
  /*--------------------- ACTION : Hasard ------------------*/
  void Hasard (Typevect_V8_4Tsi *T , Typevect_V8LTss *L)
    {
      /** Variables locales **/
      Pointeur_LTss P=NULL;
      Typestr_Tss S1;
      Typestr_Tsi S2;
      Typestr_Tsi M;
      string255 C;
      int I;
      int J;
      int K;
      int E;

      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     M = malloc(sizeof(Type_Tsi));
     M->Champ1 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       P  =  Element_V8LTss ( *L , I   ) ;
       printf("%s\n" , "---------------");
       while( P != NULL) {
      /* Affectation globale de structure */
         strcpy(S1->Champ1,   Valeur_LTss ( P )->Champ1);
         strcpy(S1->Champ2,   Valeur_LTss ( P )->Champ2);
 ;
         E  =  rand ()%3 ;


        /* quelques modifications au niveau des affectations */
         if( E == 0) {
           strcpy (C,   S1->Champ1) ;
           J  =  Recherche ( & *T , & C , & I ) ;
           strcpy (C,   S1->Champ2) ;
           K  =  Recherche ( & *T , & C , & I ) ;
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;

           S2->Champ2 = (S2->Champ2)+1;
      /* Affectation globale de structure */
           strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , K   )->Champ1);
           M->Champ2 =   Element_V8_4Tsi ( *T , I , K   )->Champ2;
 ;
           M ->Champ2  = ( M ->Champ2) + 1   ;
           Aff_element_V8_4Tsi ( *T , I , K   , M ) ;
           }
         else
           {
           if( E == 1) {
             strcpy (C,   Struct1_Tss ( S1  )) ;
             J  =  Recherche ( & *T , & C , & I ) ;
      /* Affectation globale de structure */
             strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
             S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
             S2->Champ2 = (S2->Champ2)+3;
             }
           else
             {
             strcpy (C,   Struct2_Tss ( S1  )) ;
             J  =  Recherche ( & *T , & C , & I ) ;
      /* Affectation globale de structure */
             strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
             S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
             S2->Champ2 = (S2->Champ2)+3;

           } ;

         } ;
         Aff_element_V8_4Tsi ( *T , I , J   , S2 ) ;
         P  =  Suivant_LTss ( P ) ;

       } ;

     } ;

    }
  /*--------------------- ACTION : Efavorite ------------------*/
  void Efavorite (Typevect_V8_4Tsi *T , Typevect_V8LTss *L)
    {
      /** Variables locales **/
      Pointeur_LTss P=NULL;
      Typestr_Tss S1;
      Typestr_Tsi S2;
      Typestr_Tsi M;
      string255 C;
      string255 C1;
      string255 C2;
      int I;
      int J;
      int K;

      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     M = malloc(sizeof(Type_Tsi));
     M->Champ1 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       P  =  Element_V8LTss ( *L , I   ) ;
       while( P != NULL) {
      /* Affectation globale de structure */
         strcpy(S1->Champ1,   Valeur_LTss ( P )->Champ1);
         strcpy(S1->Champ2,   Valeur_LTss ( P )->Champ2);
 ;
         strcpy (C1,   Struct1_Tss ( S1  )) ;
         J  =  Recherche ( & *T , & C1 , & I ) ;
         strcpy (C2,   Struct2_Tss ( S1  )) ;
         K  =  Recherche ( & *T , & C2 , & I ) ;
         if( J < K) {
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 3 ) ) ;
           Aff_element_V8_4Tsi ( *T , I , J   , S2 ) ;
           }
         else
           {
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , K   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , K   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 3 ) ) ;
           Aff_element_V8_4Tsi ( *T , I , K   , S2 ) ;

         } ;
         P  =  Suivant_LTss ( P ) ;

       } ;

     } ;

    }
  /*--------------------- ACTION : Ha_fav ------------------*/
  /* une procedure qui va gerer les matches du premiere phase et elle va choisir
      les pays qui gagnent par hasard et par equipe favorite ( lorsque le nombre gerer
      aleatoirement est 0 et au meme temps la premeire equipe est class้e avant la deuxieme
      la premiere equipe gagne et lorsque le nombre gerer
      aleatoirement est 1 et au meme temps la deuxieme equipe est class้e avant la premiere
      la deuxieme equipe gagne et lorsque le nombre gerer
      aleatoirement est 0 et au meme temps la deuxieme equipe est class้e avant la premiere
      le resultat va etre nulle */

  void Ha_fav (Typevect_V8_4Tsi *T , Typevect_V8LTss *L)
    {
      /** Variables locales **/
      Pointeur_LTss P=NULL;
      Typestr_Tss S1;
      Typestr_Tsi S2;
      Typestr_Tsi M;
      string255 C;
      int I;
      int J;
      int K;
      int E;
      int Critere;

      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     M = malloc(sizeof(Type_Tsi));
     M->Champ1 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       P  =  Element_V8LTss ( *L , I   ) ;
       while( P != NULL) {
      /* Affectation globale de structure */
         strcpy(S1->Champ1,   Valeur_LTss ( P )->Champ1);
         strcpy(S1->Champ2,   Valeur_LTss ( P )->Champ2);
 ;
         E  =  Aleanombre(2 ) ;
        /* l'equipe 1 gagne selon le hasard et le favorite */
        /* par defaut dans le maillon l'equipe 1 class้e avant 2 */
         if( E == 0) {
           strcpy (C,   Struct1_Tss ( S1  )) ;
           J  =  Recherche ( & *T , & C , & I ) ;
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 3 ) ) ;
           }
         else
           {
           strcpy (C,   Struct1_Tss ( S1  )) ;
           J  =  Recherche ( & *T , & C , & I ) ;
           strcpy (C,   Struct2_Tss ( S1  )) ;
           K  =  Recherche ( & *T , & C , & I ) ;
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 1 ) ) ;
      /* Affectation globale de structure */
           strcpy(M->Champ1,   Element_V8_4Tsi ( *T , I , K   )->Champ1);
           M->Champ2 =   Element_V8_4Tsi ( *T , I , K   )->Champ2;
 ;
           Aff_struct2_Tsi ( M  , ( Struct2_Tsi ( M  ) + 1 ) ) ;
           Aff_element_V8_4Tsi ( *T , I , K   , M ) ;

         } ;
         Aff_element_V8_4Tsi ( *T , I , J   , S2 ) ;
         P  =  Suivant_LTss ( P ) ;

       } ;

     } ;

    }
  /*--------------------- ACTION : Nbr_car ------------------*/
  void Nbr_car (Typevect_V8_4Tsi *T , Typevect_V8LTss *L)
    {
      /** Variables locales **/
      Pointeur_LTss P=NULL;
      Typestr_Tss S1;
      Typestr_Tsi S2;
      Typestr_Tsi M;
      string255 C1, C2 ;
      int I, J , K , E;


      /** Corps du module **/
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     S2 = malloc(sizeof(Type_Tsi));
     S2->Champ1 = malloc(255 * sizeof(char));
     M = malloc(sizeof(Type_Tsi));
     M->Champ1 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       P  =  Element_V8LTss ( *L , I   ) ;
       while( P != NULL) {
      /* Affectation globale de structure */
         strcpy(S1->Champ1,   Valeur_LTss ( P )->Champ1);
         strcpy(S1->Champ2,   Valeur_LTss ( P )->Champ2);
 ;
         strcpy (C1,   Struct1_Tss ( S1  )) ;
         strcpy (C2,   Struct2_Tss ( S1  )) ;
         if(strlen( C1 ) < strlen (C2)  ) {                     /** erreur regl้e **/
           J  =  Recherche ( & *T , & C1 , & I ) ;
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 3 ) ) ;
           }
         else
           {
           J  =  Recherche ( & *T , & C2 , & I ) ;
      /* Affectation globale de structure */
           strcpy(S2->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
           S2->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
           Aff_struct2_Tsi ( S2  , ( Struct2_Tsi ( S2  ) + 3 ) ) ;

         } ;
         Aff_element_V8_4Tsi ( *T , I , J   , S2 ) ;
         P  =  Suivant_LTss ( P ) ;

       } ;

     } ;

    }

  /*--------------------- ACTION : Qualification ------------------*/
  /* cette procedure va aider เ choisir le critere qui va etre utiliser dans la
      premiere phase */

  void Qualification (int *Critere)
    {

      /** Corps du module **/
     printf("\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
     printf("\n\t\xBA   criteres du 1ere phase   \xBA");
     printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
     printf("\n\Critere[1] traiter selon le hasard");
     printf("\nCritere[2] traiter selon l'equipe favorite");
     printf("\nCritere[3] traiter selon le hasard et l'equipe favorite");
     printf("\nCritere[4] traiter selon le nom (le nom le plus court qui gagne )");
     printf("\n\nVeuillez indiquer votre choix : ");
     scanf ( " %d", &*Critere ) ;
     if( *Critere == 1) {
       Hasard ( & Tab2 , & L ) ;
       }
     else
       {
       if( *Critere == 2) {
         Efavorite ( & Tab2 , & L ) ;
         }
       else
         {
         if( *Critere == 3) {
           Ha_fav ( & Tab2 , & L ) ;
           }
         else
           {
           Nbr_car ( & Tab2 , & L ) ;

         } ;

       } ;

     } ;

    }





  /*--------------------- ACTION : Affichage_points ------------------*/
  /* cette procedure va aider เ afficher le nombre des points des equipes dans la
      premiere phase */

  void Affichage_points (Typevect_V8_4Tsi *T)
    {
      /** Variables locales **/
      int I , J , k , a;

      /** Corps du module **/
     for( I  =  1 ;I <=  8 ; ++I){                                              /** erreur regl้e **/
       printf ( " %s", "le nombre de points de chaque equipe du groupe " );
       printf ( " %d\n", I ) ;
       for( J  =  1 ;J <=  4 ; ++J){
      /* Affectation globale de structure */
         strcpy(Sa->Champ1,   Element_V8_4Tsi ( Tab2 , I , J   )->Champ1);
         Sa->Champ2 =   Element_V8_4Tsi ( Tab2 , I , J   )->Champ2;
 ;
         printf ( " %s", Struct1_Tsi(Sa) );
         a = 14 - strlen(Struct1_Tsi(Sa));
         for ( k = 1 ; k <=a ; k++)
         {
             printf ("%s" , " ");
         }
         printf ( " %s", "      " );
         printf ( " %d\n", Struct2_Tsi(Sa) ) ;

       } ;
       printf ( " %s", "-------------------" ) ;

     } ;

    }
  /*--------------------- ACTION : Affich_qualifie ------------------*/
  void Affich_qualifie (Typevect_V8s *V1 , Typevect_V8s *V2)
    {
      /** Variables locales **/
      int I;
      int J;

      /** Corps du module **/
     printf ( " %s\n", "les equipes qualifiees en 1ere place sont : " ) ;
     for( I  =  1 ;I <=  8 ; ++I){
       printf ( " %s\n", Element_V8s(*V1,I) ) ;

     } ;
     printf ( " %s\n", "-----------------------------------------" ) ;
     printf ( " %s\n", "les equipes qualifiees en 2eme place sont : " ) ;
     for( I  =  1 ;I <=  8 ; ++I){
       printf ( " %s\n", Element_V8s(*V2,I) ) ;

     } ;

    }
  /*----------------------------- < PHASE 2 > --------------------------------*/
  /*-------------------- les modules ------------------------ */
  /*------------------ FONCTION : TAB -------------------------*/
  Typevect_V8Tss Tab (Typevect_V8s *T1 , Typevect_V8s *T2)
    {
      /** Variables locales **/
      Typevect_V8Tss Tab2 ;
      int I;
      int J;
      Typestr_Tss C1;
      Typevect_V8Tss V;

      /** Corps du module **/
     C1 = malloc(sizeof(Type_Tss));
     C1->Champ1 = malloc(255 * sizeof(char));
     C1->Champ2 = malloc(255 * sizeof(char));
     V = malloc(8 * sizeof(Typestr_Tss));
     int _Izw2;for (_Izw2=0; _Izw2<8; ++_Izw2)
       V[_Izw2] = malloc( sizeof(Type_Tss ));
     int _Izw3;for (_Izw3=0; _Izw3<8; ++_Izw3){
       V[_Izw3]->Champ2= malloc(255 * sizeof(char));}
     for( I  =  1 ;I <=  8 ; ++I){
       Aff_struct1_Tss ( C1  , Element_V8s ( *T1 , I   ) ) ;
       if( Mod ( I , 2 ) == 0) {
         J  =  I - 1 ;
         }
       else
         {
         J  =  I + 1 ;

       } ;
       Aff_struct2_Tss ( C1  , Element_V8s ( *T2 , J   ) ) ;
       Aff_element_V8Tss ( T , I   , C1 ) ;

     } ;
     Tab2  =  T ;

     return Tab2 ;
    }
  /*------------------ FONCTION : Creer -------------------------*/
  /* cette fonction va construire l'arbre de la 2eme phase */

  Pointeur_ATss Creer (int *Pr)
    {
      /** Variables locales **/
      Pointeur_ATss Creer2 =NULL;
      Pointeur_ATss A=NULL;
      Typestr_Tss C;
      int _Px1;
      int _Px2;

      /** Corps du module **/
     C = malloc(sizeof(Type_Tss));
     C->Champ1 = malloc(255 * sizeof(char));
     C->Champ2 = malloc(255 * sizeof(char));
     Aff_struct1_Tss ( C  , "vide" ) ;
     Aff_struct2_Tss ( C  , "vide" ) ;
     if( ( *Pr < 0 )) {
       Creer2  =  NULL ;
       }
     else
       {
       Creernoeud_ATss (& A ) ;
       Aff_info_ATss ( A , C ) ;
       _Px1 =  *Pr - 1 ;
       Aff_fg_ATss ( A , Creer ( &_Px1) ) ;
       _Px2 =  *Pr - 1 ;
       Aff_fd_ATss ( A , Creer ( &_Px2) ) ;
       Creer2  =  A ;

     } ;

     return Creer2 ;
    }
  /*------------------ ACTION : Affecter -------------------------*/
  void Affecter (Pointeur_ATss *A , Typevect_V8Tss *T , int *Ii , int *If)
    {
      /** Variables locales **/
      Pointeur_ATss _Px1=NULL;
      int _Px2;
      Pointeur_ATss _Px3=NULL;
      int _Px4;

      /** Corps du module **/
     if( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL )) {
       Aff_info_ATss ( *A , Element_V8Tss ( *T , *Ii   ) ) ;
       }
     else
       {
       _Px1 =  Fg_ATss ( *A ) ;
       _Px2 =  ( *Ii + *If + 1 ) / 2 ;
       Affecter ( &_Px1, & *T , & *Ii , &_Px2) ;
       _Px3 =  Fd_ATss ( *A ) ;
       _Px4 =  ( *Ii + *If + 1 ) / 2 ;
       Affecter ( &_Px3, & *T , &_Px4, & *If ) ;

     } ;

    }
  /*------------------ ACTION : Matchs -------------------------*/
  /* cette procedure va afficher les matches de chaque etapes de la coupe du monde
      (8eme de finale, quart de finale, demi finale et le finale) */

  void Matchs (Pointeur_ATss *A)
    {
      /** Variables locales **/
      Pointeur_FATss F=NULL;
      Pointeur_ATss M=NULL;
      int I , k , a;
      Type_Tss _Struct_Temp1;

      /** Corps du module **/
     Creerfile_FATss (& F ) ;
     M  =  *A ;
     Enfiler_FATss ( F , *A ) ;
     I  =  1 ;
     while( ! Filevide_FATss ( F )) {
       Defiler_FATss ( F , &M ) ;
       if( I == 8) {
         printf ( " %s\n", "-------------------------------------" ) ;
         printf ( " %s\n", "les matchs de 8eme finale sont : " ) ;
         printf ( " %s\n", "-------------------------------------" ) ;

       } ;
       if( I == 4) {
         printf ( " %s\n", "-------------------------------------" ) ;
         printf ( " %s\n", "les matchs de quart finale sont : " ) ;
         printf ( " %s\n", "-------------------------------------" ) ;

       } ;
       if( I == 2) {
         printf ( " %s\n", "-------------------------------------" ) ;
         printf ( " %s\n", "les matchs de demi finale sont : " ) ;
         printf ( " %s\n", "-------------------------------------" ) ;

       } ;
       if( I == 1) {
         ;
         printf ( " %s\n", "-------------------------------------" ) ;
         printf ( " %s\n", "le match de la finale est : " ) ;
         printf ( " %s\n", "-------------------------------------" ) ;

       } ;
       /** Ecriture d'une structure */
       _Struct_Temp1 = *Info_ATss(M);
       printf ( " %s", _Struct_Temp1.Champ1 );
        a = 14 - (strlen(_Struct_Temp1.Champ1));                                    /** probleme r้gl้ **/
         for ( k = 1 ; k <=a ; k++)
         {
             printf ("%s" , " ");
         }
       printf ( " %s", "    vs         " );
       printf ( " %s\n", _Struct_Temp1.Champ2 ) ;
       if( Fg_ATss ( M ) != NULL) {
         Enfiler_FATss ( F , Fg_ATss ( M ) );
       } ;
       if( Fd_ATss ( M ) != NULL)   {
         Enfiler_FATss ( F , Fd_ATss ( M ) );
       } ;
       I  =  I + 1 ;

     }
    }
  /*--------------------- ACTION : Classement ------------------*/
  void Classement (Typevect_V32s *V)
    {

      /** Corps du module **/
     Aff_element_V32s ( *V , 1   , "BRESIL" ) ;
     Aff_element_V32s ( *V , 2   , "BELGIQUE" ) ;
     Aff_element_V32s ( *V , 3   , "FRANCE" ) ;
     Aff_element_V32s ( *V , 4   , "ARGENTINE" ) ;
     Aff_element_V32s ( *V , 5   , "ANGLETERE" ) ;
     Aff_element_V32s ( *V , 6   , "ESPAGNE" ) ;
     Aff_element_V32s ( *V , 7   , "PORTUGAL" ) ;
     Aff_element_V32s ( *V , 8   , "MEXIQUE" ) ;
     Aff_element_V32s ( *V , 9   , "PAYSBAS" ) ;
     Aff_element_V32s ( *V , 10   , "DANEMARK" ) ;
     Aff_element_V32s ( *V , 11   , "ALLEMAGNE" ) ;
     Aff_element_V32s ( *V , 12   , "URUGUAY" ) ;
     Aff_element_V32s ( *V , 13   , "SUISSE" ) ;
     Aff_element_V32s ( *V , 14   , "ETAT-UNIS" ) ;
     Aff_element_V32s ( *V , 15   , "CROATIE" ) ;
     Aff_element_V32s ( *V , 16   , "SENEGAL" ) ;
     Aff_element_V32s ( *V , 17   , "IRAN" ) ;
     Aff_element_V32s ( *V , 18   , "JAPAN" ) ;
     Aff_element_V32s ( *V , 19   , "MAROC" ) ;
     Aff_element_V32s ( *V , 20   , "SERBIE" ) ;
     Aff_element_V32s ( *V , 21   , "POLOGNIE" ) ;
     Aff_element_V32s ( *V , 22   , "UKRANIE" ) ;
     Aff_element_V32s ( *V , 23   , "COREEDUSUD" ) ;
     Aff_element_V32s ( *V , 24   , "COSTARICA" ) ;
     Aff_element_V32s ( *V , 25   , "TINISIE" ) ;
     Aff_element_V32s ( *V , 26   , "CAMEROUN" ) ;
     Aff_element_V32s ( *V , 27   , "CANADA" ) ;
     Aff_element_V32s ( *V , 28   , "AUSTRALIE" ) ;
     Aff_element_V32s ( *V , 29   , "EQUADOR" ) ;
     Aff_element_V32s ( *V , 30   , "ARABIESAOUDITE" ) ;
     Aff_element_V32s ( *V , 31   , "QATAR" ) ;
     Aff_element_V32s ( *V , 32   , "GHANA" ) ;

    }
  /*--------------------- FONCTION : Qu_hasard ------------------*/
  /* cette fonction va gerer les finales selon le critere "par hasard" o๙ elle
      va choisir l'equipe qui gagne par hazard selon un nombre gerer aleatoirement */

  string255  Qu_hasard (Pointeur_ATss *A , Typestr_Tss *S1)
    {
      /** Variables locales **/
      string255  Qu_hasard2 ;
      Typestr_Tss S;
      string255 C;
      string255 C2;
      int E;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     Qu_hasard2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       E  =  Aleanombre(2 ) ;
       if( E == 0) {
         strcpy (C,   Struct1_Tss ( *S1  )) ;
         }
       else
         {
         strcpy (C,   Struct2_Tss ( *S1  )) ;

       } ;
       strcpy (Qu_hasard2,   C) ;
       }
     else
       {
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATss ( *A )->Champ1);
       strcpy(S->Champ2,   Info_ATss ( *A )->Champ2);
 ;
       _Px1 =  Fg_ATss ( *A ) ;
       Aff_struct1_Tss ( S  , Qu_hasard ( &_Px1, & *S1 ) ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Aff_struct2_Tss ( S  , Qu_hasard ( &_Px2, & *S1 ) ) ;
       Aff_info_ATss ( *A , S ) ;
       E  =  Aleanombre(2 ) ;
       if( E == 0) {
         strcpy (C2,   Struct1_Tss ( S  )) ;
         }
       else
         {
         strcpy (C2,   Struct2_Tss ( S  )) ;

       } ;
       strcpy (Qu_hasard2,   C2) ;

     } ;

     return Qu_hasard2 ;
    }
  /*--------------------- FONCTION : Rech ------------------*/
  int  Rech (Typevect_V32s *V , string255 *C)
    {
      /** Variables locales **/
      int  Rech2 ;
      int I;
      int Trouv;

      /** Corps du module **/
     I  =  1 ;
     Trouv  =  0 ;
     while( ( I != 33 ) && ( Trouv != 1 )) {
       if(strcmp( *C, Element_V32s ( *V , I   )) == 0 ) {
         ;
         Trouv  =  1 ;

       } ;
       I  =  I + 1 ;

     } ;
     Rech2  =  I ;

     return Rech2 ;
    }
  /*--------------------- FONCTION : Qu_favorite ------------------*/
  /* cette fonction va gerer les finales selon le critere "equipe favorite" o๙ elle
      va choisir l'equipe qui gagne เ partir de son classement de la FIFA */

  string255  Qu_favorite (Pointeur_ATss *A , Typevect_V32s *V , Typestr_Tss *S1)
    {
      /** Variables locales **/
      string255  Qu_favorite2 ;
      Typestr_Tss S;
      string255 C;
      string255 C2;
      string255 C3;
      int B;
      int F;
      string255 _Px1;
      string255 _Px2;
      Pointeur_ATss _Px3=NULL;
      Pointeur_ATss _Px4=NULL;
      string255 _Px5;
      string255 _Px6;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     C3 = malloc(255 * sizeof(char));
     _Px1 = malloc(255 * sizeof(char));
     _Px2 = malloc(255 * sizeof(char));
     _Px5 = malloc(255 * sizeof(char));
     _Px6 = malloc(255 * sizeof(char));
     Qu_favorite2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy(_Px1,  Struct1_Tss ( *S1  ) );
       B  =  Rech ( & *V , &_Px1) ;
       strcpy(_Px2,  Struct2_Tss ( *S1  ) );
       F  =  Rech ( & *V , &_Px2) ;
       if( B < F) {
         strcpy (C,   Struct1_Tss ( *S1  )) ;
         }
       else
         {
         strcpy (C,   Struct2_Tss ( *S1  )) ;

       } ;
       strcpy (Qu_favorite2,   C) ;
       }
     else
       {
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATss ( *A )->Champ1);
       strcpy(S->Champ2,   Info_ATss ( *A )->Champ2);
 ;
       _Px3 =  Fg_ATss ( *A ) ;
       Aff_struct1_Tss ( S  , Qu_favorite ( &_Px3, & *V , & *S1 ) ) ;
       _Px4 =  Fd_ATss ( *A ) ;
       Aff_struct2_Tss ( S  , Qu_favorite ( &_Px4, & *V , & *S1 ) ) ;
       Aff_info_ATss ( *A , S ) ;
       strcpy(_Px5,  Struct1_Tss ( S  ) );
       B  =  Rech ( & *V , &_Px5) ;
       strcpy(_Px6,  Struct2_Tss ( S  ) );
       F  =  Rech ( & *V , &_Px6) ;
       if( B < F) {
         strcpy (C2,   Struct1_Tss ( S  )) ;
         }
       else
         {
         strcpy (C2,   Struct2_Tss ( S  )) ;

       } ;
       strcpy (Qu_favorite2,   C2) ;

     } ;

     return Qu_favorite2 ;
    }
  /*--------------------- FONCTION : Search ------------------*/
  /* cette fonction va chercher et recupirer le nombre des points des equipes */

  int  Search (string255 *C , Typevect_V8_4Tsi *T)
    {
      /** Variables locales **/
      int  Search2 ;
      string255 C1;
      int I;
      int J;
      int K;
      Typestr_Tsi W;

      /** Corps du module **/
     C1 = malloc(255 * sizeof(char));
     W = malloc(sizeof(Type_Tsi));
     W->Champ1 = malloc(255 * sizeof(char));
     for( I  =  1 ;I <=  8 ; ++I){
       for( J  =  1 ;J <=  4 ; ++J){
      /* Affectation globale de structure */
         strcpy(W->Champ1,   Element_V8_4Tsi ( *T , I , J   )->Champ1);
         W->Champ2 =   Element_V8_4Tsi ( *T , I , J   )->Champ2;
 ;
         strcpy (C1,   Struct1_Tsi ( W  )) ;
         if(strcmp( *C, C1) == 0 ) {
           K  =  Struct2_Tsi ( W  ) ;

         } ;

       } ;

     } ;
     Search2  =  K;
     return Search2 ;
    }
  /*--------------------- FONCTION : Cr_phase1 ------------------*/
  /* cette fonction va gerer les finales selon le critere "les resultats de la phase 1"
      o๙ elle va choisir l'equipe qui gagne เ partir de ses resultats dans la premier phase
     (l'equipe qui a plus de points gagne) */

  string255  Cr_phase1 (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T)
    {
      /** Variables locales **/
      string255  Cr_phase12 ;
      Typestr_Tss S;
      string255 C1;
      string255 C2;
      string255 C;
      int X;
      int Y;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     Cr_phase12 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy (C1,   Struct1_Tss ( *S1  )) ;
       strcpy (C2,   Struct2_Tss ( *S1  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       if( X <= Y) {
         strcpy (C,   C2) ;
         }
       else
         {
         strcpy (C,   C1) ;

       } ;
       strcpy (Cr_phase12,   C) ;
       }
     else
       {
       _Px1 =  Fg_ATss ( *A ) ;
       Aff_struct1_Tss ( S  , Cr_phase1 ( &_Px1, & *S1 , & *T ) ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Aff_struct2_Tss ( S  , Cr_phase1 ( &_Px2, & *S1 , & *T ) ) ;
       Aff_info_ATss ( *A , S ) ;
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATss ( *A )->Champ1);
       strcpy(S->Champ2,   Info_ATss ( *A )->Champ2);
 ;
       strcpy (C1,   Struct1_Tss ( S  )) ;
       strcpy (C2,   Struct2_Tss ( S  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       if( X <= Y) {
         strcpy (C,   C2) ;
         }
       else
         {
         strcpy (C,   C1) ;

       } ;
       strcpy (Cr_phase12,   C) ;

     } ;

     return Cr_phase12 ;
    }
  /*--------------------- ACTION : phase1_prec ------------------*/
  /* cette fonction va gerer les finales selon deux criteres
      (les resultats de la phase 1 + ceux des ้tapes pr้c้dentes de la phase 2)
      o๙ elle va choisir l'equipe qui gagne selon ses points dans la phase 1 et aussi ... */

  void Phase1_prec (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T , string255 *C , int *E)
    {
      /** Variables locales **/
      Typestr_Tss S;
      string255 C1;
      string255 C2;
      int X;
      int Y;
      int M;
      int N;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy (C1,   Struct1_Tss ( *S1  )) ;
       strcpy (C2,   Struct2_Tss ( *S1  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       if( X <= Y) {
         strcpy (*C,   C2) ;
         X  =  Y - X ;
         }
       else
         {
         strcpy (*C,   C1) ;
         X  =  X - Y ;

       } ;
       *E  =  X ;
       }
     else
       {
       _Px1 =  Fg_ATss ( *A ) ;
       Phase1_prec ( &_Px1, & *S1 , & *T , & C1 , & M ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Phase1_prec ( &_Px2, & *S1 , & *T , & C2 , & N ) ;
       Aff_struct1_Tss ( S  , C1 ) ;
       Aff_struct2_Tss ( S  , C2 ) ;
       Aff_info_ATss ( *A , S ) ;
       if( M <= N) {
         strcpy (*C,   C2) ;
         X  =  N - M ;
         }
       else
         {
         strcpy (*C,   C1) ;
         X  =  M - N ;

       } ;
       *E  =  X ;

     } ;

    }
  /*--------------------- FONCTION : Fav_phase1 ------------------*/
  string255  Fav_phase1 (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V32s *V , Typevect_V8_4Tsi *T)
    {
      /** Variables locales **/
      string255  Fav_phase12 ;
      Typestr_Tss S;
      string255 C1;
      string255 C2;
      string255 C;
      int X;
      int Y;
      int B;
      int F;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;
      string255 _Px3;
      string255 _Px4;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     _Px3 = malloc(255 * sizeof(char));
     _Px4 = malloc(255 * sizeof(char));
     Fav_phase12 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy (C1,   Struct1_Tss ( *S1  )) ;
       strcpy (C2,   Struct2_Tss ( *S1  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       B  =  Rech ( & *V , & C1 ) ;
       F  =  Rech ( & *V , & C2 ) ;
       B  =  B - X ;
       F  =  F - Y ;
       if( B < F) {
         strcpy (C,   C1) ;
         }
       else
         {
         strcpy (C,   C2) ;

       } ;
       strcpy (Fav_phase12,   C) ;
       }
     else
       {
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATss ( *A )->Champ1);
       strcpy(S->Champ2,   Info_ATss ( *A )->Champ2);
 ;
       _Px1 =  Fg_ATss ( *A ) ;
       Aff_struct1_Tss ( S  , Fav_phase1 ( &_Px1, & *S1 , & *V , & *T ) ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Aff_struct2_Tss ( S  , Fav_phase1 ( &_Px2, & *S1 , & *V , & *T ) ) ;
       Aff_info_ATss ( *A , S ) ;
       strcpy (C1,   Struct1_Tss ( S  )) ;
       strcpy (C2,   Struct2_Tss ( S  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       strcpy(_Px3,  Struct1_Tss ( S  ) );
       B  =  Rech ( & *V , &_Px3) ;
       strcpy(_Px4,  Struct2_Tss ( S  ) );
       F  =  Rech ( & *V , &_Px4) ;
       B  =  B - X ;
       F  =  F - Y ;
       if( B < F) {
         strcpy (C,   Struct1_Tss ( S  )) ;
         }
       else
         {
         strcpy (C,   Struct2_Tss ( S  )) ;

       } ;
       strcpy (Fav_phase12,   C) ;

     } ;

     return Fav_phase12 ;
    }
  /*--------------------- ACTION : phase1_prec_fav ------------------*/
  /* cette fonction va gerer les finales selon trois criteres */

  /* (les resultats de la phase 1 + ceux des ้tapes pr้c้dentes de la phase 2 + equipe favorite)*/

  void Phase1_prec_fav (Pointeur_ATss *A , Typestr_Tss *S1 , Typevect_V8_4Tsi *T , string255 *C , int *E)
    {
      /** Variables locales **/
      Typestr_Tss S;
      string255 C1;
      string255 C2;
      int X;
      int Y;
      int M;
      int N;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy (C1,   Struct1_Tss ( *S1  )) ;
       strcpy (C2,   Struct2_Tss ( *S1  )) ;
       X  =  Search ( & C1 , & *T ) ;
       Y  =  Search ( & C2 , & *T ) ;
       M  =  Rech ( & V , & C1 ) ;
       N  =  Rech ( & V , & C2 ) ;
       X  =  X - M ;
       Y  =  Y - N ;
       if( X <= Y) {
         strcpy (*C,   C2) ;
         X  =  Y - X ;
         }
       else
         {
         strcpy (*C,   C1) ;
         X  =  X - Y ;

       } ;
       *E  =  X ;
       }
     else
       {
       _Px1 =  Fg_ATss ( *A ) ;
       Phase1_prec ( &_Px1, & *S1 , & *T , & C1 , & M ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Phase1_prec ( &_Px2, & *S1 , & *T , & C2 , & N ) ;
       Aff_struct1_Tss ( S  , C1 ) ;
       Aff_struct2_Tss ( S  , C2 ) ;
       Aff_info_ATss ( *A , S ) ;
       Y  =  Rech ( & V , & C1 ) ;
       X  =  Rech ( & V , & C2 ) ;
       M  =  M - X ;
       N  =  N - Y ;
       if( M <= N) {
         strcpy (*C,   C2) ;
         M  =  N - M ;
         }
       else
         {
         strcpy (*C,   C1) ;
         M  =  M - N ;

       } ;
       *E  =  M ;

     } ;

    }
  /*--------------------- FONCTION : Cr_alphabet ------------------*/
  /* cette fonction va gerer les finales selon le critere "alphabet" o๙ elle
      va choisir l'equipe qui gagne เ partir de l'equipe qui a moins de nombre de caractere
      dans son nom */

  string255  Cr_alphabet (Pointeur_ATss *A , Typestr_Tss *S1)
    {
      /** Variables locales **/
      string255  Cr_alphabet2 ;
      Typestr_Tss S;
      string255 C1;
      string255 C2;
      string255 C;
      Pointeur_ATss _Px1=NULL;
      Pointeur_ATss _Px2=NULL;

      /** Corps du module **/
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     C1 = malloc(255 * sizeof(char));
     C2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     Cr_alphabet2 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
     strcpy((*S1)->Champ1,   Info_ATss ( *A )->Champ1);
     strcpy((*S1)->Champ2,   Info_ATss ( *A )->Champ2);
 ;
     if( ( ( Fg_ATss ( *A ) == NULL ) && ( Fd_ATss ( *A ) == NULL ) )) {
       strcpy (C1,   Struct1_Tss ( *S1  )) ;
       strcpy (C2,   Struct2_Tss ( *S1  )) ;
       if(strlen( C1) < strlen(C2)  ) {
         strcpy (C,   C1) ;
         }
       else
         {
         strcpy (C,   C2) ;

       } ;
       strcpy (Cr_alphabet2,   C) ;
       }
     else
       {
       _Px1 =  Fg_ATss ( *A ) ;
       Aff_struct1_Tss ( S  , Cr_alphabet ( &_Px1, & *S1 ) ) ;
       _Px2 =  Fd_ATss ( *A ) ;
       Aff_struct2_Tss ( S  , Cr_alphabet ( &_Px2, & *S1 ) ) ;
       Aff_info_ATss ( *A , S ) ;
      /* Affectation globale de structure */
       strcpy(S->Champ1,   Info_ATss ( *A )->Champ1);
       strcpy(S->Champ2,   Info_ATss ( *A )->Champ2);
 ;
       strcpy (C1,   Struct1_Tss ( S  )) ;
       strcpy (C2,   Struct2_Tss ( S  )) ;
       if(strlen( C1) > strlen(C2)  ) {                                        /** probleme r้gl้ **/
         strcpy (C,   C2) ;
         }
       else
         {
         strcpy (C,   C1) ;

       } ;
       strcpy (Cr_alphabet2,   C) ;

     } ;

     return Cr_alphabet2 ;
    }
  /*--------------------- FONCTION : Qualif ------------------*/
  /* cette fonction va aider เ choisir le critere qui va etre utiliser dans la
      deuxieme phase */

  string255  Qualif (int *Critere)
    {
      /** Variables locales **/
      string255  Qualif2 ;
      string255 C;
      Typestr_Tsi S;
      int E;

      /** Corps du module **/
     C = malloc(255 * sizeof(char));
     S = malloc(sizeof(Type_Tsi));
     S->Champ1 = malloc(255 * sizeof(char));
     Qualif2 = malloc(255 * sizeof(char));
     printf("\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
     printf("\n\t\xBA   criters du 2eme phase   \xBA");
     printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
     printf("\n\n[1] Traiter selon le hasard ");
     printf("\n[2] Traiter selon l'equipe favorite ");
     printf("\n[3] Traiter selon les resultats de la 1ere phase ");
     printf("\n[4] Traiter selon les resultats de la 1ere phase ainsi que le resultat des etapes precedentes ");
     printf("\n[5] Traiter selon l'equipe favorite ainsi que les resultats de la 1ere phase ");
     printf("\n[6] Traiter selon l'equipe favorite ainsi que les resultats de la 1ere phase ainsi que le resultat des etapes precedentes ");
     printf("\n[7] Traiter selon le nom de l'equipe (le plus court) ");
     printf("\n\nVeuillez indiquer votre choix : ");
     scanf ( " %d", &*Critere ) ;
     if( *Critere == 1) {
       strcpy (C,   Qu_hasard ( & A , & S1 )) ;
       }
     else
       {
       if( *Critere == 2) {
         strcpy (C,   Qu_favorite ( & A , & V , & S1 )) ;
         }
       else
         {
         if( *Critere == 3) {
           strcpy (C,   Cr_phase1 ( & A , & S1 , & Tab2 )) ;
           }
         else
           {
           if( *Critere == 4) {
             Phase1_prec ( & A , & S1 , & Tab2 , & C , & E ) ;
             }
           else
             {
             if( *Critere == 5) {
               strcpy (C,   Fav_phase1 ( & A , & S1 , & V , & Tab2 )) ;
               }
             else
               {
               if( *Critere == 6) {
                  Phase1_prec_fav ( & A , & S1 , & Tab2 , & C , & E ) ;
                 }
               else
                 {
                 if( *Critere == 7) {
                  strcpy (C,   Cr_alphabet ( & A , & S1 )) ;
                   }
                 else
                   {
                   printf ( " %s", "critere non defini " ) ;

                 } ;

               } ;

             } ;

           } ;

         } ;

       } ;

     } ;
     strcpy (Qualif2,   C);
     return Qualif2 ;
    }
    /*------------------------ les modules de l'interface --------------------*/
    void gotoxy(int x, int y)
    {
        COORD c;
        c. X=x;
        c. Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    }
    int setcolor(int ForgC)
    {
        WORD wColor;
        HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
        {
            wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
            SetConsoleTextAttribute(hStdOut, wColor);
        }
        return;
    }
    int color(int couleurDuTexte, int couleurDeFond)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
    }
     void nom ()
    {
 printf("\nษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
 printf("\nบ          Annee Universitaire                      2021 / 2022                บ");
 printf("\nฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
 printf("\nบTTTTTTTTTTTTTTTTTTTTTTTPPPPPPPPPPPPPPPPP        ZZZZZZZZZZZZZZZZZZZ           บ");
 printf("\nบT:::::::::::::::::::::TP::::::::::::::::P       Z:::::::::::::::::Z           บ");
 printf("\nบT:::::::::::::::::::::TP::::::PPPPPP:::::P      Z:::::::::::::::::Z           บ");
 printf("\nบT:::::TT:::::::TT:::::TPP:::::P     P:::::P     Z:::ZZZZZZZZ:::::Z            บ");
 printf("\nบTTTTTT  T:::::T  TTTTTT  P::::P     P:::::P     ZZZZZ     Z:::::Z             บ");
 printf("\nบ       T:::::T          P::::P     P:::::P             Z:::::Z                บ");
 printf("\nบ        T:::::T          P::::PPPPPP:::::P             Z:::::Z                บ");
 printf("\nบ        T:::::T          P:::::::::::::PP             Z:::::Z                 บ");
 printf("\nบ        T:::::T          P::::PPPPPPPPP              Z:::::Z                  บ");
 printf("\nบ        T:::::T          P::::P                     Z:::::Z                   บ");
 printf("\nบ        T:::::T          P::::P                    Z:::::Z                    บ");
 printf("\nบ        T:::::T          P::::P                 ZZZ:::::Z     ZZZZZ           บ");
 printf("\nบ      TT:::::::TT      PP::::::PP               Z::::::ZZZZZZZZ:::Z           บ");
 printf("\nบ      T:::::::::T      P::::::::P               Z:::::::::::::::::Z           บ");
 printf("\nบ      T:::::::::T      P::::::::P               Z:::::::::::::::::Z           บ");
 printf("\nบ      TTTTTTTTTTT      PPPPPPPPPP               ZZZZZZZZZZZZZZZZZZZ           บ");
 printf("\nบ                                                                              บ");
 printf("\nบ                                                                              บ");
 printf("\nบEEEEEEEEEEEEEEEEEEEEEE   SSSSSSSSSSSSSSS IIIIIIIIII                           บ");
 printf("\nบE::::::::::::::::::::E SS:::::::::::::::SI::::::::I                           บ");
 printf("\nบE::::::::::::::::::::ES:::::SSSSSS::::::SI::::::::I                           บ");
 printf("\nบEE::::::EEEEEEEEE::::ES:::::S     SSSSSSSII::::::II                           บ");
 printf("\nบ E:::::E       EEEEEES:::::S              I::::I                              บ");
 printf("\nบ  E:::::E             S:::::S              I::::I                             บ");
 printf("\nบ  E::::::EEEEEEEEEE    S::::SSSS           I::::I                             บ");
 printf("\nบ  E:::::::::::::::E     SS::::::SSSSS      I::::I                             บ");
 printf("\nบ  E:::::::::::::::E       SSS::::::::SS    I::::I                             บ");
 printf("\nบ  E::::::EEEEEEEEEE          SSSSSS::::S   I::::I                             บ");
 printf("\nบ  E:::::E                         S:::::S  I::::I                             บ");
 printf("\nบ  E:::::E       EEEEEE            S:::::S  I::::I                             บ");
 printf("\nบEE::::::EEEEEEEE:::::ESSSSSSS     S:::::SII::::::II                           บ");
 printf("\nบE::::::::::::::::::::ES::::::SSSSSS:::::SI::::::::I                           บ");
 printf("\nบE::::::::::::::::::::ES:::::::::::::::SS I::::::::I                           บ");
 printf("\nบEEEEEEEEEEEEEEEEEEEEEE SSSSSSSSSSSSSSS   IIIIIIIIII                           บ");
 printf("\nบ                                                                              บ");
 printf("\nฬออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
 printf("\nบ Cree par :                                                                   บ");
 printf("\nบ    * CHERGUELAINE OUSSAMA         1CPG10      lo_cherguelaine@esi.dz         บ");
 printf("\nบ    * SOLTANI MOHAMED ELAMINE       1CPG10      lm_soltani@esi.dz              บ");
 printf("\nบ                                                                              บ");
 printf("\nศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ");
    }
    /*----------------------------------------------------------------------*/


  int main(int argc, char *argv[])
    {
     /*----------------------------------------*/
     color(4,10);
     system("cls");
     color(0,10);
     gotoxy(10,2); printf(" bienvenue a : ");
     color(4,10);
     gotoxy(20,7); printf("$$       $$   $$$$$$   $$$$$$$   $$        $$$$$$$       $$$$$$   $$    $$  $$$$$$$  ");
     gotoxy(20,8); printf("$$   $   $$  $$    $$  $$    $$  $$        $$    $$     $$    $$  $$    $$  $$    $$ ");
     gotoxy(20,9); printf("$$  $$$  $$  $$    $$  $$    $$  $$        $$    $$     $$        $$    $$  $$    $$ ");
     gotoxy(20,10); printf("$$ $$ $$ $$  $$    $$  $$$$$$$   $$        $$    $$     $$        $$    $$  $$$$$$$  ");
     gotoxy(20,11); printf("$$$$   $$$$  $$    $$  $$    $$  $$        $$    $$     $$        $$    $$  $$       ");
     gotoxy(20,12); printf("$$$     $$$  $$    $$  $$    $$  $$        $$    $$     $$    $$  $$    $$  $$       ");
     gotoxy(20,13); printf("$$       $$   $$$$$$   $$    $$  $$$$$$$$  $$$$$$$       $$$$$$    $$$$$$   $$       ");
     gotoxy(20,18); printf("                    $$$$$$    $$$$$$  $$$$$$$$   $$$$$$    $$$$$$                ");
     gotoxy(20,19); printf("                   $$    $$  $$    $$    $$     $$    $$  $$    $$               ");
     gotoxy(20,20); printf("                   $$    $$  $$    $$    $$     $$    $$  $$    $$               ");
     gotoxy(20,21); printf("                   $$    $$  $$$$$$$$    $$     $$$$$$$$  $$$$$$$                ");
     gotoxy(20,22); printf("                   $$    $$  $$    $$    $$     $$    $$  $$    $$               ");
     gotoxy(20,23); printf("                   $$ $$ $$  $$    $$    $$     $$    $$  $$    $$               ");
     gotoxy(20,24); printf("                    $$$$$$   $$    $$    $$     $$    $$  $$    $$               ");
     gotoxy(20,25); printf("                        $$$                                                      ");
     gotoxy(20,30); printf("                        $$$$$$    $$$$$$    $$$$$$    $$$$$$       ");
     gotoxy(20,31); printf("                      $$    $$  $$$   $$  $$    $$  $$    $$       ");
     gotoxy(20,32); printf("                            $$  $$$$  $$        $$        $$       ");
     gotoxy(20,33); printf("                       $$$$$$   $$ $$ $$    $$$$$$    $$$$$$       ");
     gotoxy(20,34); printf("                      $$        $$  $$$$  $$        $$             ");
     gotoxy(20,35); printf("                      $$        $$   $$$  $$        $$             ");
     gotoxy(20,36); printf("                      $$$$$$$$   $$$$$$   $$$$$$$$  $$$$$$$$       ");
     color(0,7);
     printf("\n\n\n");
     printf(" cliquez sur n'importe quel bouton pour passer aux eliminatoires ");
     getch ();
     system("cls||clear");
     color(0,11);
     system("cls");
     /*----------------------------------------*/
     L = malloc(8 * sizeof(Pointeur_LTss));
     int _Izw3;for (_Izw3=0; _Izw3<8; ++_Izw3)
       L[_Izw3] = malloc( sizeof(Pointeur_LTss ));
     Tab2 = malloc(8*4 * sizeof(Typestr_Tsi));
     int _Izw4;for (_Izw4=0; _Izw4<8*4; ++_Izw4)
       Tab2[_Izw4] = malloc( sizeof(Type_Tsi ));
     int _Izw5;for (_Izw5=0; _Izw5<8*4; ++_Izw5){
       Tab2[_Izw5]->Champ1= malloc(255 * sizeof(char));}
     Sa = malloc(sizeof(Type_Tsi));
     Sa->Champ1 = malloc(255 * sizeof(char));
     V1 = malloc(8 * 255  * sizeof(char));
     int _Izw6;for (_Izw6=0; _Izw6<8; ++_Izw6)
       V1[_Izw6]= malloc(255 * sizeof(char));
     V2 = malloc(8 * 255  * sizeof(char));
     int _Izw7;for (_Izw7=0; _Izw7<8; ++_Izw7)
       V2[_Izw7]= malloc(255 * sizeof(char));
     V = malloc(32 * 255  * sizeof(char));
     int _Izw8;for (_Izw8=0; _Izw8<32; ++_Izw8)
       V[_Izw8]= malloc(255 * sizeof(char));
     T = malloc(8 * sizeof(Typestr_Tss));
     int _Izw9;for (_Izw9=0; _Izw9<8; ++_Izw9)
       T[_Izw9] = malloc( sizeof(Type_Tss ));
     int _Izw10;for (_Izw10=0; _Izw10<8; ++_Izw10){
       T[_Izw10]->Champ2= malloc(255 * sizeof(char));}
     C1 = malloc(sizeof(Type_Tss));
     C1->Champ1 = malloc(255 * sizeof(char));
     C1->Champ2 = malloc(255 * sizeof(char));
     S = malloc(sizeof(Type_Tss));
     S->Champ1 = malloc(255 * sizeof(char));
     S->Champ2 = malloc(255 * sizeof(char));
     S1 = malloc(sizeof(Type_Tss));
     S1->Champ1 = malloc(255 * sizeof(char));
     S1->Champ2 = malloc(255 * sizeof(char));
     C = malloc(255 * sizeof(char));
     T1 = malloc(8 * sizeof(Typestr_Tss));
     int _Izw11;for (_Izw11=0; _Izw11<8; ++_Izw11)
       T1[_Izw11] = malloc( sizeof(Type_Tss ));
     int _Izw12;for (_Izw12=0; _Izw12<8; ++_Izw12){
       T1[_Izw12]->Champ2= malloc(255 * sizeof(char));}
     Remp_equipe ( & Tab2 ) ;
     Creation ( & Tab2 , & L ) ;
     Affichage_matchs ( & L , & Tab2 ) ;
     printf("-----------------------------------------------------\n");
     Qualification ( & Critere ) ;
     Affichage_points ( & Tab2 ) ;
     Remp_qualifie ( & Tab2 , & V1 , & V2 ) ;
     Affich_qualifie ( & V1 , & V2 ) ;
     printf(" cliquez sur n'importe quel bouton pour passer aux finales ");
     getch ();
     system("cls||clear");
      /* Affectation globale de vecteur */
     int _Izw1;
     for (_Izw1= 0 ;_Izw1<=7;_Izw1++){
       strcpy( (*(T + _Izw1))->Champ1 , (*(  Tab ( & V1 , & V2 ) + _Izw1))->Champ1);
       strcpy( (*(T + _Izw1))->Champ2 , (*(  Tab ( & V1 , & V2 ) + _Izw1))->Champ2);}
 ;
     _Px1 =  3 ;
     A  =  Creer ( &_Px1) ;
     _Px2 =  1 ;
     _Px3 =  8 ;
     Affecter ( & A , & T , &_Px2, &_Px3) ;
     Classement ( & V ) ;
     strcpy (C,   Qualif ( & Critere )) ;
     Matchs ( & A ) ;
     printf ( " %s", "le vinqueur est ---- : " );
     printf ( " %s \n", C ) ;
     printf("\n \n");
     nom ();

      system("PAUSE");
      return 0;
    }
