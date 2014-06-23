
class image {
	
	public:
		image();
		~image();

		bool loadImage(string const&);

	private:
		Mat  	img;
		int 	width;
		int 	height;

};