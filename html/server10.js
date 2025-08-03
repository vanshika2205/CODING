const express = require('express')

const blog = require('./routes/blog')


const app = express()
const port = 3000

app.use(express.static("public"))
app.use('/blog', blog)

app.get('/', (req, res) => {
    console.log("hey its a get request")
  res.send('Hello World!')
})

app.post('/', (req, res) => {
    console.log("hey its a post request")
  res.send('Hello World is post!')
})

app.put('/', (req, res) => {
    console.log("hey its a put request")
  res.send('Hello World is put!')
})

app.get('/', (req, res) => {
    console.log("hey its a index")
  res.sendFile('templates/index.html' , { root: __dirname })
})

app.get('/api', (req, res) => {
    
  res.json({a:1, b:2, c:3,d:5, name:["harry" , "rohan"]})
})

app.listen(port, () => {
 console.log(`Example app listening at http://localhost:${port}/`)
})
