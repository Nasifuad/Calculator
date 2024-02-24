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