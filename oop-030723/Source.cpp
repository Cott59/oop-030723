#include<iostream>

class Plant:public Harvest {
public:
	
	Harvest ColorHarvest(Harvest){
		_ColorHarvest = Harvest::ColorHarvest();
	}

	void SizeHarvest() override {}

private:
	std::string _SizeHarvest;
	std::string _ColorHarvest;

};

class Harvest {
public:
	Harvest(std::string name) :_Name(name){}
	Harvest(std::string name, double weight) :Harvest(name) {
		_Weight = weight;
	}
	Harvest(std::string name, double weight, std::string color) : Harvest(name,weight) {
		_ColorHarvest = color;
	}

	virtual void SizeHarvest() {
		if (_Weight < 100)
			_SizeHarvest = "small";
		if (_Weight >= 100 && _Weight <= 500)
			_SizeHarvest = "middle";
		if (_Weight > 500)
			_SizeHarvest = "big";
	}

	std::string ColorHarvest() {
		return _ColorHarvest;
	}

private:
	std::string _Name;
	double _Weight = 0;
	std::string _ColorHarvest = "black";
	std::string _SizeHarvest;

};