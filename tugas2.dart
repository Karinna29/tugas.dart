class Ice_cream{
String nama;
String rasa;

//Konstruktor default
Ice_cream (this.nama, this.rasa);

//Method
void SayHelo() {
 print("nama ice cream ini ialah $nama dan memiliki rasa $rasa ") ;
    
    }

}

 class Kue extends Ice_cream {
 String ukuran ;

 Kue(String nama, String rasa, this.ukuran ) :super (nama,rasa) ;

 void SayKue() {
 print("nama kue ini adalah $nama dan memiliki rasa $rasa berukuran $ukuran") ;
    }

 }

 void main () {

 Kue kuel = Kue("Kukis", "Coklat", "Medium") ;
 kuel.SayKue ();

 Kue kue2 = Kue("Sus", "vanila", "Small") ;
 kue2.SayKue ();

 Kue kue3 = Kue("Tart", "Hazelnut", "Large" ) ;
 kue3.SayKue ();

 var Ice_creaml = Ice_cream("Gelato", "Taro") ;
 Ice_creaml.SayHelo () ;

 var Ice_cream2 = Ice_cream("Aice", "Semangka") ;
 Ice_cream2.SayHelo () ;


 }