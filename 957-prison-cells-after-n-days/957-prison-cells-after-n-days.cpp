//This pattern repeats for every 14 days, if we take out day 0 from the pattern
//Day 0 never repeats beacuse of corners allways become zero
//calculate cells for one day
//From here everything repeats
//Since I advanced by one day so i will subtract one day from N days
//The days needs to be calculated are (N - 1) % 14*

class Solution 
{

public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) 
    {
        if(N == 0) 
            return cells;
        
        prison(cells, 1);         //Prison cells for one day, The pattern repeats from day 1 - 14
        prison(cells, (N - 1) % 14);        //Simply day 14 = day 1, Day 0 never repeats because of corners  
        return cells;                               
    }
    void prison(vector<int>& cells, const int& N)
    {
        for(int i = 0; i < N; i++)  //for N days
        {
            vector<int> v(8,0);
            for(int i = 1; i < 7; i++)   //first and last will be zero because of no neighbours
                if(cells[i - 1] == cells[i + 1])
                    v[i] = 1;
                else v[i] = 0;
            cells = v;
        }
    }
};