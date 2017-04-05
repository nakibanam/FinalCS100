#include <iostream>
#include <string>

using namespace std;

int main()
{

//printing the welcome message

cout << "Geometry App\n" << endl;
cout <<"#########################################\n" << endl;
cout << "Welcome to the Geometry App!      #\n" << endl;

cout << "I will let you calculate the area and perimeter of 2-D shapes and volume of 3-D shapes.\n" << endl;

cout << "*****************************************\n\n" << endl;
cout << "Please enter a choice from below:\n" << endl;

cout << "What are the dimensions of your shape?\n"<<endl;
cout << "1)2-D"<< endl;
cout << "2)3-D"<< endl;
cout << "3)Exit"<< endl;

//declaring some string variable

string a="a";
string b="b";
string c="c";
string d="d";
string e="e";
string f="f";
string g="g";

//declaring a value for pi;

double pi=3.14;

//declaring a variable to store the choice of the user

int choice;

cin >> choice;

//looping the condition so that the program only exits when when the choice is 3

while(choice!=3){

//conditions and executions if the user chooses 1

if (choice==1){
cout << "****************************************\n" <<endl;
cout << "You Picked 1." <<endl;
cout <<"1)2-D Shapes\n" <<endl;
cout << "What shape would you pick?"<<endl;

cout << "a)Circle\n";
cout << "b)Square\n";
cout << "c)Rectangle\n";
cout << "d)Trapezium\n";
cout << "e)Parallelogram\n";
cout << "f)Rhombus\n";
cout << "g)Triangle\n";


// asking user for a shape

cout << "Please pick a shape: ";

//storing the choice of shape onto a string variable

string choice_of_shape;
cin >> choice_of_shape;


if (choice_of_shape == a){

cout << "****************************************"<< endl;
cout << "You picked 1)a)Circle" << endl;

//asking the user for radius

double radius;

cout <<"Please enter the radius of the circle: "<< endl;
cin >> radius;

//declaring formula for perimieter and area for circle

double area_circle=(pi*radius*radius);
double circumference=(2*pi*radius);

//displaying results

cout << "Perimeter = 2 * pi * " << radius <<" = " << circumference<<" m"<< endl;
cout << "Area = pi * " << radius << " * " << radius << " = " <<area_circle<< " m^2"<< endl;

        }

else if (choice_of_shape == b){

cout << "****************************************"<< endl;
cout << "You picked 1)b)Square" << endl;

//asking the user for a side's length

double side;
cout <<"Please enter the length of one side of the square: "<< endl;
cin >> side;

//declaring formula for perimieter and area for square

double area_square=(side*side);
double p_of_sq=(side*4);

//displaying results

cout << "Perimeter = 4 * " << side <<" = " << p_of_sq<<" m"<< endl;
cout << "Area = "<<side<< " * "<< side << " = " <<area_square<< " m^2"<< endl;

}

else if (choice_of_shape == c){

cout << "****************************************"<< endl;
cout << "You picked 1)c)Rectangle" << endl;

//asking the user for a length and width

double length;
double width;

cout <<"Please enter the length of the rectangle: "<< endl;
cin >> length;
cout <<"Please enter the length of the rectangle: "<< endl;
cin >> width;

//declaring formula for perimieter and area for rectangle

double area_rect=(length*width);
double p_of_rect=((2*length)+(2*width));

//displaying results

cout << "Perimeter = 2 * " << length <<" + "<<"2 * "<< width<<" = " << p_of_rect<< " m"<< endl;
cout << "Area = "<<length<< " * "<< width << " = " <<area_rect<< " m^2"<< endl;

}
else if (choice_of_shape == d){

cout << "****************************************"<< endl;
cout << "You picked 1)d)Trapezium" << endl;

//asking the user for 4 lengths and height

double length1;
double length2;
double length3;
double length4;
double height;

cout <<"Please enter the 1st length of the trapezium "<< endl;
cin >> length1;
cout <<"Please enter the 2nd length of the trapezium: "<< endl;
cin >>length2;
cout <<"Please enter the height of the trapezium: "<< endl;
cin >> height;
cout <<"Please enter the 3rd length of the trapezium: "<< endl;
cin >> length3;
cout <<"Please enter the 4th length of the trapezium: "<< endl;
cin >> length4;


//declaring formula for perimieter and area for trapezium

double area_trap=((length1+length2)/2)*height;
double p_of_trap=length1+length2+length3+length4;

//displaying results

cout << "Perimeter = (" << length1 <<" + "<<length2<<" + "<<length3<<" + "<<length4<<") = " << p_of_trap<< " m"<< endl;
cout << "Area = (("<<length1<< " + "<< length2 <<")/2)"<< " * "<<height<< ") = " <<area_trap<< " m^2"<< endl;

}
else if (choice_of_shape == e){

cout << "****************************************"<< endl;
cout << "You picked 1)e)Parallelogram" << endl;

//asking the user for 2 lengths and the height

double a;
double b;
double h;

cout <<"Please enter the 1st length of the parallelogram: "<< endl;
cin >> a;

cout <<"Please enter the 2nd length of the parallelogram: "<< endl;
cin >> b;

cout <<"Please enter the height of the parallelogram: "<< endl;
cin >> h;

//declaring formula for perimieter and area for parallelogram

double area_para=(b*h);
double p_of_para=(2*(a+b));

//displaying results

cout << "Perimeter = 2 * (" << a <<" + "<<b<< ") = " << p_of_para<< " m"<< endl;
cout << "Area = "<<b<< " * "<< h << " = " <<area_para<< " m^2"<< endl;

}
else if (choice_of_shape == f){

cout << "****************************************"<< endl;
cout << "You picked 1)f)Rhombus" << endl;

//asking the user for 2 diagonals and the side

double p;
double q;
double o;

cout <<"Please enter the 1st diagonal length of the rhombus: "<< endl;
cin >> p;

cout <<"Please enter the 2nd diagonal length of the rhombus: "<< endl;
cin >> q;

cout <<"Please enter the side of the rhombus: "<< endl;
cin >> o;

//declaring formula for perimieter and area for rhombus

double area_rhom=(p*q)/2;
double p_of_rhom=(4*o);

//displaying results

cout << "Perimeter = 4 * " << o << " = " << p_of_rhom<< " m"<< endl;
cout << "Area = ("<<p<< " * "<< q << ")/2 = " <<area_rhom<< " m^2"<< endl;

}

else if (choice_of_shape == g){

cout << "****************************************"<< endl;
cout << "You picked 1)g)Triangle" << endl;

//asking the user for 3 bases and height

double base;
double ht;
double base2;
double base3;

cout <<"Please enter the base of the triangle: "<< endl;
cin >> base;

cout <<"Please enter the height of the triangle: "<< endl;
cin >> ht;

cout <<"Please enter the 2nd side of the triangle: "<< endl;
cin >> base2;

cout <<"Please enter the 3rd side of the triangle: "<< endl;
cin >>base3;

//declaring formula for perimieter and area for triangle

double area_tri=(base*ht)/2;
double p_of_tri=(base+base2+base3);

//displaying results

cout << "Perimeter = " << base << " + " << base2 << " + "<<base3<<" = "<<p_of_tri<< " m"<< endl;
cout << "Area = ("<<base<< " * "<< ht << ")/2 = " <<area_tri<< " m^2"<< endl;

}
    }

else if (choice==2){

cout << "****************************************\n" <<endl;
cout << "You Picked 2." <<endl;
cout <<"1)3-D Shapes\n" <<endl;
cout << "What shape would you pick?"<<endl;

cout << "a)Sphere\n";
cout << "b)Cube\n";
cout << "c)Cuboid\n";
cout << "d)Cylinder\n";
cout << "e)Pyramid\n";

string choice_vol_shapes;
cin >> choice_vol_shapes;

if (choice_vol_shapes == a){

    //asking the user for radius

    double rad;

    cout <<"Enter the radius for sphere: "<<endl;
    cin >>rad;

    //formula for volume of sphere

    double vol_sp=(4/3)*rad*rad*rad;

    cout<<"Volume = (4/3) * "<<rad<<" * "<<rad<<" * "<<rad<<" = "<<vol_sp<<" m^3"<<endl;
}

else if (choice_vol_shapes == b){

    //asking the user for oen side

    double l_side;

    cout <<"Enter the length of 1 side for cube: "<<endl;
    cin >>l_side;

    //formula for volume of cube

    double vol_cube=l_side*l_side*l_side;
    cout<<"Volume = "<<l_side<<" * "<<l_side<<" * "<<l_side<<" = "<<vol_cube<<" m^3"<<endl;
}


else if (choice_vol_shapes == c){

    //asking the user for 3 sides for cuboid

    double l1;
    double l2;
    double l3;

    cout <<"Enter the length of 1st side for cuboid: "<<endl;
    cin >>l1;

    cout <<"Enter the length of 2nd side for cuboid: "<<endl;
    cin >>l2;

    cout <<"Enter the length of 3rd side for cuboid: "<<endl;
    cin >>l3;


    //formula for volume of cuboid

    double vol_cuboid=l1*l2*l3;
    cout<<"Volume = "<<l1<<" * "<<l2<<" * "<<l3<<" = "<<vol_cuboid<<" m^3"<<endl;
}

else if (choice_vol_shapes == d){

    //asking the user for radius and height

    double radii;
    double htt;

    cout <<"Enter the radius for cylinder: "<<endl;
    cin >>radii;

    cout <<"Enter the height for cylinder: "<<endl;
    cin >>htt;


    //formula for volume of cylinder

    double vol_cylinder=pi*radii*radii*htt;
    cout<<"Volume = pi* "<<radii<<" ^2 "<<" * "<<htt<<" = "<<vol_cylinder<<" m^3"<<endl;
}

else if (choice_vol_shapes == e){

    //asking the user for length, width and height

    double len;
    double wid;
    double het;

    cout <<"Enter the length for pyramid: "<<endl;
    cin >>len;

    cout <<"Enter the width for pyramid: "<<endl;
    cin >>wid;

    cout <<"Enter the height for pyramid: "<<endl;
    cin >>het;

    //formula for volume of pyramid

    double vol_pyramid=(len*wid*het)/3;
    cout<<"Volume = ("<<len<<" * "<<wid<<" * "<< het<<")/3 = "<<vol_pyramid<<" m^3"<<endl;
}
}
cout <<endl;

        //printing the menu again

cout << "Geometry App\n" << endl;
cout <<"#########################################\n" << endl;
cout << "Welcome to the Geometry App!      #\n" << endl;

cout << "I will let you calculate the area and perimeter of 2-D shapes and volume of 3-D shapes.\n" << endl;

cout << "*****************************************\n\n" << endl;
cout << "Please enter a choice from below:\n" << endl;

cout << "What are the dimensions of your shape?\n"<<endl;
cout << "1)2-D"<< endl;
cout << "2)3-D"<< endl;
cout << "3)Exit"<< endl;

cin >>choice;
}

cout <<"Your choice:3"<<endl;
cout <<"You picked 3)Exit."<<endl;
cout <<"#########################################"<<endl;
cout <<"#                  #                    #"<<endl;
cout <<"#"<<endl;
cout <<"#      See you again!      #"<<endl;
cout <<"#      Goodbye!            #"<<endl;
cout <<"#                  #                    #"<<endl;
cout <<"#########################################"<<endl;


return 0;
}
