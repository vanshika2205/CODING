console.log("this is tutorial on loops")

let a=1;

for (let i = 0; i < 100; i++) {
    console.log(a+i);
    
}

let obj = {
    name : "harry",
    role: "programmer",
    company: "microsoft"
}

for (const key in obj) {
    // if(Object.hasownproperty.call(obj,key)){
    const element = obj[key];
    console.log(key,element)
    } 
// }

for(const c of "harry"){
    console.log(c)
}

let v=0;
while(v<6){
    console.log(v)
    v++;
}

let l = 0;
do{
    console.log(l)
    l++;
}while(l<6);
