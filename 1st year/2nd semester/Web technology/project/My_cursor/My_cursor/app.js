let MyCursor = document.getElementById("my-cursor");

function updatePosition(e){
    MyCursor.style.top = e.pageY + "px";
    MyCursor.style.left = e.pageX + "px";
}

document.addEventListener("mousemove", e => {
    updatePosition(e);
})