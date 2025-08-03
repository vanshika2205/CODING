//  async function getData() {
//    return new Promise((resolve, reject) => {
//         setTimeout(() => {
//         resolve(455);
//         }, 2000);
//     })
// }

async function getData() {
    let x = await fetch("https://jsonplaceholder.typicode.com/todos/1");
    let data = await x.json();
    return data;
}

async function main(){
console.log("loading modules")

console.log("do something else")

console.log("load data")

let data = getData();

console.log(data);

console.log("process data")

console.log("task2")

}

main()

// data.then((v) => {
// console.log(data);

// console.log("process data")

// console.log("task2")

// })