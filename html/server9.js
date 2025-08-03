const express = require('express')
const app = express()
const port = 3000

app.use(express.static('public'))


app.get('/', (req, res) => {
  res.send('Hello World!')
})

app.get('/about', (req, res) => {
  res.send('Hello about!')
})

app.get('/contact', (req, res) => {
  res.send('Hello contact!')
})

app.get('/blog', (req, res) => {
  res.send('Hello blog!')
})

app.get('/blog/:slug/:secondslug', (req, res) => {

  res.send(`Hello ${req.params.slug} and ${req.params.secondslug}`)
})

// app.get('/blog/intro-to-python', (req, res) => {
//   res.send('Hello blog9!')
// })

// app.get('/blog/intro-to-java', (req, res) => {
//   res.send('Hello blog3!')
// })

// app.get('/blog/intro-to-javascript', (req, res) => {
//   res.send('Hello blog2!')
// })



app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}/`)
})