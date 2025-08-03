function nice(name){
    console.log("hey " + name + " you are nice!")
     console.log("hey " + name + " you are good!")
      console.log("hey " + name + " your tshirt is nice!")
       console.log("hey " + name + " your course is good too!")
}

nice("rohan")

function sum(a,b,c=4){
    // console.log(a+b)
    return a + b + c
}

 result = sum(3,4)
 result2 = sum(5,6,2)

 console.log("the sum of the numbers is :" , result),
 console.log("the sum of the numbers is :" , result2)

 const func1 = (x)=>{
    console.log("i am an arrow function", x)
 }

 func1(34);
  func1(36);
   func1(84);