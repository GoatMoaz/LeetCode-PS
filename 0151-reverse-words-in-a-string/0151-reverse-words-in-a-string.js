/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    s=s.split(" ");
    const ans=[];
    for(let i=s.length-1 ; i>=0 ; i--){
        if(s[i]!="")
            ans.push(s[i]);
    }
    return ans.join(" ");
};