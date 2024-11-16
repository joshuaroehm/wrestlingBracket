// my_class.h
#ifndef TEAM_H // include guard
#define TEAM_H

#include <string>
#include <vector> 
#include "Wrestler.h"



    class Team
    {
    private:
	int teamId;
	std::string name;
	std::vector<Wrestler> wrestlers;
	int teamScore;


    public:
        Team(int teamId, const std::string& name);

	void addWrestler(const Wrestler& wrestler);
	void updateTeamScore(double score);

	double getTeamScore() const;
	const std::vector<Wrestler>& getWrestlers() const;
    };


#endif // TEAM_H
