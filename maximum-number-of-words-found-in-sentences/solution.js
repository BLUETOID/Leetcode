 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    let count = 0;
    let max  = 0;
    for(let i =0;i<sentences.length;i++){
        let current = sentences[i];
    }
        current = current.split(" ");
        count = current.length;
        max=Math.max(count,max);

    return max;
};
