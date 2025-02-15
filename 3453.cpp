// 3453. Separate Squares I

class Solution {
public:
    double area(double y,vector<vector<int>>& a){
        double ab=0,aa=0;
        for (auto& i:a){
            int x=i[0];
            int yb=i[1];
            long long l=i[2];
            int yt=l+yb;
            if (y<=yb)ab+=l*l;
            else if (y>=yt) aa+=l*l;
            else{
                double p=(y-yb)*l;
                double q=l*l-p;
                ab+=q;
                aa+=p;
            }
        }
        return ab-aa;
    }
    double separateSquares(vector<vector<int>>& squares) {
        double h=0;
        for (auto& i:squares) h=max(h,1.0*i[1]+i[2]);
        double l=0;
        // double mid=l+(1.0*h-l)/2;
        double mid;
        double x=1e-5;
        while(h-l>x){
            mid=(h+l)/2;
            // cout<<mid<<endl;
            double ar=area(mid,squares);
            if (ar>0) l=mid;
            // else if (abs(ar)<1e-5) return mid;
            else h=mid;
        }
        return (h+l)/2.0;
    }
};