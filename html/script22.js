let a = prompt("enter first number")

let b = prompt("enter second number")

if (isNaN(a) || isNaN(b)) {
    throw SyntaxError("srry this is not allowed")
}

let sum= parseInt(a) + parseInt(b)

try{
    console.log("the sum is " , sum*x)

}catch(error){
    console.error("error aa gya bhai ");
}

finally{
    console.log("files are being closed and db connection is being closed");
}



// function main(){
//     let x=1;
// try{
//     console.log("the sum is " , sum*x)
//     return true;

// }catch(error){
//     console.error("error aa gya bhai ");
//     return false;
// }

// finally{
//     console.log("files are being closed and db connection is being closed");
// }
// }

// let c = main();

// IN CASE OF FUNCTION AND RETURN IF WE DONT WRITE FINALLY AND DIRECTLY WRITE CONSOLE LINE THEN IT DID NOT GET PRINTED