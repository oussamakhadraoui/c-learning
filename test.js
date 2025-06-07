const fs = require('fs')
const readline = require('readline')

async function processLineByLine() {
  const fileStream = fs.createReadStream('a.txt')

  const rl = readline.createInterface({
    input: fileStream,
    crlfDelay: Infinity,
  })

  let result = 0// BigInt to handle very large numbers

  for await (const line of rl) {
    let firstDigit =""
    let lastDigit=""

    for (let i = 0; i < line.length; i++) {
      if (/\d/.test(line[i])) {
        firstDigit = line[i]
        break
      }
    }

    for (let i = line.length - 1; i >= 0; i--) {
      if (/\d/.test(line[i])) {
        lastDigit = line[i]
        break
      }
    }

    if (firstDigit !== -1 && lastDigit !== -1) {
      result += parseInt(firstDigit + lastDigit+"")
    }
  }

  console.log(`Result: ${result}`)
}

processLineByLine().catch((err) => {
  console.error('Error:', err)
})
