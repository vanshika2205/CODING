const express = require('express')
const app = express()
const port = 3000

app.set('view engine', 'ejs');

app.get('/', (req, res) => {
  let siteName = "adidas"
  let searchText = "search now"
  let arr =[1,54,65]
  res.render("index", { siteName:siteName, searchText:searchText,arr })
})

app.get('/blog/:slug' ,(req, res) => {
  let blogTitle = "adidas why and when"
  let blogContent = "adidas is a brand that is loved by many."
  res.render("blogpost", { blogTitle: blogTitle, blogContent: blogContent })
})

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`)
})
