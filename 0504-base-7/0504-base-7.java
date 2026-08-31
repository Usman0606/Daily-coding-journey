class Solution {
    public String convertToBase7(int num) {
        StringBuilder sb=new StringBuilder();
        boolean isNegative=false;
        if(num==0)
        {
            return "0";
        }
        if(num<0)
        {
            isNegative=true;
        }
        int absnum=Math.abs(num);
        while(absnum>0)
        {
            sb.append(absnum%7);
            absnum=absnum/7;
        }
        if(isNegative)
        {
            sb.append("-");
        }
        return sb.reverse().toString();
    }
}