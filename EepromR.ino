#define CS 5
#define SK 4 
#define Di 3 
#define Do 2 
void setup() {
  pinMode(CS, OUTPUT);
  pinMode(SK, OUTPUT);
  pinMode(Di, OUTPUT);
  pinMode(Do, INPUT);
  digitalWrite(SK, 0);
  digitalWrite(Di, 0);
  digitalWrite(CS, 0);
  Serial.begin(9600);
  while (!Serial) {
    ;
  }

  
  int data0[16] =  {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0};
  int data1[16] =  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0};
  int data2[16] =  {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0};
  int Adress0[8] =  {0,0,0,0,0,0,0,1};
  int Adress2[8] = {1,0,0,0,0,1,0,1};
    //WDS();WEN();
//    READ(Adress2);
//    //ERAL();
//  WRITE(Adress1,data1);
//    READ(Adress1);
//    READ(Adress2);
//  READ(Adress0); READ(Adress1); READ(Adress2);
//  WRITE(Adress0,data0);delay(100);WRITE(Adress1,data1);delay(100);WRITE(Adress2,data2);
//  READ(Adress0); READ(Adress1); READ(Adress2);
//  digitalWrite(SK, 0);
//  digitalWrite(Di, 0);
//  digitalWrite(CS, 0);
}
int Adress1[8] = {0,0,0,0,1,0,0,1};
void loop() {
      READ(Adress1);
      delay(5000);
}
void ERAL()
{
  
  int code[] = {0,0};
  int adrss[] = {1,0,0,0,0,0,0,0};
  Serial.println("Start Erase all...");
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(adrss);
  EndConnectionW();
  Serial.println("Erase all end");
}
void ERASE(int adss[])
{
  int code[] = {1,1};
  Serial.println("Start Erase...");
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(adss);
  EndConnectionW();
  Serial.println("Erase end");
}
void READ(int adss[])
{
  int code[] = {1,0};
  Serial.println("Start read...");
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(adss);
  for (int i=0; i<8;i++)
    {Serial.print(adss[i]);}
  Serial.print(" => ");
  int d[16];
  for (int i=0; i<16;i++)
  {
    digitalWrite(SK, 1);
    dly();
    d[i]=digitalRead(Do);
    dly();
    digitalWrite(SK, 0);
    dly();
  }
  EndConnction();
  for (int i=0; i<16;i++)
    Serial.print(d[i]);
  Serial.println();
  Serial.println("Read end");
  
}
void WEN()
{
  Serial.println("Start write enable...");
  int code[] = {0,0};
  int ads[] = {1,1,0,0,0,0,0,0};
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(ads);
  dly();
  EndConnction();
  Serial.println();
  Serial.println("Write enabled");
}
void WDS()
{
  Serial.println("Start write disable...");
  int code[2] = {0,0};
  int ads[8] = {0,0,0,0,0,0,0,0};
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(ads);
  EndConnction();
  Serial.println();
  Serial.println("Write disabled");
}
void WRITE(int adrs[], int datas[]) 
{
  int code[] = {0,1};
  Serial.println("Start write...");
  BeginConnection();
  OpDecoder(code);
  AdressDecoder(adrs);
  DataDecoder(datas);
  EndConnectionW();
  Serial.println("Write done");
}
void BeginConnection() 
{
  for(int i=0;i<5;i++)
  {
    pulse();
  }
  digitalWrite(CS, 1);
  pulse();
  digitalWrite(Di, 1);
  pulse();
}
void EndConnction()
{
  digitalWrite(CS, 0);
  pulse();
  digitalWrite(CS, 1);
  pulse();
  pulse();
  pulse();
  digitalWrite(CS, 0);
}
void OpDecoder(int opcode[]) 
{
  digitalWrite(Di, opcode[0]);
  pulse();
  digitalWrite(Di, opcode[1]);
  pulse();
}
void dly() 
{
  delay(10);
}
void DataDecoder(int datas[16]) 
{
  for (int i = 0;i<16;i++)
  {
    digitalWrite(Di, datas[i]);
    pulse();
  }
}
void AdressDecoder(int adrss[8]) 
{
  for (int i = 0;i<8;i++)
  {
    digitalWrite(Di, adrss[i]);
    pulse();
  }
}
void pulse()
{
  dly();
  digitalWrite(SK, 1);
  dly();
  digitalWrite(SK, 0);
  dly();
}
void EndConnectionW()
{
  digitalWrite(CS,0);
  pulse();
  digitalWrite(CS,1);
//  for (int i = 0; i < 5; i++)
//  {
//    pulse();
//  }
//  delay(5);
//  digitalWrite(CS,0);  
}
