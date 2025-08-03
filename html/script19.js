console.log("harry is a hacker")
console.log("rohan is a hacker")

setTimeout(() => {
    console.log("this is a timeout")
}, 1000)

setTimeout(() => {
    console.log("this is a timeout2")
}, 1000)

console.log("this is a normal function")

const fn = (arg) => {
    console.log("nothing")
}

const callback =(arg,fn) => {
    console.log(arg)
    fn()
}

const loadScript = (src, callback) => {
    let sc = document.createElement("script");
    sc.src = src;
    sc.onload = callback("harry" ,fn);
    document.head.append(sc)
    }

    loadScript("https://cdnjs.cloudflare.com/ajax/libs/jquery/3.5.1/jquery.min.js", callback);
