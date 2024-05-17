class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //take a string for minute
      /*  vector<int>minutes ;

        for(int i=0 ; i<timePoints.size() ; i++) {
            string part = timePoints[i] ;

            int hour = stoi(part.substr(0,2)) ;
            int min = stoi(part.substr(3,2)) ;

            int mint = (hour*60+min) ;

            minutes.push_back(mint) ;

        }

        sort(minutes.begin() , minutes.end()) ;

        int mini = INT_MAX ;

        for(int i=0 ; i<minutes.size()-1 ; i++) {
            int diff = minutes[i+1] - minutes[i] ;
            mini = min(mini,diff) ;
        }

        int lastdiff = (minutes[0]+1440) - minutes[minutes.size()-1] ;
        mini = min(mini , lastdiff) ;

        return mini ;*/


        //minutes caluculation

        vector<int>minutes ; // take an array for inserting all the minutes data 

        for(int i=0 ; i<timePoints.size() ; i++) {

            string calc = timePoints[i] ; // assign every index in a string for calculation the minutes

            //cakculation
            int hour = stoi(calc.substr(0,2))  ;
            int mint = stoi(calc.substr(3,2)) ;
            int totalminutes = (hour*60)+mint ;

            minutes.push_back(totalminutes) ; // all minutes data insert in this minutes vector

        }

        //sort the array for calculating differnce easily
        sort(minutes.begin() , minutes.end()) ;

        //difference calculation

        int diff = 0 ;
        int mini = INT_MAX ; 

        for(int i=0 ; i<minutes.size() ; i++) {

           if(i<minutes.size()-1) {
                diff = minutes[i+1] - minutes[i] ;
                mini = min(mini , diff) ;
           }

           else { 
            // difference between last and fist element of this array and also one day or 24 hours is equal to 1440 minutes 
                int firstdiff1 = minutes[minutes.size()-1] - minutes[0] ; //first case is last- fist 
                int firstdiff2 = (minutes[0]+1440) - minutes[minutes.size()-1] ; // second case is first+1440 - last
                int lastdiff = min( firstdiff1 , firstdiff2) ;
                mini = min(mini , lastdiff) ;
           }

        }

        return mini ;





    }
};