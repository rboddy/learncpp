const currentLesson = "7.7"

let numberRows = document.querySelectorAll(".lessontable-row-number");
let numbersArray = Array.from(numberRows);
for (let lessonNo in numbersArray) {
  if (numbersArray[lessonNo].innerText == currentLesson) {
    console.log(`You are on lesson number ${parseInt(lessonNo) + 1} out of ${numbersArray.length + 1}! That's ${Math.Round((parseInt(lessonNo) + 1) / (numbersArray.length + 1) * 100)}% of the way done! Keep going!`);
  }
}
