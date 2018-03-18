#include <iostream>

#include <iomanip>
#include <string>

using namespace std;

class Box{
    double l,w,h;

  public:
      Box(double lv,double wv,double hv)
      :l(lv),w(wv),h(hv){}
      Box():l(1.0),w(1.0),h(1.0){}

      double volume()
      {
          return l*w*h;
      }

      double getLength() const{return l;}
      double getWidth() const{return w;}
      double getHeight() const{return h;}

      friend ostream & operator <<(ostream& stream, const Box& box);

};

ostream& operator <<(ostream& stream, const Box& box)
{
    cout<<"\nBox:("<<box.l<<","<<box.w<<","<<box.h<<")\n";
    return stream;
}

class Carton : public Box{
    private :
      string material;
    public:
        Carton (const string desc ="cardboard"):material(desc){}

        void showDetails()
        {
            cout<<"\nMaterial:"<<material<<endl;
            cout<<"Length:"<<getLength()<<endl;
            cout<<"Width:"<<getWidth()<<endl;
            cout<<"Height:"<<getHeight()<<endl;
        }

        double CartonVolume()
        {return getLength()*getHeight()*getWidth();}
};

int main()
{
    Box b(12.1,12.2,12.3);

    cout<<b;

    cout<<"\nVolume="<<b.volume();

    Carton cB;
    cout<<"\nCarton Box\n";

    cB.showDetails();

    cout<<"\nCarton Volume:"<<cB.CartonVolume()<<endl;

    return 0;
}
