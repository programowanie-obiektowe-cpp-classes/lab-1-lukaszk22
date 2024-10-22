class Wektor2D
{
    private:
        double x;
        double y;
    public:

    // Konstruktor domyślny
    Wektor2D(){
        x = 0.0;
        y = 0.0;
    }

    // Konstruktor nadający współrzędne
    Wektor2D(double x_in, double y_in){
        x = x_in;
        y = y_in;
    }

    // Setter wspolrzednej X
        void setX(double x_in){
            x = x_in;
        }

    // Setter wspolrzednej Y
        void setY(double y_in){
            y = y_in;
        }

    // Getter wspolrzednej X
        double getX() const {
            return x;
        }

    // Getter wspolrzednej Y
        double getY() const {
            return y;
        }

};

Wektor2D operator+(Wektor2D v1, Wektor2D v2){

    return {v1.getX()+v2.getX(), v1.getY()+v2.getY()};
}

double operator*(Wektor2D v1, Wektor2D v2){

    return {v1.getX()*v2.getX() + v1.getY()*v2.getY()};
}



