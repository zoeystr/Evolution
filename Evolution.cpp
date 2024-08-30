#include <iostream>
#include <string>

using namespace std;

class Plant
{
public:
	string photosynthesis;
	string multicellular;
	Plant(string a, string b);
};

Plant::Plant(string a, string b)
{
	photosynthesis = a;
	multicellular = b;
}

class Algae
{
public: 
	void replicate()
	{
		cout << "   can perform replication" << endl;
	}
	void aquatic(string aquatic)
	{
		Aquatic = aquatic;
		cout << Aquatic << endl;
	}
private:
	string Aquatic;
};

class Mosses : public Algae
{
public:
	void tertiary()
	{
		cout << "   live on land" << endl;
	}
	void leaves()
	{
		cout << "   have leaves" << endl;
	}
};

class Fern : public Mosses
{
public:
	void roots()
	{
		cout << "   have roots" << endl;
	}
	void stems(string stems)
	{
		Stems = stems;
		cout << Stems << endl;
	}
	void spores(string spores)
	{
		Spores = spores;
		cout << Spores << endl;
	}
private:
	string Stems;
	string Spores;
};

class Tree : public Fern
{
public:
	void germinate(string germinate)
	{
		Germinate = germinate;
		cout << Germinate << endl;
	}
private:
	string Germinate;
};

int main()
{
	Plant plant1("   uses photosynthesis", "   is multicellular");
	Plant plant2("   use photosynthesis", "   are multicellular");
	Algae algae;
	Mosses moss;
	Fern fern;
	Tree tree;
	int x = 0;
	while (x != 5) {
		cout << "Choose a plant:\n"
			"   Press \"1\" for Algae\n"
			"   Press \"2\" for Moss\n"
			"   Press \"3\" for Fern\n"
			"   Press \"4\" for Tree\n"
			"   Press \"5\" to exit" << endl;
		cin >> x;
		cout << endl;
		if (x == 1)
		{
			cout << "Algae..." << endl;
			cout << plant1.photosynthesis << endl;
			cout << plant1.multicellular << endl;
			algae.replicate();
			algae.aquatic("   lives underwater");
			cout << endl;
		}
		else if (x == 2)
		{
			cout << "Mosses..." << endl;
			cout << plant2.photosynthesis << endl;
			cout << plant2.multicellular << endl;
			moss.tertiary();
			moss.leaves();
			moss.replicate();
			cout << endl;
		}
		else if (x == 3)
		{
			cout << "Ferns..." << endl;
			cout << plant2.photosynthesis << endl;
			cout << plant2.multicellular << endl;
			fern.leaves();
			fern.roots();
			fern.stems("   have stems");
			fern.spores("   emit spores");
			cout << endl;
		}
		else if (x == 4)
		{
			cout << "Trees..." << endl;
			cout << plant2.photosynthesis << endl;
			cout << plant2.multicellular << endl;
			tree.roots();
			tree.germinate("   can germinate from seeds");
			cout << endl;
		}
	}
	return 0;
}