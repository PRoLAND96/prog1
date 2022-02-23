#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>

using namespace Graph_lib;

int main()
{
	try{

		Point t1{300,50};
		Simple_window win(t1, 1000, 800, "My window");
		win.wait_for 
		
		Lines grid;
		int x_sizte = 800; 
		int y_size = 800;
		for(int i=100; i<=x_size; i+=100){
			gridd.add(Point(i, 0), Point(i, y_size));
			gridd.add(Point(0, i), Point(x_size, i));
		}
		win.attach(grid);
		win.wait_for_button();




		Rectangle a1 {Point{0,0}, 100, 100};
    		win.attach(a1);

    		poly_rect.add(Point{0,0});
    		poly_rect.add(Point{100,0});
    		poly_rect.add(Point{100,100});
    		poly_rect.add(Point{0,100});
		a1.set_fill_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
		Rectangle (a2)  {Point{0,0}, 100, 100};
    		win.attach(a2);

    		poly_rect.add(Point{100,100});
    		poly_rect.add(Point{100,200});
    		poly_rect.add(Point{200,200});
    		poly_rect.add(Point{200,100});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
		Rectangle (a3)  {Point{0,0}, 100, 100};
    		win.attach(a3);

    		poly_rect.add(Point{200,200});
    		poly_rect.add(Point{300,200});
    		poly_rect.add(Point{300,300});
    		poly_rect.add(Point{200,300});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
		Rectangle (a4)  {Point{0,0}, 100, 100};
    		win.attach(a4);

    		poly_rect.add(Point{300,300});
    		poly_rect.add(Point{400,300});
    		poly_rect.add(Point{400,400});
    		poly_rect.add(Point{300,400});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
		Rectangle (a5)  {Point{0,0}, 100, 100};
    		win.attach(a5);

    		poly_rect.add(Point{400,400});
    		poly_rect.add(Point{400,500});
    		poly_rect.add(Point{500,500});
    		poly_rect.add(Point{500,400});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();


		Rectangle (a6)  {Point{0,0}, 100, 100};
    		win.attach(a6);

    		poly_rect.add(Point{500,500});
    		poly_rect.add(Point{600,500});
    		poly_rect.add(Point{600,600});
    		poly_rect.add(Point{500,600});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
    		
    		Rectangle (a7)  {Point{0,0}, 100, 100};
    		win.attach(a7);

    		poly_rect.add(Point{600,600});
    		poly_rect.add(Point{700,600});
    		poly_rect.add(Point{700,700});
    		poly_rect.add(Point{600,700});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();
    		
    		
    		Rectangle (a8)  {Point{0,0}, 100, 100};
    		win.attach(a8);

    		poly_rect.add(Point{700,700});
    		poly_rect.add(Point{700,800});
    		poly_rect.add(Point{800,800});
    		poly_rect.add(Point{800,700});
		poly_rect.set_color(Color::red);

    		win.attach(poly_rect);
    		win.set_label("Draw rectangle");
    		win.wait_for_button();

	}catch (exception & e){
		cerr << "exception: " e.what() << endl;
		return 1;
		
	}catch (...) {
		cerr << "exception\n"
		return 2;







}
