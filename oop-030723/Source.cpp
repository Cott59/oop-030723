#include<iostream>

class Plant {
public:
	Plant(const std::string SizePlant, const std::string ColorPlant, int number) {
		_SizePlant = SizePlant;
		_ColorPlant = ColorPlant;
		_Number_of_Fruits = number;
	}

	void PlantInfo() {
		std::cout << "SizePlant: " << _SizePlant << "\n";
		std::cout << "ColorPlant: " << _ColorPlant << "\n";
		std::cout << "Number_of_Fruits: "<<_Number_of_Fruits << "\n";

	}
	virtual Harvest harvest() = 0;
		
	int Get_Number_of_Fruits() {
		return _Number_of_Fruits;
	}
	void Set_Number_of_Fruits(int num) {
		_Number_of_Fruits = num;
	}


private:
	std::string _SizePlant="";
	std::string _ColorPlant="";
	int _Number_of_Fruits = 0;

};

class Harvest : public Plant {
public:
	Harvest(const std::string SizePlant, const std::string ColorPlant, int number, const std::string name) : Plant(SizePlant, ColorPlant, number), _NameFruits(name) {}
	Harvest(const std::string name) : _NameFruits(name){}


	void SetWeight(double num) {
		_Weight = num;
	}
	void SetColor(std::string color) {
		_ColorHarvest = color;
	}

	Harvest *harvest() override{
		int NumberFruits = Plant::Get_Number_of_Fruits();
		--NumberFruits;
		Plant::Set_Number_of_Fruits(NumberFruits);
		return new harvest("Red")
	}

	~Harvest()
	{

	}

	void HarvestInfo()const {
		std::cout << "NameFruits: " << _NameFruits << "\n";
		std::cout << "Weight: " << _Weight << "\n";
		std::cout << "ColorHarvest: " << _ColorHarvest << "\n";

	}

private:
	std::string _NameFruits = "";
	double _Weight = 0;
	std::string _ColorHarvest = "";


};


int main() {

	return 0;
}