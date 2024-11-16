// my_class.h
#ifndef WRESTLER_H // include guard
#define WRESTLER_H

#include <string>

    class Wrestler
    {
    private:
	std::string name;
	int weightClass;
	int teamId;
	int seed;
	int score;
	std::pair<int,int> record; // wins and losses
				   //
    public:
        Wrestler(const std::string& name, int weightClass, int teamId, int wins, int losses);

	void setSeed(int seed);
	void updateScore(int matchScore);

	int getSeed() const;
	int getScore() const;
	int getWins() const;
	int getLosses() const;
	int getRecordScore() const; // returns wins - losses
    };


#endif // WRESTLER_H
