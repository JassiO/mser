
class point {

	public:
		point();
		point(point const&);
		point(double, double);
		~point();

		//getter
		double get_x() const;
		double get_y() const;

		//setter
		void set_x(double);
		void set_y(double);

	private:
		double	x;
		double	y;

};