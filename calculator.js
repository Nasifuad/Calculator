// document.addEventListener("DOMContentLoaded", function() {
//     const display = document.getElementById("display");

//     window.display_button = function(input){
//         display.value += input;
//     };

//     window.clear = function(){
//         display.value = "";
//     };

//     window.calculate = function(){
//         try{
//             display.value = eval(display.value);
//         }
//         catch(error){
//             display.value = "Error";
//         }
//     };
// });

function display_button(input){
    let x= input
    
    let display=document.getElementById("display")
    display.value+=x
}
function clear1(){
        let display1=document.getElementById("display")
        display1.value="";
}
function calculate(){
    let display1=document.getElementById("display");
    display1.value=eval(display1.value)
}