var fs = require('fs')

var file = fs.readFileSync('dane.txt').toString('utf8')
var dates = file.split('\r\n')
var ile = 0

if (fs.existsSync('wynik.txt'))
    fs.unlinkSync('wynik.txt')

dates.forEach(date => {
    if (String(date) === "Friday")
        ile++
})

fs.appendFileSync('wynik.txt', ile + '\r\n')