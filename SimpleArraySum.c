function simpleArraySum(ar) {
var total = 0; //defining the variable
    for (var i = 0; i < ar.length; i++){  //remember semi-colons
         total += ar[i];  //same as total = total + ar[i]
         }
    return (total);

}