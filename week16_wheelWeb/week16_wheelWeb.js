function setup(){//設定,只做1次
  createCanvas(400,200);
}
let start=0, v=0, x=0;//v是旋轉的速度
function mousePressed(){
  v = random(1);
}
function draw(){//畫,每秒畫60次
  background(128);
  if(v > 0.001){//速度還可以轉動
    start += v;//位置、速度、加速度  (位置 會加上 速度)
    v *= 0.99;//磨擦力,會讓速度變慢, 位置、速度、加速度  (速度 會加上 加速度)
    
    x += v*2;//另外一個會移動的方塊,來玩(夜市)推推樂
  }
  rect(x, 150, 50,50);
  fill(255); text( start, 200,150); text( v, 200, 170);
  for(let i=0; i<24; i++){
    let shift=i*PI/12;
    if(i%3==0){ fill(0); }
    if(i%3==1){ fill(255,255,0); }
    if(i%3==2){ fill(255); }
    if(i==0) { fill(255,128,0);}
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }
}
