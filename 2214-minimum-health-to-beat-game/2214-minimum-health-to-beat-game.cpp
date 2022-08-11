class Solution 
{
public:
    long long minimumHealth(vector<int>& damage, int armor) 
    {
        long long int damage_taken=0;
        int max_damage=INT_MIN;
        
        for(int d:damage)
        {
            max_damage=max(d,max_damage);
            damage_taken=damage_taken+d;
        }
        damage_taken=damage_taken-min(max_damage,armor);
        return damage_taken+1;    //adding one coz health must be greater than 0 at all times
    }
};
