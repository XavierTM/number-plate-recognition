console.clear();

const express = require('express');
const morgan = require('morgan');

const app = express();

app.use(morgan('dev'))
app.use(express.json());

app.get('/is-registered', (req, res) => {
   const registered = req.query.number_plate === 'AEJ0766';
   res.send({ registered })
});

app.listen(8080, () => console.log('Server started'));