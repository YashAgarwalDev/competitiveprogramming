// Base class
class vehicle {
    public:
    
       string brand = "Lamborghini";
       void honk(){
       
          cout << "Tutt, tuut! \n";
    }
};

//Deriverd class
class Car: public vehicle {
  public:
  
    string model = "Veneno";
    
    };
    
    int main() {
      Car mycar;
      mycar.honk();
      cout << mycar.brand + " " + mycar.model;
      return 0;
      
      }
