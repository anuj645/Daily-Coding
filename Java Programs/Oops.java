class Student{
    String name;
    int age;
    public void getInfo(){
        System.out.println("This is name of first student " + this.name);        
        System.out.println("This is age of first student " + this.age);        

    }
   

}


public class Oops {
    public static void main (String [] args){
            Student s1 =  new Student();
        s1.name =  "anuj";
        s1.age = 21;
        s1.getInfo();
        Student s2 = new Student();
        s2.name = "anuj";
        s2.age = 21;
        s2.getInfo();
    //     S

    }
 }