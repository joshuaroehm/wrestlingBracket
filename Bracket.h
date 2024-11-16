// my_class.h
#ifndef BRACKET_H // include guard
#define BRACKET_H

    class Bracket
    {
    private:
	int weightClass;
	std::vector<Wrestler> competitors;
	std::vector<std::vector<int>> matches; 


    public:
        Bracket(int weightClass);

	void seedCompetitors(std::vector<Wrestler>& wrestlers);
	void enterMatchResult(int matchId, int winnerSeed);
	void displayBracket() const;
    };


#endif // BRACKET_H
