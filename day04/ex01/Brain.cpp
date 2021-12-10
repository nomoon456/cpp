#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain Copy Constructor." << std::endl;
}

Brain & Brain::operator=(const Brain &other) {
	if (this != &other)
	{
		std::cout << "Brain Copy Assignment" << std::endl;
	}
	return *this;
}

/*int main(){
    string line = "test one two three.";
    string arr[4];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }
}
/*
void    Brain::setIdeas() {
    std::string id[100] = strtok("reflective historical promise yam wild psychotic toad clumsy brake obsequious night church bury distance party parsimonious weary receptive pretend exercise field direful sore clammy shake jog support sharp towering aromatic ethereal utter hallowed roomy calm creator spiffy wonder taboo abstracted regular fertile safe warlike nippy word sofa tease approval wriggle cuddly nonchalant sisters breakable punishment adjustment possess check transport dress irritating deer detailed black amazing aloof excuse channel grey soda domineering noisy hurried lace attraction wipe thread wheel boil terrify coherent dead repair quince health kill water insect eight general certain scratch creepy four nauseating table symptomatic sleet smelly babies", " ");
    for (int i = 0; i <= 100; i++) { 
        ideas[i] = strtok(NULL, " ");
    }
}*/

void    Brain::setIdeas() {
    std::string line = "reflective historical promise yam wild psychotic toad clumsy brake obsequious night church bury distance party parsimonious weary receptive pretend exercise field direful sore clammy shake jog support sharp towering aromatic ethereal utter hallowed roomy calm creator spiffy wonder taboo abstracted regular fertile safe warlike nippy word sofa tease approval wriggle cuddly nonchalant sisters breakable punishment adjustment possess check transport dress irritating deer detailed black amazing aloof excuse channel grey soda domineering noisy hurried lace attraction wipe thread wheel boil terrify coherent dead repair quince health kill water insect eight general certain scratch creepy four nauseating table symptomatic sleet smelly babies";
    int i = 0;
    std::stringstream ssin(line);
    while (ssin.good() && i < 100) {
        ssin >> ideas[i];
        //std::cout << ideas[i] << "et i: " << i << std::endl;
        i++;
    }
    //std::cout << "seg" << std::endl;
    for (i = 0; i < 100; i++) {
        std::cout << ideas[i];
    }
}