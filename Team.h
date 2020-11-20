#ifndef TEAM_H
#define TEAM_H

class Team
{
  private:
    string Name;
    string Coach_Name;
    string Home_City;
    bool Home_Status;
    int Score;
    int Timeout_Count;
  public:
    void setName(string);
    void setCoach(string);
    void setHomeCity(string);
    void setHomeStatus(bool);
    void setSctore(int);
    void setTimeoutCount(int);
};

#endif