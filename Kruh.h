#ifndef KRUH_H
#define KRUH_H


class Kruh
{
    public:
        Kruh(double x_in, double y_in, double r_in);
        virtual ~Kruh();
        void vypisInfo() const;
        double obsah();
        double obvod();
        bool leziUvnitr(double bx_in, double by_in);

    protected:

    private:
        double x,y,r, bx, by;
};

#endif // KRUH_H
