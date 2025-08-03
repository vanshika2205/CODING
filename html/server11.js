const express = require('express')
const app = express()
const port = 3000
const blog = require('./routes/blog')
const fs = require("fs")

// app.use(express.static("public2"))

app.use('/blog',blog)

app.use((req, res, next) => {
    console.log(req.headers)
    req.harry = "harshit"
    fs.appendFileSync("logs.txt", `${Date.now()} is a ${req.method}\n`)
    console.log(`${Date.now()} is a ${req.method}`)
    next()
})

app.use((req, res, next) => {
    console.log('m2')
    next()
})

app.get('/', (req, res) => {
    res.send('Hello World!')
})

app.get('/about', (req, res) => {
    res.send('Hello about! + ' + req.harry)
})

app.get('/contact', (req, res) => {
    res.send('Hello contact!')
})

app.listen(port, () => {
    console.log(`Example app listening at http://localhost:${port}`)
})
