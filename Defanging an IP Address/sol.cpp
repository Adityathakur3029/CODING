class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        string defanged="";
        while(address[i]!='\0')
        {
            if(address[i]=='.')
            {
                defanged+="[.]";
            }
            else
                defanged+=address[i];
            i++;
        }
        return defanged;
    }
};
