int led[9]={13,12,11,10,9,8,7,6,5};


void setup() {
  for(int i=0;i<9;i++)
  pinMode(led[i], OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(Serial.available()){
  int gelen = Serial.read(); 
  
  if(gelen=='1')digitalWrite(led[0], HIGH);             
  if(gelen=='2')digitalWrite(led[0], LOW);    
  if(gelen=='3')digitalWrite(led[1], HIGH);             
  if(gelen=='4')digitalWrite(led[1], LOW); 
  if(gelen=='5')digitalWrite(led[2], HIGH);             
  if(gelen=='6')digitalWrite(led[2], LOW); 
  if(gelen=='7')digitalWrite(led[3], HIGH);             
  if(gelen=='8')digitalWrite(led[3], LOW); 
  if(gelen=='9')digitalWrite(led[4], HIGH);             
  if(gelen=='a')digitalWrite(led[4], LOW);  
  if(gelen=='b')digitalWrite(led[5], HIGH);
  if(gelen=='c')digitalWrite(led[5], LOW); 
  if(gelen=='d')digitalWrite(led[6], HIGH); 
  if(gelen=='e')digitalWrite(led[6], LOW);    
  if(gelen=='f')digitalWrite(led[7], HIGH); 
  if(gelen=='g')digitalWrite(led[7], LOW); 
  if(gelen=='h')digitalWrite(led[8], HIGH); 
  if(gelen=='i')digitalWrite(led[8], LOW); 
  }   

}
