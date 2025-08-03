let students = ["shubh" , "anjali", "sahil", "priya", "sachin" , "siddharth", "aviral", "sahil", "shubh", "ananya" ,"ankush"];

let houses = []

for (const student of students) {
    if (student.length<6){
        houses.push("gryffinder")

    }
    else if(student.length<8){
        houses.push("hufflepuff")
    }

    else if(student.length<10){
        houses.push("ravenclaw")
    }

    else{
        houses.push("slytherin")
    }


}

console.log(houses);
