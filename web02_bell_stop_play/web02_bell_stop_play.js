let player;
function setup(){
  createCanvas(400,200);
  player = loadSound("bell.mp3"); 
}//把 bell.mp3 放進來
function draw(){
  background(51,114,191);
}
function mousePressed(){//2種:play(),stop()
  if( player.isPlaying() ){
    player.stop();
  }else{
    player.play();
  }
}
