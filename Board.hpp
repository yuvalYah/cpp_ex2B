#include "Direction.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;
using std::string;

namespace ariel {
	
	class Board {
		private:
			unsigned int minI ,minJ ,maxI ,maxJ;
			unsigned int row, col;
			vector<vector<char>> board;

        public:
			Board():minI(std::numeric_limits<int>::max()),minJ(std::numeric_limits<int>::max())
				,maxI(0),maxJ(0),row(100),col(100){
				board.resize(row);
				for(unsigned int i = 0 ; i < row ; i++)
					board.at(i).resize(col,'_');
    		}
			void post(unsigned int,unsigned int, Direction,string const&);
            string read(unsigned int,unsigned int, Direction,unsigned int);
            void show();

		private:
			void Limits(unsigned int x ,unsigned int y , Direction d , unsigned int lens);
	};
};

