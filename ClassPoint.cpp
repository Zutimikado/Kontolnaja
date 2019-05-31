#include "stdafx.h"
#include <iterator>
#include <vector>
#include <algorithm>

struct Festivals
{
	int all_tickets;
	int left_tickets;
	std::string Name;
	double rating;
	int voice_amount;
	long long Money;
};

class RockFestivals
{	
public:
	int T;
	Festivals *rock_music;
	RockFestivals()
	{
		for (int i = 0; i < T; i++)
		{
			rock_music[i].all_tickets = 0;
			rock_music[i].left_tickets = 0;
			rock_music[i].Name = "Bad Name";
			rock_music[i].Money = 0;
		}
	}

	Festivals operator[] (int index)
	{
		if (index < 0)
		{
			//throw BadIndex;
		}
		return rock_music[index];
	}

	void compare_name(int maxindex)
	{
		std::vector<std::string> rock_music;
		std::sort(rock_music.begin(), rock_music.end());
	}
	
};
/*bool operator < (Festivals const &c1, Festivals const &c2)
{
	return c1.Money < c2.Money;
}

/*std::istream& operator>> (std::istream &in, Festivals &festivals)
{
	in >> festivals.all_tickets;
	in >> festivals.left_tickets;
	in >> festivals.rating;
	in >> festivals.voice_amount;

	return in;
}*/