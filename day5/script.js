
const text = `
Kal jo bhi hua...

Uska mujhe sach mein bohot afsos hai.

Tum un logon mein se ho jo hamesha meri success chahte rahe.

2 semesters mein tumne har mumkin koshish ki ke main parhun,
apne dreams achieve karun,
aur kabhi give up na karun.

Ho sakta hai us waqt main tumhari baat na samajh saki...

Lekin aaj mujhe ehsaas hai
ke tumhari har baat meri bhalai ke liye thi.

Agar meri kisi baat ne tumhara dil dukhaya...

To...

I am really sorry.

Main sirf itna chahti hoon...

Please don't let this friendship end.

❤️`;

let i = 0;

document.getElementById("giftBox").onclick = function(){

this.style.display="none";

document.getElementById("letter").style.display="block";

document.getElementById("music").play();

typeWriter();

}

function typeWriter(){

if(i < text.length){

document.getElementById("typing").innerHTML += text.charAt(i);

i++;

setTimeout(typeWriter,40);

}

}

for(let j=0;j<50;j++){

let h=document.createElement("div");

h.className="heart";

h.innerHTML="❤️";

h.style.left=Math.random()*100+"vw";

h.style.fontSize=(15+Math.random()*25)+"px";

h.style.animationDuration=(4+Math.random()*5)+"s";

document.body.appendChild(h);

}

document.getElementById("forgiveBtn").onclick=function(){

for(let i=0;i<200;i++){

let c=document.createElement("div");

c.innerHTML="🎉";

c.style.position="absolute";

c.style.left=Math.random()*100+"vw";

c.style.top=Math.random()*100+"vh";

c.style.fontSize="25px";

document.body.appendChild(c);

setTimeout(()=>c.remove(),3000);

}

document.getElementById("finalMessage").style.display="block";

this.style.display="none";

}