const firstAndLastDigitsSum = (num) => {
    let numsArr = num.toString().split('');
    return parseInt(numsArr[0]) + parseInt(numsArr[numsArr.length - 1])
}

firstAndLastDigitsSum(56789)