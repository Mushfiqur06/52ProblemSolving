const findTheDiviser =(nums)=>{
    let result = [];
    for(let i = 1; i <= nums; i++){
        if(nums % i === 0){
            result.push(i)
        }
    }
    return result;
}

console.log(findTheDiviser(23))