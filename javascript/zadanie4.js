var fs = require('fs')

var file = fs.readFileSync('dane.txt').toString('utf8')
var dates = file.split('\r\n')

if (fs.existsSync('wynik.txt'))
    fs.unlinkSync('wynik.txt')

dates.forEach(date => {
    if (String(date) === "Tuesday")
        fs.appendFileSync('wynik.txt', date + '\r\n')
});