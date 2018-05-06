  /*Compare a and b
    /*If a is greater than b, Alice(A) gets 1 point
    /*If a is equal to b, no points are awarded
    /*If a is less than b, Bob(B) gets 1 point
    /*Print Alice and bob's comparison score as an array. Use array.join
     */

function solve(a0, a1, a2, b0, b1, b2) {
//define variables
var A = 0;  //A=Alice's comparison score
var B= 0;   //B= Bob's comparison score

//if else statement that compares a0 and b0
      if (a0 > b0) {
            A += 1;
       }
      else if (a0 < b0){
            B += 1;
       }

//if else statement that compares a1 and b1
      if (a1 > b1) {
           A += 1;
       }
       else if (a1 < b1){
            B += 1;
        }
//if else statement that compares a2 and b2
       if (a2 > b2) {
             A += 1;
      }
      else if (a2 < b2){
            B += 1;
        }

var scores = [ A, B ];  //Array that contains Alice's and Bob's scores

console.log(scores.join());   //Returns the comparison scores

    }