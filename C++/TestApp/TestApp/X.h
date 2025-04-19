
//Pragma once serve per dire al compilatore di includere quel file sono una volta per compilazione, anche se viene incluso in più file

#pragma once  
class X {
public:

	int mfpublic(int);

private: //usato solo dai membri della classe quindi non nel main
	int mfprivate(int x);

};
