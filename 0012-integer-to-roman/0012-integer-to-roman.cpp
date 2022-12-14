class Solution {
public:
    string intToRoman(int num) {
        
        // string ans="";
        // while(num>0){
        //     string ch;
        //     int x;
        //     int n;
        //     if(num>=1000){
        //        x=1000;
        //        ch='M';
        //     }
        //     else if(num>=900&&num<=999){
        //        x=900;
        //        ch="CM";
        //     }
        //     else if(num>=500){
        //        x=500;
        //        ch='D';
        //     }
        //     else if(num>=400&&num<=499){
        //        x=400;
        //        ch="CD";
        //     }
        //      else if(num>=100){
        //        x=100;
        //        ch='C';
        //     }
        //     else if(num>=90&&num<=99){
        //        x=90;
        //        ch="XC";
        //     }
        //      else if(num>=50){
        //        x=50;
        //        ch='L';
        //     } else if(num>=40&&num<=49){
        //        x=40;
        //        ch="XL";
        //     }
        //      else if(num>=10){
        //        x=10;
        //        ch='X';
        //     }
        //      else if(num==9){
        //        x=9;
        //        ch="IX";
        //     }
        //     else if(num>=5){
        //        x=5;
        //         ch='V';
        //     }
        //      else if(num==4){
        //        x=4;
        //        ch="IV";
        //     }
        //     else{
        //         x=1;
        //         ch='I';
        //     }
        //    n=num/x;
        //    num=num%x;
        //    for(int i=0;i<n;i++){
        //       ans=ans+ch;
        //    }
        // }
        // return ans;
string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};