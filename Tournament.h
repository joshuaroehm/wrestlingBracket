// my_class.h
#ifndef TOURNAMENT_H // include guard
#define TOURNAMENT_H

    class Tournament
    {
    private:
	std::vector<Team> teams;
	std::vector<Bracket> brackets;

    public:
        Tournament(const std::vector<Team>& teams);

	void seedAllBrackets();
	void runTournament();
	void displayResults() const;
    };


#endif /* TOURNAMENT_H */
