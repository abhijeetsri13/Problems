class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;
        for(long long i=0;i<matrix.size();i++)
        { 
            for(long long j=0;j<matrix[i].size(); j++)
            {
                if(matrix[i][j] ==0)
               {
                    //std::cout<<"Zero: -"<<std::endl;            
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        

        set<int>::iterator rowsiter=rows.begin();
        set<int>::iterator colsiter=cols.begin();
        for(;rowsiter!=rows.end(); rowsiter++)
        {
            std::cout<<"Rows: -" <<*rowsiter<<std::endl;
            for(int j=0;j<matrix[*rowsiter].size(); j++)
            {
                matrix[*rowsiter][j]=0;
            }
        }
        
                
        for(;colsiter!=cols.end(); colsiter++)
        {
            std::cout<<"Cols: -" <<*colsiter<<std::endl;
            for(int j=0;j<matrix.size(); j++)
            {
                matrix[j][*colsiter]=0;
            }
            
        }
        
    }
};
