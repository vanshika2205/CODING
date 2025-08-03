// let obj ={
//     a: 1,
//     b: "harry",
// }

// console.log(obj);

// let animal = {
//     eats:true
// };

// let rabbit = {
//     jumps: true
// };

// rabbit.__proto__ = animal; // sets rabbit.[[Prototype]] = animal


class Animal {
    constructor(name) {
        this.name = name;
        console.log("object is created....")
}

eats() {
    // super.eats();
    console.log("kha rha hoon")

}
    jumps() {
        console.log("kood rha hoon")
    }

}

class Lion extends Animal {
    constructor(name) {
        super(name); // calls the constructor of the parent class
        console.log("Lion object is created....")
    }

    eats() {
        super.eats(); // calls the eats method of the parent class
        console.log("Lion kha rha hoon")
    }

    // jumps() {
    //     super.jumps(); // calls the jumps method of the parent class
    //     console.log("Lion kood rha hoon")
    // }
}


let a = new Animal("bunny");
console.log(a)
let l = new Animal("shera");
console.log(l)

   