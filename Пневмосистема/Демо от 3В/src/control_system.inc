/*  ------------------------------------------------------
     Routine name:  control_system
     Description:   
     Project file:  Алгоритмы управления.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
int itmp1;
int itmp2;
int itmp3;
double tmp1;
double tmp2;
double tmp3;
double tmp4;
double tmp5;
double tmp6;
double tmp7;
char f;
char tmp_f_1;
char u_s;
char u_r;
ret = 0;

switch (action){
case f_Stop:{
};break;
case f_GetDeri:{

/* Index=369
   UID=369
   GeneratorClassName=TAperiodika1
   Name=Macro161.Macro155.Aperiodika6
   Type=Инерционное звено 1-го порядка */

control_systemv369_out_0_deri = (consts->control_systemv369_k_*locals->control_systemv336_out_0_-control_systemv369_out_0)/consts->control_systemv369_t_;

/* Index=370
   UID=370
   GeneratorClassName=TAperiodika1
   Name=Macro161.Macro155.Aperiodika7
   Type=Инерционное звено 1-го порядка */

control_systemv370_out_0_deri = (consts->control_systemv370_k_*state_vars->control_systemv335_out_2_-control_systemv370_out_0)/consts->control_systemv370_t_;

/* Index=371
   UID=371
   GeneratorClassName=TAperiodika1
   Name=Macro161.Macro155.Aperiodika8
   Type=Инерционное звено 1-го порядка */

control_systemv371_out_0_deri = (consts->control_systemv371_k_*state_vars->control_systemv335_out_3_-control_systemv371_out_0)/consts->control_systemv371_t_;
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=321
   UID=321
   GeneratorClassName=TSignalReader
   Name=Macro160.Signal_Block22
   Type=Вход алгоритма */

state_vars->control_systemv321_out_0_ = dynamicmode_control;
state_vars->control_systemv321_out_1_ = staticmode_control;
state_vars->control_systemv321_out_2_ = manualmode_control;
state_vars->control_systemv321_out_3_ = staticmode_control;
state_vars->control_systemv321_out_4_ = dynamicmode_control;
state_vars->control_systemv321_out_5_ = manualmode_control;
state_vars->control_systemv321_out_6_ = manualmode_control;
state_vars->control_systemv321_out_7_ = staticmode_control;
state_vars->control_systemv321_out_8_ = dynamicmode_control;

/* Index=322
   UID=322
   GeneratorClassName=TORSrc
   Name=Macro160.Or10
   Type=Оператор ИЛИ */

locals->control_systemv322_out_0_ = state_vars->control_systemv321_out_1_ || state_vars->control_systemv321_out_2_;

/* Index=323
   UID=323
   GeneratorClassName=TTrigger_R
   Name=Macro160.Trigger_RS_1
   Type=RS-триггер с приоритетом по сбросу */

u_s = state_vars->control_systemv321_out_0_;
u_r = locals->control_systemv322_out_0_;
state_vars->control_systemv323_out_0_ = state_vars->control_systemv323state_;
if(u_s && u_r){
state_vars->control_systemv323_out_0_ = 0;
}else{
if(u_s && (!u_r)){
state_vars->control_systemv323_out_0_ = 1;
}else{
if(!(u_s) && u_r){
state_vars->control_systemv323_out_0_ = 0;
};
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
state_vars->control_systemv323state_ = state_vars->control_systemv323_out_0_;
};

/* Index=324
   UID=324
   GeneratorClassName=TORSrc
   Name=Macro160.Or11
   Type=Оператор ИЛИ */

locals->control_systemv324_out_0_ = state_vars->control_systemv321_out_4_ || state_vars->control_systemv321_out_5_;

/* Index=325
   UID=325
   GeneratorClassName=TTrigger_R
   Name=Macro160.Trigger_RS_2
   Type=RS-триггер с приоритетом по сбросу */

u_s = state_vars->control_systemv321_out_3_;
u_r = locals->control_systemv324_out_0_;
state_vars->control_systemv325_out_0_ = state_vars->control_systemv325state_;
if(u_s && u_r){
state_vars->control_systemv325_out_0_ = 0;
}else{
if(u_s && (!u_r)){
state_vars->control_systemv325_out_0_ = 1;
}else{
if(!(u_s) && u_r){
state_vars->control_systemv325_out_0_ = 0;
};
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
state_vars->control_systemv325state_ = state_vars->control_systemv325_out_0_;
};

/* Index=326
   UID=326
   GeneratorClassName=TORSrc
   Name=Macro160.Or12
   Type=Оператор ИЛИ */

locals->control_systemv326_out_0_ = state_vars->control_systemv321_out_7_ || state_vars->control_systemv321_out_8_;

/* Index=327
   UID=327
   GeneratorClassName=TTrigger_R
   Name=Macro160.Trigger_RS_3
   Type=RS-триггер с приоритетом по сбросу */

u_s = state_vars->control_systemv321_out_6_;
u_r = locals->control_systemv326_out_0_;
state_vars->control_systemv327_out_0_ = state_vars->control_systemv327state_;
if(u_s && u_r){
state_vars->control_systemv327_out_0_ = 0;
}else{
if(u_s && (!u_r)){
state_vars->control_systemv327_out_0_ = 1;
}else{
if(!(u_s) && u_r){
state_vars->control_systemv327_out_0_ = 0;
};
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
state_vars->control_systemv327state_ = state_vars->control_systemv327_out_0_;
};

/* Index=328
   UID=328
   GeneratorClassName=TSignalWriter
   Name=Macro160.ALG21
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
 dynamicmode_state = state_vars->control_systemv323_out_0_;
 staticmode_state = state_vars->control_systemv325_out_0_;
 manualmode_state = state_vars->control_systemv327_out_0_;

/* Index=329
   UID=329
   GeneratorClassName=TSignalReader
   Name=Macro159.Signal_Block21
   Type=Вход алгоритма */

};
state_vars->control_systemv329_out_0_ = dynamicmode_state;
state_vars->control_systemv329_out_1_ = staticmode_state;
state_vars->control_systemv329_out_2_ = manualmode_state;

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

state_vars->control_systemv330_out_0_ = state_vars->control_systemv329_out_1_;

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=331
   UID=331
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG30
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv155_a_)){
 bosvvalve1_remoteallowed = (consts->control_systemv155_a_ > 0.5);
};
if(isfinite(consts->control_systemv151_a_)){
 bosvvalve1_autocontrol = (consts->control_systemv151_a_ > 0.5);
};
if(isfinite(consts->control_systemv152_a_)){
 bosvvalve2_remoteallowed = (consts->control_systemv152_a_ > 0.5);
};
if(isfinite(consts->control_systemv156_a_)){
 bosvvalve2_autocontrol = (consts->control_systemv156_a_ > 0.5);
};
if(isfinite(consts->control_systemv153_a_)){
 bosvvalve3_remoteallowed = (consts->control_systemv153_a_ > 0.5);
};
if(isfinite(consts->control_systemv157_a_)){
 bosvvalve3_autocontrol = (consts->control_systemv157_a_ > 0.5);
};
if(isfinite(consts->control_systemv154_a_)){
 bosvvalve4_remoteallowed = (consts->control_systemv154_a_ > 0.5);
};
if(isfinite(consts->control_systemv158_a_)){
 bosvvalve4_autocontrol = (consts->control_systemv158_a_ > 0.5);
};

};
};

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

state_vars->control_systemv332_out_0_ = state_vars->control_systemv329_out_0_;

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=333
   UID=333
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG33
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv91_a_)){
 btovalve1_remoteallowed = (consts->control_systemv91_a_ > 0.5);
};
if(isfinite(consts->control_systemv90_a_)){
 btovalve2_remoteallowed = (consts->control_systemv90_a_ > 0.5);
};
if(isfinite(consts->control_systemv89_a_)){
 btovalve3_remoteallowed = (consts->control_systemv89_a_ > 0.5);
};
if(isfinite(consts->control_systemv88_a_)){
 btovalve4_remoteallowed = (consts->control_systemv88_a_ > 0.5);
};
if(isfinite(consts->control_systemv87_a_)){
 btovalve5_remoteallowed = (consts->control_systemv87_a_ > 0.5);
};
if(isfinite(consts->control_systemv86_a_)){
 btovalve6_remoteallowed = (consts->control_systemv86_a_ > 0.5);
};
if(isfinite(consts->control_systemv85_a_)){
 btovalve7_remoteallowed = (consts->control_systemv85_a_ > 0.5);
};
if(isfinite(consts->control_systemv84_a_)){
 btovalve8_remoteallowed = (consts->control_systemv84_a_ > 0.5);
};

/* Index=334
   UID=334
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG29
   Type=Выход алгоритма */

if(isfinite(consts->control_systemv18_a_)){
 bosvvalve1_remoteallowed = (consts->control_systemv18_a_ > 0.5);
};
if(isfinite(consts->control_systemv14_a_)){
 bosvvalve1_autocontrol = (consts->control_systemv14_a_ > 0.5);
};
if(isfinite(consts->control_systemv15_a_)){
 bosvvalve2_remoteallowed = (consts->control_systemv15_a_ > 0.5);
};
if(isfinite(consts->control_systemv19_a_)){
 bosvvalve2_autocontrol = (consts->control_systemv19_a_ > 0.5);
};
if(isfinite(consts->control_systemv16_a_)){
 bosvvalve3_remoteallowed = (consts->control_systemv16_a_ > 0.5);
};
if(isfinite(consts->control_systemv20_a_)){
 bosvvalve3_autocontrol = (consts->control_systemv20_a_ > 0.5);
};
if(isfinite(consts->control_systemv17_a_)){
 bosvvalve4_remoteallowed = (consts->control_systemv17_a_ > 0.5);
};
if(isfinite(consts->control_systemv21_a_)){
 bosvvalve4_autocontrol = (consts->control_systemv21_a_ > 0.5);
};

};
};

/* Index=335
   UID=335
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro155.Signal_Block20
   Type=Вход алгоритма */

state_vars->control_systemv335_out_0_ = pressureactual_sup1;
state_vars->control_systemv335_out_1_ = pressureactual_sup2;
state_vars->control_systemv335_out_2_ = pressureactual_but1;
state_vars->control_systemv335_out_3_ = pressureactual_but2;

/* Index=336
   UID=336
   GeneratorClassName=TSumSrc
   Name=Macro161.Macro155.Add_oper14
   Type=Сумматор */

locals->control_systemv336_out_0_ = (0.5)*state_vars->control_systemv335_out_0_+(0.5)*state_vars->control_systemv335_out_1_;

/* Index=337
   UID=337
   GeneratorClassName=TIfSection
   Name=Macro159.Macro7.IfCondition4
   Type=Условие выполнения субмодели */

state_vars->control_systemv337_out_0_ = state_vars->control_systemv329_out_2_;

/* Index=337
   UID=337
   GeneratorClassName=TIfSection
   Name=Macro159.Macro7.IfCondition4
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv337_out_0_){

/* Index=338
   UID=338
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro7.Macro161.ALG21
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv296_a_)){
 kskvalve1_remoteallowed = (consts->control_systemv296_a_ > 0.5);
};
if(isfinite(consts->control_systemv295_a_)){
 kskvalve2_remoteallowed = (consts->control_systemv295_a_ > 0.5);
};
if(isfinite(consts->control_systemv294_a_)){
 kskvalve3_remoteallowed = (consts->control_systemv294_a_ > 0.5);
};
if(isfinite(consts->control_systemv293_a_)){
 kskvalve4_remoteallowed = (consts->control_systemv293_a_ > 0.5);
};
if(isfinite(consts->control_systemv292_a_)){
 kpovalve1_remoteallowed = (consts->control_systemv292_a_ > 0.5);
};
if(isfinite(consts->control_systemv291_a_)){
 kpovalve2_remoteallowed = (consts->control_systemv291_a_ > 0.5);
};
if(isfinite(consts->control_systemv290_a_)){
 kpovalve3_remoteallowed = (consts->control_systemv290_a_ > 0.5);
};
if(isfinite(consts->control_systemv289_a_)){
 kpovalve4_remoteallowed = (consts->control_systemv289_a_ > 0.5);
};
if(isfinite(consts->control_systemv288_a_)){
 brsvalve1_remoteallowed = (consts->control_systemv288_a_ > 0.5);
};
if(isfinite(consts->control_systemv287_a_)){
 brsvalve2_remoteallowed = (consts->control_systemv287_a_ > 0.5);
};
if(isfinite(consts->control_systemv286_a_)){
 bosvvalve1_remoteallowed = (consts->control_systemv286_a_ > 0.5);
};
if(isfinite(consts->control_systemv285_a_)){
 bosvvalve2_remoteallowed = (consts->control_systemv285_a_ > 0.5);
};
if(isfinite(consts->control_systemv284_a_)){
 bosvvalve3_remoteallowed = (consts->control_systemv284_a_ > 0.5);
};
if(isfinite(consts->control_systemv283_a_)){
 bosvvalve4_remoteallowed = (consts->control_systemv283_a_ > 0.5);
};
if(isfinite(consts->control_systemv282_a_)){
 ko2valve1_remoteallowed = (consts->control_systemv282_a_ > 0.5);
};
if(isfinite(consts->control_systemv281_a_)){
 ko2valve2_remoteallowed = (consts->control_systemv281_a_ > 0.5);
};
if(isfinite(consts->control_systemv280_a_)){
 but1valve1_remoteallowed = (consts->control_systemv280_a_ > 0.5);
};
if(isfinite(consts->control_systemv279_a_)){
 but1valve2_remoteallowed = (consts->control_systemv279_a_ > 0.5);
};
if(isfinite(consts->control_systemv278_a_)){
 but2valve1_remoteallowed = (consts->control_systemv278_a_ > 0.5);
};
if(isfinite(consts->control_systemv277_a_)){
 but2valve2_remoteallowed = (consts->control_systemv277_a_ > 0.5);
};
if(isfinite(consts->control_systemv276_a_)){
 btovalve1_remoteallowed = (consts->control_systemv276_a_ > 0.5);
};
if(isfinite(consts->control_systemv275_a_)){
 btovalve2_remoteallowed = (consts->control_systemv275_a_ > 0.5);
};
if(isfinite(consts->control_systemv274_a_)){
 btovalve3_remoteallowed = (consts->control_systemv274_a_ > 0.5);
};
if(isfinite(consts->control_systemv273_a_)){
 btovalve4_remoteallowed = (consts->control_systemv273_a_ > 0.5);
};
if(isfinite(consts->control_systemv272_a_)){
 btovalve5_remoteallowed = (consts->control_systemv272_a_ > 0.5);
};
if(isfinite(consts->control_systemv271_a_)){
 btovalve6_remoteallowed = (consts->control_systemv271_a_ > 0.5);
};
if(isfinite(consts->control_systemv270_a_)){
 btovalve7_remoteallowed = (consts->control_systemv270_a_ > 0.5);
};
if(isfinite(consts->control_systemv269_a_)){
 btovalve8_remoteallowed = (consts->control_systemv269_a_ > 0.5);
};
if(isfinite(consts->control_systemv268_a_)){
 san1valve1_remoteallowed = (consts->control_systemv268_a_ > 0.5);
};
if(isfinite(consts->control_systemv267_a_)){
 san1valve2_remoteallowed = (consts->control_systemv267_a_ > 0.5);
};
if(isfinite(consts->control_systemv266_a_)){
 san2valve1_remoteallowed = (consts->control_systemv266_a_ > 0.5);
};
if(isfinite(consts->control_systemv265_a_)){
 san2valve2_remoteallowed = (consts->control_systemv265_a_ > 0.5);
};
if(isfinite(consts->control_systemv264_a_)){
 san3valve1_remoteallowed = (consts->control_systemv264_a_ > 0.5);
};
if(isfinite(consts->control_systemv263_a_)){
 san3valve2_remoteallowed = (consts->control_systemv263_a_ > 0.5);
};
if(isfinite(consts->control_systemv262_a_)){
 san4valve1_remoteallowed = (consts->control_systemv262_a_ > 0.5);
};
if(isfinite(consts->control_systemv261_a_)){
 san4valve2_remoteallowed = (consts->control_systemv261_a_ > 0.5);
};
if(isfinite(consts->control_systemv260_a_)){
 san5valve1_remoteallowed = (consts->control_systemv260_a_ > 0.5);
};
if(isfinite(consts->control_systemv259_a_)){
 san5valve2_remoteallowed = (consts->control_systemv259_a_ > 0.5);
};
if(isfinite(consts->control_systemv258_a_)){
 san6valve1_remoteallowed = (consts->control_systemv258_a_ > 0.5);
};
if(isfinite(consts->control_systemv257_a_)){
 san6valve2_remoteallowed = (consts->control_systemv257_a_ > 0.5);
};
if(isfinite(consts->control_systemv256_a_)){
 san7valve1_remoteallowed = (consts->control_systemv256_a_ > 0.5);
};
if(isfinite(consts->control_systemv255_a_)){
 san7valve2_remoteallowed = (consts->control_systemv255_a_ > 0.5);
};
if(isfinite(consts->control_systemv254_a_)){
 san8valve1_remoteallowed = (consts->control_systemv254_a_ > 0.5);
};
if(isfinite(consts->control_systemv253_a_)){
 san8valve2_remoteallowed = (consts->control_systemv253_a_ > 0.5);
};
if(isfinite(consts->control_systemv252_a_)){
 ks1valve1_remoteallowed = (consts->control_systemv252_a_ > 0.5);
};
if(isfinite(consts->control_systemv251_a_)){
 ks1valve2_remoteallowed = (consts->control_systemv251_a_ > 0.5);
};
if(isfinite(consts->control_systemv250_a_)){
 ks1valve3_remoteallowed = (consts->control_systemv250_a_ > 0.5);
};
if(isfinite(consts->control_systemv249_a_)){
 ks2valve1_remoteallowed = (consts->control_systemv249_a_ > 0.5);
};
if(isfinite(consts->control_systemv306_a_)){
 ks2valve2_remoteallowed = (consts->control_systemv306_a_ > 0.5);
};
if(isfinite(consts->control_systemv305_a_)){
 ks2valve3_remoteallowed = (consts->control_systemv305_a_ > 0.5);
};
if(isfinite(consts->control_systemv304_a_)){
 ks3valve1_remoteallowed = (consts->control_systemv304_a_ > 0.5);
};
if(isfinite(consts->control_systemv303_a_)){
 ks3valve2_remoteallowed = (consts->control_systemv303_a_ > 0.5);
};
if(isfinite(consts->control_systemv302_a_)){
 ks3valve3_remoteallowed = (consts->control_systemv302_a_ > 0.5);
};
if(isfinite(consts->control_systemv301_a_)){
 ks4valve1_remoteallowed = (consts->control_systemv301_a_ > 0.5);
};
if(isfinite(consts->control_systemv300_a_)){
 ks4valve2_remoteallowed = (consts->control_systemv300_a_ > 0.5);
};
if(isfinite(consts->control_systemv299_a_)){
 ks4valve3_remoteallowed = (consts->control_systemv299_a_ > 0.5);
};
if(isfinite(consts->control_systemv298_a_)){
 ks5valve1_remoteallowed = (consts->control_systemv298_a_ > 0.5);
};
if(isfinite(consts->control_systemv297_a_)){
 ks5valve2_remoteallowed = (consts->control_systemv297_a_ > 0.5);
};
if(isfinite(consts->control_systemv316_a_)){
 ks5valve3_remoteallowed = (consts->control_systemv316_a_ > 0.5);
};
if(isfinite(consts->control_systemv315_a_)){
 ks6valve1_remoteallowed = (consts->control_systemv315_a_ > 0.5);
};
if(isfinite(consts->control_systemv314_a_)){
 ks6valve2_remoteallowed = (consts->control_systemv314_a_ > 0.5);
};
if(isfinite(consts->control_systemv313_a_)){
 ks6valve3_remoteallowed = (consts->control_systemv313_a_ > 0.5);
};
if(isfinite(consts->control_systemv312_a_)){
 ks7valve1_remoteallowed = (consts->control_systemv312_a_ > 0.5);
};
if(isfinite(consts->control_systemv311_a_)){
 ks7valve2_remoteallowed = (consts->control_systemv311_a_ > 0.5);
};
if(isfinite(consts->control_systemv310_a_)){
 ks7valve3_remoteallowed = (consts->control_systemv310_a_ > 0.5);
};
if(isfinite(consts->control_systemv309_a_)){
 ks8valve1_remoteallowed = (consts->control_systemv309_a_ > 0.5);
};
if(isfinite(consts->control_systemv308_a_)){
 ks8valve2_remoteallowed = (consts->control_systemv308_a_ > 0.5);
};
if(isfinite(consts->control_systemv307_a_)){
 ks8valve3_remoteallowed = (consts->control_systemv307_a_ > 0.5);
};

};
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=339
   UID=339
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG25
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv207_a_)){
 kpovalve1_remoteallowed = (consts->control_systemv207_a_ > 0.5);
};
if(isfinite(consts->control_systemv135_a_)){
 kpovalve1_autocontrol = (consts->control_systemv135_a_ > 0.5);
};
if(isfinite(consts->control_systemv208_a_)){
 kpovalve2_remoteallowed = (consts->control_systemv208_a_ > 0.5);
};
if(isfinite(consts->control_systemv136_a_)){
 kpovalve2_autocontrol = (consts->control_systemv136_a_ > 0.5);
};
if(isfinite(consts->control_systemv209_a_)){
 kpovalve3_remoteallowed = (consts->control_systemv209_a_ > 0.5);
};
if(isfinite(consts->control_systemv137_a_)){
 kpovalve3_autocontrol = (consts->control_systemv137_a_ > 0.5);
};
if(isfinite(consts->control_systemv210_a_)){
 kpovalve4_remoteallowed = (consts->control_systemv210_a_ > 0.5);
};
if(isfinite(consts->control_systemv138_a_)){
 kpovalve4_autocontrol = (consts->control_systemv138_a_ > 0.5);
};
if(isfinite(consts->control_systemv211_a_)){
 ko2valve1_remoteallowed = (consts->control_systemv211_a_ > 0.5);
};
if(isfinite(consts->control_systemv133_a_)){
 ko2valve1_autocontrol = (consts->control_systemv133_a_ > 0.5);
};
if(isfinite(consts->control_systemv212_a_)){
 ko2valve2_remoteallowed = (consts->control_systemv212_a_ > 0.5);
};
if(isfinite(consts->control_systemv134_a_)){
 ko2valve2_autocontrol = (consts->control_systemv134_a_ > 0.5);
};

/* Index=340
   UID=340
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG26
   Type=Выход алгоритма */

if(isfinite(consts->control_systemv142_a_)){
 but1valve1_remoteallowed = (consts->control_systemv142_a_ > 0.5);
};
if(isfinite(consts->control_systemv141_a_)){
 but1valve2_remoteallowed = (consts->control_systemv141_a_ > 0.5);
};
if(isfinite(consts->control_systemv140_a_)){
 but2valve1_remoteallowed = (consts->control_systemv140_a_ > 0.5);
};
if(isfinite(consts->control_systemv139_a_)){
 but2valve2_remoteallowed = (consts->control_systemv139_a_ > 0.5);
};

};
};

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=341
   UID=341
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG32
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv31_a_)){
 ks1valve1_remoteallowed = (consts->control_systemv31_a_ > 0.5);
};
if(isfinite(consts->control_systemv33_a_)){
 ks1valve1_autocontrol = (consts->control_systemv33_a_ > 0.5);
};
if(isfinite(consts->control_systemv30_a_)){
 ks1valve2_remoteallowed = (consts->control_systemv30_a_ > 0.5);
};
if(isfinite(consts->control_systemv32_a_)){
 ks1valve2_autocontrol = (consts->control_systemv32_a_ > 0.5);
};
if(isfinite(consts->control_systemv35_a_)){
 ks1valve3_remoteallowed = (consts->control_systemv35_a_ > 0.5);
};
if(isfinite(consts->control_systemv37_a_)){
 ks1valve3_autocontrol = (consts->control_systemv37_a_ > 0.5);
};
if(isfinite(consts->control_systemv34_a_)){
 ks2valve1_remoteallowed = (consts->control_systemv34_a_ > 0.5);
};
if(isfinite(consts->control_systemv36_a_)){
 ks2valve1_autocontrol = (consts->control_systemv36_a_ > 0.5);
};
if(isfinite(consts->control_systemv39_a_)){
 ks2valve2_remoteallowed = (consts->control_systemv39_a_ > 0.5);
};
if(isfinite(consts->control_systemv41_a_)){
 ks2valve2_autocontrol = (consts->control_systemv41_a_ > 0.5);
};
if(isfinite(consts->control_systemv38_a_)){
 ks2valve3_remoteallowed = (consts->control_systemv38_a_ > 0.5);
};
if(isfinite(consts->control_systemv40_a_)){
 ks2valve3_autocontrol = (consts->control_systemv40_a_ > 0.5);
};
if(isfinite(consts->control_systemv43_a_)){
 ks3valve1_remoteallowed = (consts->control_systemv43_a_ > 0.5);
};
if(isfinite(consts->control_systemv45_a_)){
 ks3valve1_autocontrol = (consts->control_systemv45_a_ > 0.5);
};
if(isfinite(consts->control_systemv42_a_)){
 ks3valve2_remoteallowed = (consts->control_systemv42_a_ > 0.5);
};
if(isfinite(consts->control_systemv44_a_)){
 ks3valve2_autocontrol = (consts->control_systemv44_a_ > 0.5);
};
if(isfinite(consts->control_systemv47_a_)){
 ks3valve3_remoteallowed = (consts->control_systemv47_a_ > 0.5);
};
if(isfinite(consts->control_systemv49_a_)){
 ks3valve3_autocontrol = (consts->control_systemv49_a_ > 0.5);
};
if(isfinite(consts->control_systemv46_a_)){
 ks4valve1_remoteallowed = (consts->control_systemv46_a_ > 0.5);
};
if(isfinite(consts->control_systemv48_a_)){
 ks4valve1_autocontrol = (consts->control_systemv48_a_ > 0.5);
};
if(isfinite(consts->control_systemv51_a_)){
 ks4valve2_remoteallowed = (consts->control_systemv51_a_ > 0.5);
};
if(isfinite(consts->control_systemv53_a_)){
 ks4valve2_autocontrol = (consts->control_systemv53_a_ > 0.5);
};
if(isfinite(consts->control_systemv50_a_)){
 ks4valve3_remoteallowed = (consts->control_systemv50_a_ > 0.5);
};
if(isfinite(consts->control_systemv52_a_)){
 ks4valve3_autocontrol = (consts->control_systemv52_a_ > 0.5);
};
if(isfinite(consts->control_systemv55_a_)){
 ks5valve1_remoteallowed = (consts->control_systemv55_a_ > 0.5);
};
if(isfinite(consts->control_systemv57_a_)){
 ks5valve1_autocontrol = (consts->control_systemv57_a_ > 0.5);
};
if(isfinite(consts->control_systemv54_a_)){
 ks5valve2_remoteallowed = (consts->control_systemv54_a_ > 0.5);
};
if(isfinite(consts->control_systemv56_a_)){
 ks5valve2_autocontrol = (consts->control_systemv56_a_ > 0.5);
};
if(isfinite(consts->control_systemv59_a_)){
 ks5valve3_remoteallowed = (consts->control_systemv59_a_ > 0.5);
};
if(isfinite(consts->control_systemv61_a_)){
 ks5valve3_autocontrol = (consts->control_systemv61_a_ > 0.5);
};
if(isfinite(consts->control_systemv58_a_)){
 ks6valve1_remoteallowed = (consts->control_systemv58_a_ > 0.5);
};
if(isfinite(consts->control_systemv60_a_)){
 ks6valve1_autocontrol = (consts->control_systemv60_a_ > 0.5);
};
if(isfinite(consts->control_systemv62_a_)){
 ks6valve2_remoteallowed = (consts->control_systemv62_a_ > 0.5);
};
if(isfinite(consts->control_systemv63_a_)){
 ks6valve2_autocontrol = (consts->control_systemv63_a_ > 0.5);
};
if(isfinite(consts->control_systemv65_a_)){
 ks6valve3_remoteallowed = (consts->control_systemv65_a_ > 0.5);
};
if(isfinite(consts->control_systemv67_a_)){
 ks6valve3_autocontrol = (consts->control_systemv67_a_ > 0.5);
};
if(isfinite(consts->control_systemv64_a_)){
 ks7valve1_remoteallowed = (consts->control_systemv64_a_ > 0.5);
};
if(isfinite(consts->control_systemv66_a_)){
 ks7valve1_autocontrol = (consts->control_systemv66_a_ > 0.5);
};
if(isfinite(consts->control_systemv69_a_)){
 ks7valve2_remoteallowed = (consts->control_systemv69_a_ > 0.5);
};
if(isfinite(consts->control_systemv71_a_)){
 ks7valve2_autocontrol = (consts->control_systemv71_a_ > 0.5);
};
if(isfinite(consts->control_systemv68_a_)){
 ks7valve3_remoteallowed = (consts->control_systemv68_a_ > 0.5);
};
if(isfinite(consts->control_systemv70_a_)){
 ks7valve3_autocontrol = (consts->control_systemv70_a_ > 0.5);
};
if(isfinite(consts->control_systemv72_a_)){
 ks8valve1_remoteallowed = (consts->control_systemv72_a_ > 0.5);
};
if(isfinite(consts->control_systemv73_a_)){
 ks8valve1_autocontrol = (consts->control_systemv73_a_ > 0.5);
};
if(isfinite(consts->control_systemv75_a_)){
 ks8valve2_remoteallowed = (consts->control_systemv75_a_ > 0.5);
};
if(isfinite(consts->control_systemv77_a_)){
 ks8valve2_autocontrol = (consts->control_systemv77_a_ > 0.5);
};
if(isfinite(consts->control_systemv74_a_)){
 ks8valve3_remoteallowed = (consts->control_systemv74_a_ > 0.5);
};
if(isfinite(consts->control_systemv76_a_)){
 ks8valve3_autocontrol = (consts->control_systemv76_a_ > 0.5);
};

};
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=342
   UID=342
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG33
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv160_a_)){
 ks1valve1_remoteallowed = (consts->control_systemv160_a_ > 0.5);
};
if(isfinite(consts->control_systemv162_a_)){
 ks1valve1_autocontrol = (consts->control_systemv162_a_ > 0.5);
};
if(isfinite(consts->control_systemv159_a_)){
 ks1valve2_remoteallowed = (consts->control_systemv159_a_ > 0.5);
};
if(isfinite(consts->control_systemv161_a_)){
 ks1valve2_autocontrol = (consts->control_systemv161_a_ > 0.5);
};
if(isfinite(consts->control_systemv164_a_)){
 ks1valve3_remoteallowed = (consts->control_systemv164_a_ > 0.5);
};
if(isfinite(consts->control_systemv166_a_)){
 ks1valve3_autocontrol = (consts->control_systemv166_a_ > 0.5);
};
if(isfinite(consts->control_systemv163_a_)){
 ks2valve1_remoteallowed = (consts->control_systemv163_a_ > 0.5);
};
if(isfinite(consts->control_systemv165_a_)){
 ks2valve1_autocontrol = (consts->control_systemv165_a_ > 0.5);
};
if(isfinite(consts->control_systemv168_a_)){
 ks2valve2_remoteallowed = (consts->control_systemv168_a_ > 0.5);
};
if(isfinite(consts->control_systemv170_a_)){
 ks2valve2_autocontrol = (consts->control_systemv170_a_ > 0.5);
};
if(isfinite(consts->control_systemv167_a_)){
 ks2valve3_remoteallowed = (consts->control_systemv167_a_ > 0.5);
};
if(isfinite(consts->control_systemv169_a_)){
 ks2valve3_autocontrol = (consts->control_systemv169_a_ > 0.5);
};
if(isfinite(consts->control_systemv172_a_)){
 ks3valve1_remoteallowed = (consts->control_systemv172_a_ > 0.5);
};
if(isfinite(consts->control_systemv174_a_)){
 ks3valve1_autocontrol = (consts->control_systemv174_a_ > 0.5);
};
if(isfinite(consts->control_systemv171_a_)){
 ks3valve2_remoteallowed = (consts->control_systemv171_a_ > 0.5);
};
if(isfinite(consts->control_systemv173_a_)){
 ks3valve2_autocontrol = (consts->control_systemv173_a_ > 0.5);
};
if(isfinite(consts->control_systemv176_a_)){
 ks3valve3_remoteallowed = (consts->control_systemv176_a_ > 0.5);
};
if(isfinite(consts->control_systemv178_a_)){
 ks3valve3_autocontrol = (consts->control_systemv178_a_ > 0.5);
};
if(isfinite(consts->control_systemv175_a_)){
 ks4valve1_remoteallowed = (consts->control_systemv175_a_ > 0.5);
};
if(isfinite(consts->control_systemv177_a_)){
 ks4valve1_autocontrol = (consts->control_systemv177_a_ > 0.5);
};
if(isfinite(consts->control_systemv180_a_)){
 ks4valve2_remoteallowed = (consts->control_systemv180_a_ > 0.5);
};
if(isfinite(consts->control_systemv182_a_)){
 ks4valve2_autocontrol = (consts->control_systemv182_a_ > 0.5);
};
if(isfinite(consts->control_systemv179_a_)){
 ks4valve3_remoteallowed = (consts->control_systemv179_a_ > 0.5);
};
if(isfinite(consts->control_systemv181_a_)){
 ks4valve3_autocontrol = (consts->control_systemv181_a_ > 0.5);
};
if(isfinite(consts->control_systemv184_a_)){
 ks5valve1_remoteallowed = (consts->control_systemv184_a_ > 0.5);
};
if(isfinite(consts->control_systemv186_a_)){
 ks5valve1_autocontrol = (consts->control_systemv186_a_ > 0.5);
};
if(isfinite(consts->control_systemv183_a_)){
 ks5valve2_remoteallowed = (consts->control_systemv183_a_ > 0.5);
};
if(isfinite(consts->control_systemv185_a_)){
 ks5valve2_autocontrol = (consts->control_systemv185_a_ > 0.5);
};
if(isfinite(consts->control_systemv188_a_)){
 ks5valve3_remoteallowed = (consts->control_systemv188_a_ > 0.5);
};
if(isfinite(consts->control_systemv190_a_)){
 ks5valve3_autocontrol = (consts->control_systemv190_a_ > 0.5);
};
if(isfinite(consts->control_systemv187_a_)){
 ks6valve1_remoteallowed = (consts->control_systemv187_a_ > 0.5);
};
if(isfinite(consts->control_systemv189_a_)){
 ks6valve1_autocontrol = (consts->control_systemv189_a_ > 0.5);
};
if(isfinite(consts->control_systemv191_a_)){
 ks6valve2_remoteallowed = (consts->control_systemv191_a_ > 0.5);
};
if(isfinite(consts->control_systemv192_a_)){
 ks6valve2_autocontrol = (consts->control_systemv192_a_ > 0.5);
};
if(isfinite(consts->control_systemv194_a_)){
 ks6valve3_remoteallowed = (consts->control_systemv194_a_ > 0.5);
};
if(isfinite(consts->control_systemv196_a_)){
 ks6valve3_autocontrol = (consts->control_systemv196_a_ > 0.5);
};
if(isfinite(consts->control_systemv193_a_)){
 ks7valve1_remoteallowed = (consts->control_systemv193_a_ > 0.5);
};
if(isfinite(consts->control_systemv195_a_)){
 ks7valve1_autocontrol = (consts->control_systemv195_a_ > 0.5);
};
if(isfinite(consts->control_systemv198_a_)){
 ks7valve2_remoteallowed = (consts->control_systemv198_a_ > 0.5);
};
if(isfinite(consts->control_systemv200_a_)){
 ks7valve2_autocontrol = (consts->control_systemv200_a_ > 0.5);
};
if(isfinite(consts->control_systemv197_a_)){
 ks7valve3_remoteallowed = (consts->control_systemv197_a_ > 0.5);
};
if(isfinite(consts->control_systemv199_a_)){
 ks7valve3_autocontrol = (consts->control_systemv199_a_ > 0.5);
};
if(isfinite(consts->control_systemv201_a_)){
 ks8valve1_remoteallowed = (consts->control_systemv201_a_ > 0.5);
};
if(isfinite(consts->control_systemv202_a_)){
 ks8valve1_autocontrol = (consts->control_systemv202_a_ > 0.5);
};
if(isfinite(consts->control_systemv204_a_)){
 ks8valve2_remoteallowed = (consts->control_systemv204_a_ > 0.5);
};
if(isfinite(consts->control_systemv206_a_)){
 ks8valve2_autocontrol = (consts->control_systemv206_a_ > 0.5);
};
if(isfinite(consts->control_systemv203_a_)){
 ks8valve3_remoteallowed = (consts->control_systemv203_a_ > 0.5);
};
if(isfinite(consts->control_systemv205_a_)){
 ks8valve3_autocontrol = (consts->control_systemv205_a_ > 0.5);
};

};
};

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=343
   UID=343
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG21
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv78_a_)){
 kpovalve1_remoteallowed = (consts->control_systemv78_a_ > 0.5);
};
if(isfinite(consts->control_systemv2_a_)){
 kpovalve1_autocontrol = (consts->control_systemv2_a_ > 0.5);
};
if(isfinite(consts->control_systemv79_a_)){
 kpovalve2_remoteallowed = (consts->control_systemv79_a_ > 0.5);
};
if(isfinite(consts->control_systemv3_a_)){
 kpovalve2_autocontrol = (consts->control_systemv3_a_ > 0.5);
};
if(isfinite(consts->control_systemv80_a_)){
 kpovalve3_remoteallowed = (consts->control_systemv80_a_ > 0.5);
};
if(isfinite(consts->control_systemv4_a_)){
 kpovalve3_autocontrol = (consts->control_systemv4_a_ > 0.5);
};
if(isfinite(consts->control_systemv81_a_)){
 kpovalve4_remoteallowed = (consts->control_systemv81_a_ > 0.5);
};
if(isfinite(consts->control_systemv5_a_)){
 kpovalve4_autocontrol = (consts->control_systemv5_a_ > 0.5);
};
if(isfinite(consts->control_systemv82_a_)){
 ko2valve1_remoteallowed = (consts->control_systemv82_a_ > 0.5);
};
if(isfinite(consts->control_systemv0_a_)){
 ko2valve1_autocontrol = (consts->control_systemv0_a_ > 0.5);
};
if(isfinite(consts->control_systemv83_a_)){
 ko2valve2_remoteallowed = (consts->control_systemv83_a_ > 0.5);
};
if(isfinite(consts->control_systemv1_a_)){
 ko2valve2_autocontrol = (consts->control_systemv1_a_ > 0.5);
};

/* Index=344
   UID=344
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG24
   Type=Выход алгоритма */

if(isfinite(consts->control_systemv9_a_)){
 but1valve1_remoteallowed = (consts->control_systemv9_a_ > 0.5);
};
if(isfinite(consts->control_systemv8_a_)){
 but1valve2_remoteallowed = (consts->control_systemv8_a_ > 0.5);
};
if(isfinite(consts->control_systemv7_a_)){
 but2valve1_remoteallowed = (consts->control_systemv7_a_ > 0.5);
};
if(isfinite(consts->control_systemv6_a_)){
 but2valve2_remoteallowed = (consts->control_systemv6_a_ > 0.5);
};

};
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=345
   UID=345
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG27
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv143_a_)){
 kskvalve1_remoteallowed = (consts->control_systemv143_a_ > 0.5);
};
if(isfinite(consts->control_systemv144_a_)){
 kskvalve1_autocontrol = (consts->control_systemv144_a_ > 0.5);
};
if(isfinite(consts->control_systemv145_a_)){
 kskvalve2_remoteallowed = (consts->control_systemv145_a_ > 0.5);
};
if(isfinite(consts->control_systemv146_a_)){
 kskvalve2_autocontrol = (consts->control_systemv146_a_ > 0.5);
};
if(isfinite(consts->control_systemv223_a_)){
 kskvalve3_remoteallowed = (consts->control_systemv223_a_ > 0.5);
};
if(isfinite(consts->control_systemv224_a_)){
 kskvalve3_autocontrol = (consts->control_systemv224_a_ > 0.5);
};
if(isfinite(consts->control_systemv225_a_)){
 kskvalve4_remoteallowed = (consts->control_systemv225_a_ > 0.5);
};
if(isfinite(consts->control_systemv226_a_)){
 kskvalve4_autocontrol = (consts->control_systemv226_a_ > 0.5);
};

};
};

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=346
   UID=346
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG34
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv23_a_)){
 san1valve1_remoteallowed = (consts->control_systemv23_a_ > 0.5);
};
if(isfinite(consts->control_systemv25_a_)){
 san1valve1_autocontrol = (consts->control_systemv25_a_ > 0.5);
};
if(isfinite(consts->control_systemv22_a_)){
 san1valve2_remoteallowed = (consts->control_systemv22_a_ > 0.5);
};
if(isfinite(consts->control_systemv24_a_)){
 san1valve2_autocontrol = (consts->control_systemv24_a_ > 0.5);
};
if(isfinite(consts->control_systemv97_a_)){
 san2valve1_remoteallowed = (consts->control_systemv97_a_ > 0.5);
};
if(isfinite(consts->control_systemv99_a_)){
 san2valve1_autocontrol = (consts->control_systemv99_a_ > 0.5);
};
if(isfinite(consts->control_systemv96_a_)){
 san2valve2_remoteallowed = (consts->control_systemv96_a_ > 0.5);
};
if(isfinite(consts->control_systemv98_a_)){
 san2valve2_autocontrol = (consts->control_systemv98_a_ > 0.5);
};
if(isfinite(consts->control_systemv101_a_)){
 san3valve1_remoteallowed = (consts->control_systemv101_a_ > 0.5);
};
if(isfinite(consts->control_systemv103_a_)){
 san3valve1_autocontrol = (consts->control_systemv103_a_ > 0.5);
};
if(isfinite(consts->control_systemv100_a_)){
 san3valve2_remoteallowed = (consts->control_systemv100_a_ > 0.5);
};
if(isfinite(consts->control_systemv102_a_)){
 san3valve2_autocontrol = (consts->control_systemv102_a_ > 0.5);
};
if(isfinite(consts->control_systemv105_a_)){
 san4valve1_remoteallowed = (consts->control_systemv105_a_ > 0.5);
};
if(isfinite(consts->control_systemv107_a_)){
 san4valve1_autocontrol = (consts->control_systemv107_a_ > 0.5);
};
if(isfinite(consts->control_systemv104_a_)){
 san4valve2_remoteallowed = (consts->control_systemv104_a_ > 0.5);
};
if(isfinite(consts->control_systemv106_a_)){
 san4valve2_autocontrol = (consts->control_systemv106_a_ > 0.5);
};
if(isfinite(consts->control_systemv109_a_)){
 san5valve1_remoteallowed = (consts->control_systemv109_a_ > 0.5);
};
if(isfinite(consts->control_systemv111_a_)){
 san5valve1_autocontrol = (consts->control_systemv111_a_ > 0.5);
};
if(isfinite(consts->control_systemv108_a_)){
 san5valve2_remoteallowed = (consts->control_systemv108_a_ > 0.5);
};
if(isfinite(consts->control_systemv110_a_)){
 san5valve2_autocontrol = (consts->control_systemv110_a_ > 0.5);
};
if(isfinite(consts->control_systemv113_a_)){
 san6valve1_remoteallowed = (consts->control_systemv113_a_ > 0.5);
};
if(isfinite(consts->control_systemv115_a_)){
 san6valve1_autocontrol = (consts->control_systemv115_a_ > 0.5);
};
if(isfinite(consts->control_systemv112_a_)){
 san6valve2_remoteallowed = (consts->control_systemv112_a_ > 0.5);
};
if(isfinite(consts->control_systemv114_a_)){
 san6valve2_autocontrol = (consts->control_systemv114_a_ > 0.5);
};
if(isfinite(consts->control_systemv117_a_)){
 san7valve1_remoteallowed = (consts->control_systemv117_a_ > 0.5);
};
if(isfinite(consts->control_systemv119_a_)){
 san7valve1_autocontrol = (consts->control_systemv119_a_ > 0.5);
};
if(isfinite(consts->control_systemv116_a_)){
 san7valve2_remoteallowed = (consts->control_systemv116_a_ > 0.5);
};
if(isfinite(consts->control_systemv118_a_)){
 san7valve2_autocontrol = (consts->control_systemv118_a_ > 0.5);
};
if(isfinite(consts->control_systemv121_a_)){
 san8valve1_remoteallowed = (consts->control_systemv121_a_ > 0.5);
};
if(isfinite(consts->control_systemv123_a_)){
 san8valve1_autocontrol = (consts->control_systemv123_a_ > 0.5);
};
if(isfinite(consts->control_systemv120_a_)){
 san8valve2_remoteallowed = (consts->control_systemv120_a_ > 0.5);
};
if(isfinite(consts->control_systemv122_a_)){
 san8valve2_autocontrol = (consts->control_systemv122_a_ > 0.5);
};

};
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=347
   UID=347
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG29
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv147_a_)){
 brsvalve1_remoteallowed = (consts->control_systemv147_a_ > 0.5);
};
if(isfinite(consts->control_systemv148_a_)){
 brsvalve1_autocontrol = (consts->control_systemv148_a_ > 0.5);
};
if(isfinite(consts->control_systemv149_a_)){
 brsvalve2_remoteallowed = (consts->control_systemv149_a_ > 0.5);
};
if(isfinite(consts->control_systemv150_a_)){
 brsvalve2_autocontrol = (consts->control_systemv150_a_ > 0.5);
};

};
};

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=348
   UID=348
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG30
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv27_a_)){
 brsvalve1_remoteallowed = (consts->control_systemv27_a_ > 0.5);
};
if(isfinite(consts->control_systemv29_a_)){
 brsvalve1_autocontrol = (consts->control_systemv29_a_ > 0.5);
};
if(isfinite(consts->control_systemv26_a_)){
 brsvalve2_remoteallowed = (consts->control_systemv26_a_ > 0.5);
};
if(isfinite(consts->control_systemv28_a_)){
 brsvalve2_autocontrol = (consts->control_systemv28_a_ > 0.5);
};

/* Index=349
   UID=349
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro161.ALG26
   Type=Выход алгоритма */

if(isfinite(consts->control_systemv10_a_)){
 kskvalve1_remoteallowed = (consts->control_systemv10_a_ > 0.5);
};
if(isfinite(consts->control_systemv11_a_)){
 kskvalve1_autocontrol = (consts->control_systemv11_a_ > 0.5);
};
if(isfinite(consts->control_systemv12_a_)){
 kskvalve2_remoteallowed = (consts->control_systemv12_a_ > 0.5);
};
if(isfinite(consts->control_systemv13_a_)){
 kskvalve2_autocontrol = (consts->control_systemv13_a_ > 0.5);
};
if(isfinite(consts->control_systemv92_a_)){
 kskvalve3_remoteallowed = (consts->control_systemv92_a_ > 0.5);
};
if(isfinite(consts->control_systemv93_a_)){
 kskvalve3_autocontrol = (consts->control_systemv93_a_ > 0.5);
};
if(isfinite(consts->control_systemv94_a_)){
 kskvalve4_remoteallowed = (consts->control_systemv94_a_ > 0.5);
};
if(isfinite(consts->control_systemv95_a_)){
 kskvalve4_autocontrol = (consts->control_systemv95_a_ > 0.5);
};

};
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=350
   UID=350
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG34
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv222_a_)){
 btovalve1_remoteallowed = (consts->control_systemv222_a_ > 0.5);
};
if(isfinite(consts->control_systemv221_a_)){
 btovalve2_remoteallowed = (consts->control_systemv221_a_ > 0.5);
};
if(isfinite(consts->control_systemv220_a_)){
 btovalve3_remoteallowed = (consts->control_systemv220_a_ > 0.5);
};
if(isfinite(consts->control_systemv219_a_)){
 btovalve4_remoteallowed = (consts->control_systemv219_a_ > 0.5);
};
if(isfinite(consts->control_systemv218_a_)){
 btovalve5_remoteallowed = (consts->control_systemv218_a_ > 0.5);
};
if(isfinite(consts->control_systemv217_a_)){
 btovalve6_remoteallowed = (consts->control_systemv217_a_ > 0.5);
};
if(isfinite(consts->control_systemv216_a_)){
 btovalve7_remoteallowed = (consts->control_systemv216_a_ > 0.5);
};
if(isfinite(consts->control_systemv215_a_)){
 btovalve8_remoteallowed = (consts->control_systemv215_a_ > 0.5);
};

};
};

/* Index=337
   UID=337
   GeneratorClassName=TIfSection
   Name=Macro159.Macro7.IfCondition4
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv337_out_0_){

/* Index=351
   UID=351
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro7.Macro162.ALG22
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv317_a_)){
 maincomp1_remoteallowed = (consts->control_systemv317_a_ > 0.5);
};
if(isfinite(consts->control_systemv318_a_)){
 maincomp2_remoteallowed = (consts->control_systemv318_a_ > 0.5);
};
if(isfinite(consts->control_systemv319_a_)){
 additcomp1_remoteallowed = (consts->control_systemv319_a_ > 0.5);
};
if(isfinite(consts->control_systemv320_a_)){
 additcomp2_remoteallowed = (consts->control_systemv320_a_ > 0.5);
};

};
};

/* Index=352
   UID=352
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader10
   Type=Чтение из списка сигналов */

state_vars->control_systemv352_out_0_[0] = kskvalve1_remotecontrol;
state_vars->control_systemv352_out_0_[1] = kskvalve2_remotecontrol;
state_vars->control_systemv352_out_0_[2] = kskvalve3_remotecontrol;
state_vars->control_systemv352_out_0_[3] = kskvalve4_remotecontrol;
state_vars->control_systemv352_out_0_[4] = kpovalve1_remotecontrol;
state_vars->control_systemv352_out_0_[5] = kpovalve2_remotecontrol;
state_vars->control_systemv352_out_0_[6] = kpovalve3_remotecontrol;
state_vars->control_systemv352_out_0_[7] = kpovalve4_remotecontrol;
state_vars->control_systemv352_out_0_[8] = brsvalve1_remotecontrol;
state_vars->control_systemv352_out_0_[9] = brsvalve2_remotecontrol;
state_vars->control_systemv352_out_0_[10] = bosvvalve1_remotecontrol;
state_vars->control_systemv352_out_0_[11] = bosvvalve2_remotecontrol;
state_vars->control_systemv352_out_0_[12] = bosvvalve3_remotecontrol;
state_vars->control_systemv352_out_0_[13] = bosvvalve4_remotecontrol;
state_vars->control_systemv352_out_0_[14] = ko2valve1_remotecontrol;
state_vars->control_systemv352_out_0_[15] = ko2valve2_remotecontrol;
state_vars->control_systemv352_out_0_[16] = but1valve1_remotecontrol;
state_vars->control_systemv352_out_0_[17] = but1valve2_remotecontrol;
state_vars->control_systemv352_out_0_[18] = but2valve1_remotecontrol;
state_vars->control_systemv352_out_0_[19] = but2valve2_remotecontrol;
state_vars->control_systemv352_out_0_[20] = btovalve1_remotecontrol;
state_vars->control_systemv352_out_0_[21] = btovalve2_remotecontrol;
state_vars->control_systemv352_out_0_[22] = btovalve3_remotecontrol;
state_vars->control_systemv352_out_0_[23] = btovalve4_remotecontrol;
state_vars->control_systemv352_out_0_[24] = btovalve5_remotecontrol;
state_vars->control_systemv352_out_0_[25] = btovalve6_remotecontrol;
state_vars->control_systemv352_out_0_[26] = btovalve7_remotecontrol;
state_vars->control_systemv352_out_0_[27] = btovalve8_remotecontrol;
state_vars->control_systemv352_out_0_[28] = san1valve1_remotecontrol;
state_vars->control_systemv352_out_0_[29] = san1valve2_remotecontrol;
state_vars->control_systemv352_out_0_[30] = san2valve1_remotecontrol;
state_vars->control_systemv352_out_0_[31] = san2valve2_remotecontrol;
state_vars->control_systemv352_out_0_[32] = san3valve1_remotecontrol;
state_vars->control_systemv352_out_0_[33] = san3valve2_remotecontrol;
state_vars->control_systemv352_out_0_[34] = san4valve1_remotecontrol;
state_vars->control_systemv352_out_0_[35] = san4valve2_remotecontrol;
state_vars->control_systemv352_out_0_[36] = san5valve1_remotecontrol;
state_vars->control_systemv352_out_0_[37] = san5valve2_remotecontrol;
state_vars->control_systemv352_out_0_[38] = san6valve1_remotecontrol;
state_vars->control_systemv352_out_0_[39] = san6valve2_remotecontrol;
state_vars->control_systemv352_out_0_[40] = san7valve1_remotecontrol;
state_vars->control_systemv352_out_0_[41] = san7valve2_remotecontrol;
state_vars->control_systemv352_out_0_[42] = san8valve1_remotecontrol;
state_vars->control_systemv352_out_0_[43] = san8valve2_remotecontrol;
state_vars->control_systemv352_out_0_[44] = ks1valve1_remotecontrol;
state_vars->control_systemv352_out_0_[45] = ks1valve2_remotecontrol;
state_vars->control_systemv352_out_0_[46] = ks1valve3_remotecontrol;
state_vars->control_systemv352_out_0_[47] = ks2valve1_remotecontrol;
state_vars->control_systemv352_out_0_[48] = ks2valve2_remotecontrol;
state_vars->control_systemv352_out_0_[49] = ks2valve3_remotecontrol;
state_vars->control_systemv352_out_0_[50] = ks3valve1_remotecontrol;
state_vars->control_systemv352_out_0_[51] = ks3valve2_remotecontrol;
state_vars->control_systemv352_out_0_[52] = ks3valve3_remotecontrol;
state_vars->control_systemv352_out_0_[53] = ks4valve1_remotecontrol;
state_vars->control_systemv352_out_0_[54] = ks4valve2_remotecontrol;
state_vars->control_systemv352_out_0_[55] = ks4valve3_remotecontrol;
state_vars->control_systemv352_out_0_[56] = ks5valve1_remotecontrol;
state_vars->control_systemv352_out_0_[57] = ks5valve2_remotecontrol;
state_vars->control_systemv352_out_0_[58] = ks5valve3_remotecontrol;
state_vars->control_systemv352_out_0_[59] = ks6valve1_remotecontrol;
state_vars->control_systemv352_out_0_[60] = ks6valve2_remotecontrol;
state_vars->control_systemv352_out_0_[61] = ks6valve3_remotecontrol;
state_vars->control_systemv352_out_0_[62] = ks7valve1_remotecontrol;
state_vars->control_systemv352_out_0_[63] = ks7valve2_remotecontrol;
state_vars->control_systemv352_out_0_[64] = ks7valve3_remotecontrol;
state_vars->control_systemv352_out_0_[65] = ks8valve1_remotecontrol;
state_vars->control_systemv352_out_0_[66] = ks8valve2_remotecontrol;
state_vars->control_systemv352_out_0_[67] = ks8valve3_remotecontrol;

/* Index=353
   UID=353
   GeneratorClassName=TOneImpulse_On
   Name=Macro161.Macro153.ImpulseOn5
   Type=Импульс по фронту */

for(i=0;i<68;i++){
u_s = state_vars->control_systemv353_trigger_[i];
f = state_vars->control_systemv352_out_0_[i];
if(!f){u_s = 0;};
if(f && (!u_s)){
u_s = 1;
state_vars->control_systemv353_out_0_[i] = 1;
}else{
state_vars->control_systemv353_out_0_[i] = 0;
};
if(action==f_GoodStep){
state_vars->control_systemv353_trigger_[i] = u_s;
};

/* Index=354
   UID=354
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader11
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv354_out_0_[0] = kskvalve1_remotecontrol;
state_vars->control_systemv354_out_0_[1] = kskvalve2_remotecontrol;
state_vars->control_systemv354_out_0_[2] = kskvalve3_remotecontrol;
state_vars->control_systemv354_out_0_[3] = kskvalve4_remotecontrol;
state_vars->control_systemv354_out_0_[4] = kpovalve1_remotecontrol;
state_vars->control_systemv354_out_0_[5] = kpovalve2_remotecontrol;
state_vars->control_systemv354_out_0_[6] = kpovalve3_remotecontrol;
state_vars->control_systemv354_out_0_[7] = kpovalve4_remotecontrol;
state_vars->control_systemv354_out_0_[8] = brsvalve1_remotecontrol;
state_vars->control_systemv354_out_0_[9] = brsvalve2_remotecontrol;
state_vars->control_systemv354_out_0_[10] = bosvvalve1_remotecontrol;
state_vars->control_systemv354_out_0_[11] = bosvvalve2_remotecontrol;
state_vars->control_systemv354_out_0_[12] = bosvvalve3_remotecontrol;
state_vars->control_systemv354_out_0_[13] = bosvvalve4_remotecontrol;
state_vars->control_systemv354_out_0_[14] = ko2valve1_remotecontrol;
state_vars->control_systemv354_out_0_[15] = ko2valve2_remotecontrol;
state_vars->control_systemv354_out_0_[16] = but1valve1_remotecontrol;
state_vars->control_systemv354_out_0_[17] = but1valve2_remotecontrol;
state_vars->control_systemv354_out_0_[18] = but2valve1_remotecontrol;
state_vars->control_systemv354_out_0_[19] = but2valve2_remotecontrol;
state_vars->control_systemv354_out_0_[20] = btovalve1_remotecontrol;
state_vars->control_systemv354_out_0_[21] = btovalve2_remotecontrol;
state_vars->control_systemv354_out_0_[22] = btovalve3_remotecontrol;
state_vars->control_systemv354_out_0_[23] = btovalve4_remotecontrol;
state_vars->control_systemv354_out_0_[24] = btovalve5_remotecontrol;
state_vars->control_systemv354_out_0_[25] = btovalve6_remotecontrol;
state_vars->control_systemv354_out_0_[26] = btovalve7_remotecontrol;
state_vars->control_systemv354_out_0_[27] = btovalve8_remotecontrol;
state_vars->control_systemv354_out_0_[28] = san1valve1_remotecontrol;
state_vars->control_systemv354_out_0_[29] = san1valve2_remotecontrol;
state_vars->control_systemv354_out_0_[30] = san2valve1_remotecontrol;
state_vars->control_systemv354_out_0_[31] = san2valve2_remotecontrol;
state_vars->control_systemv354_out_0_[32] = san3valve1_remotecontrol;
state_vars->control_systemv354_out_0_[33] = san3valve2_remotecontrol;
state_vars->control_systemv354_out_0_[34] = san4valve1_remotecontrol;
state_vars->control_systemv354_out_0_[35] = san4valve2_remotecontrol;
state_vars->control_systemv354_out_0_[36] = san5valve1_remotecontrol;
state_vars->control_systemv354_out_0_[37] = san5valve2_remotecontrol;
state_vars->control_systemv354_out_0_[38] = san6valve1_remotecontrol;
state_vars->control_systemv354_out_0_[39] = san6valve2_remotecontrol;
state_vars->control_systemv354_out_0_[40] = san7valve1_remotecontrol;
state_vars->control_systemv354_out_0_[41] = san7valve2_remotecontrol;
state_vars->control_systemv354_out_0_[42] = san8valve1_remotecontrol;
state_vars->control_systemv354_out_0_[43] = san8valve2_remotecontrol;
state_vars->control_systemv354_out_0_[44] = ks1valve1_remotecontrol;
state_vars->control_systemv354_out_0_[45] = ks1valve2_remotecontrol;
state_vars->control_systemv354_out_0_[46] = ks1valve3_remotecontrol;
state_vars->control_systemv354_out_0_[47] = ks2valve1_remotecontrol;
state_vars->control_systemv354_out_0_[48] = ks2valve2_remotecontrol;
state_vars->control_systemv354_out_0_[49] = ks2valve3_remotecontrol;
state_vars->control_systemv354_out_0_[50] = ks3valve1_remotecontrol;
state_vars->control_systemv354_out_0_[51] = ks3valve2_remotecontrol;
state_vars->control_systemv354_out_0_[52] = ks3valve3_remotecontrol;
state_vars->control_systemv354_out_0_[53] = ks4valve1_remotecontrol;
state_vars->control_systemv354_out_0_[54] = ks4valve2_remotecontrol;
state_vars->control_systemv354_out_0_[55] = ks4valve3_remotecontrol;
state_vars->control_systemv354_out_0_[56] = ks5valve1_remotecontrol;
state_vars->control_systemv354_out_0_[57] = ks5valve2_remotecontrol;
state_vars->control_systemv354_out_0_[58] = ks5valve3_remotecontrol;
state_vars->control_systemv354_out_0_[59] = ks6valve1_remotecontrol;
state_vars->control_systemv354_out_0_[60] = ks6valve2_remotecontrol;
state_vars->control_systemv354_out_0_[61] = ks6valve3_remotecontrol;
state_vars->control_systemv354_out_0_[62] = ks7valve1_remotecontrol;
state_vars->control_systemv354_out_0_[63] = ks7valve2_remotecontrol;
state_vars->control_systemv354_out_0_[64] = ks7valve3_remotecontrol;
state_vars->control_systemv354_out_0_[65] = ks8valve1_remotecontrol;
state_vars->control_systemv354_out_0_[66] = ks8valve2_remotecontrol;
state_vars->control_systemv354_out_0_[67] = ks8valve3_remotecontrol;

/* Index=355
   UID=355
   GeneratorClassName=TOneImpulse_On
   Name=Macro161.Macro153.ImpulseOn6
   Type=Импульс по фронту */

for(i=0;i<68;i++){
u_s = state_vars->control_systemv355_trigger_[i];
f = state_vars->control_systemv354_out_0_[i];
if(!f){u_s = 0;};
if(f && (!u_s)){
u_s = 1;
state_vars->control_systemv355_out_0_[i] = 1;
}else{
state_vars->control_systemv355_out_0_[i] = 0;
};
if(action==f_GoodStep){
state_vars->control_systemv355_trigger_[i] = u_s;
};

/* Index=358
   UID=358
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader36
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv358_out_0_[0] = maincomp1_gnom;
state_vars->control_systemv358_out_0_[1] = maincomp2_gnom;
state_vars->control_systemv358_out_0_[2] = additcomp1_gnom;
state_vars->control_systemv358_out_0_[3] = additcomp2_gnom;

/* Index=359
   UID=359
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader20
   Type=Чтение из списка сигналов */

state_vars->control_systemv359_out_0_[0] = maincomp1_remotecontrol;
state_vars->control_systemv359_out_0_[1] = maincomp2_remotecontrol;
state_vars->control_systemv359_out_0_[2] = additcomp1_remotecontrol;
state_vars->control_systemv359_out_0_[3] = additcomp2_remotecontrol;

/* Index=360
   UID=360
   GeneratorClassName=TOneImpulse_On
   Name=Macro161.Macro154.ImpulseOn7
   Type=Импульс по фронту */

for(i=0;i<4;i++){
u_s = state_vars->control_systemv360_trigger_[i];
f = state_vars->control_systemv359_out_0_[i];
if(!f){u_s = 0;};
if(f && (!u_s)){
u_s = 1;
state_vars->control_systemv360_out_0_[i] = 1;
}else{
state_vars->control_systemv360_out_0_[i] = 0;
};
if(action==f_GoodStep){
state_vars->control_systemv360_trigger_[i] = u_s;
};

/* Index=361
   UID=361
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader21
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv361_out_0_[0] = maincomp1_remotecontrol;
state_vars->control_systemv361_out_0_[1] = maincomp2_remotecontrol;
state_vars->control_systemv361_out_0_[2] = additcomp1_remotecontrol;
state_vars->control_systemv361_out_0_[3] = additcomp2_remotecontrol;

/* Index=362
   UID=362
   GeneratorClassName=TOneImpulse_On
   Name=Macro161.Macro154.ImpulseOn8
   Type=Импульс по фронту */

for(i=0;i<4;i++){
u_s = state_vars->control_systemv362_trigger_[i];
f = state_vars->control_systemv361_out_0_[i];
if(!f){u_s = 0;};
if(f && (!u_s)){
u_s = 1;
state_vars->control_systemv362_out_0_[i] = 1;
}else{
state_vars->control_systemv362_out_0_[i] = 0;
};
if(action==f_GoodStep){
state_vars->control_systemv362_trigger_[i] = u_s;
};

/* Index=372
   UID=372
   GeneratorClassName=TSignalWriter
   Name=Macro161.Macro155.ALG20
   Type=Выход алгоритма */

};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(locals->control_systemv336_out_0_)){
 pressureactual_sup = locals->control_systemv336_out_0_;
};
if(isfinite(control_systemv369_out_0)){
 pressuredisplayed_sup = control_systemv369_out_0;
};
if(isfinite(control_systemv370_out_0)){
 pressuredisplayed_but1 = control_systemv370_out_0;
};
if(isfinite(control_systemv371_out_0)){
 pressuredisplayed_but2 = control_systemv371_out_0;
};

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

};
if(state_vars->control_systemv330_out_0_){

/* Index=373
   UID=373
   GeneratorClassName=TSignalReader
   Name=Macro159.Macro6.Macro162.Signal_Block20
   Type=Вход алгоритма */

state_vars->control_systemv373_out_0_ = pressuredisplayed_sup;

/* Index=374
   UID=374
   GeneratorClassName=TSignalReader
   Name=Macro159.Macro6.Macro161.Signal_Block20
   Type=Вход алгоритма */

state_vars->control_systemv374_out_0_ = pressuredisplayed_sup;

/* Index=375
   UID=375
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro6.Macro161.GT8
   Type=Операция БОЛЬШЕ */

state_vars->control_systemv375_out_0_ = state_vars->control_systemv374_out_0_ > consts->control_systemv132_a_;

/* Index=376
   UID=376
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro161.ALG24
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv213_a_)){
 san1valve1_remoteallowed = (consts->control_systemv213_a_ > 0.5);
};
 san1valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv214_a_)){
 san1valve2_remoteallowed = (consts->control_systemv214_a_ > 0.5);
};
 san1valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv227_a_)){
 san2valve1_remoteallowed = (consts->control_systemv227_a_ > 0.5);
};
 san2valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv228_a_)){
 san2valve2_remoteallowed = (consts->control_systemv228_a_ > 0.5);
};
 san2valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv229_a_)){
 san3valve1_remoteallowed = (consts->control_systemv229_a_ > 0.5);
};
 san3valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv230_a_)){
 san3valve2_remoteallowed = (consts->control_systemv230_a_ > 0.5);
};
 san3valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv231_a_)){
 san4valve1_remoteallowed = (consts->control_systemv231_a_ > 0.5);
};
 san4valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv232_a_)){
 san4valve2_remoteallowed = (consts->control_systemv232_a_ > 0.5);
};
 san4valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv233_a_)){
 san5valve1_remoteallowed = (consts->control_systemv233_a_ > 0.5);
};
 san5valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv234_a_)){
 san5valve2_remoteallowed = (consts->control_systemv234_a_ > 0.5);
};
 san5valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv235_a_)){
 san6valve1_remoteallowed = (consts->control_systemv235_a_ > 0.5);
};
 san6valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv236_a_)){
 san6valve2_remoteallowed = (consts->control_systemv236_a_ > 0.5);
};
 san6valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv237_a_)){
 san7valve1_remoteallowed = (consts->control_systemv237_a_ > 0.5);
};
 san7valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv238_a_)){
 san7valve2_remoteallowed = (consts->control_systemv238_a_ > 0.5);
};
 san7valve2_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv239_a_)){
 san8valve1_remoteallowed = (consts->control_systemv239_a_ > 0.5);
};
 san8valve1_autocontrol = state_vars->control_systemv375_out_0_;
if(isfinite(consts->control_systemv240_a_)){
 san8valve2_remoteallowed = (consts->control_systemv240_a_ > 0.5);
};
 san8valve2_autocontrol = state_vars->control_systemv375_out_0_;

};
};

/* Index=377
   UID=377
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader7
   Type=Чтение из списка сигналов */

state_vars->control_systemv377_out_0_[0] = kskvalve1_remoteallowed;
state_vars->control_systemv377_out_0_[1] = kskvalve2_remoteallowed;
state_vars->control_systemv377_out_0_[2] = kskvalve3_remoteallowed;
state_vars->control_systemv377_out_0_[3] = kskvalve4_remoteallowed;
state_vars->control_systemv377_out_0_[4] = kpovalve1_remoteallowed;
state_vars->control_systemv377_out_0_[5] = kpovalve2_remoteallowed;
state_vars->control_systemv377_out_0_[6] = kpovalve3_remoteallowed;
state_vars->control_systemv377_out_0_[7] = kpovalve4_remoteallowed;
state_vars->control_systemv377_out_0_[8] = brsvalve1_remoteallowed;
state_vars->control_systemv377_out_0_[9] = brsvalve2_remoteallowed;
state_vars->control_systemv377_out_0_[10] = bosvvalve1_remoteallowed;
state_vars->control_systemv377_out_0_[11] = bosvvalve2_remoteallowed;
state_vars->control_systemv377_out_0_[12] = bosvvalve3_remoteallowed;
state_vars->control_systemv377_out_0_[13] = bosvvalve4_remoteallowed;
state_vars->control_systemv377_out_0_[14] = ko2valve1_remoteallowed;
state_vars->control_systemv377_out_0_[15] = ko2valve2_remoteallowed;
state_vars->control_systemv377_out_0_[16] = but1valve1_remoteallowed;
state_vars->control_systemv377_out_0_[17] = but1valve2_remoteallowed;
state_vars->control_systemv377_out_0_[18] = but2valve1_remoteallowed;
state_vars->control_systemv377_out_0_[19] = but2valve2_remoteallowed;
state_vars->control_systemv377_out_0_[20] = btovalve1_remoteallowed;
state_vars->control_systemv377_out_0_[21] = btovalve2_remoteallowed;
state_vars->control_systemv377_out_0_[22] = btovalve3_remoteallowed;
state_vars->control_systemv377_out_0_[23] = btovalve4_remoteallowed;
state_vars->control_systemv377_out_0_[24] = btovalve5_remoteallowed;
state_vars->control_systemv377_out_0_[25] = btovalve6_remoteallowed;
state_vars->control_systemv377_out_0_[26] = btovalve7_remoteallowed;
state_vars->control_systemv377_out_0_[27] = btovalve8_remoteallowed;
state_vars->control_systemv377_out_0_[28] = san1valve1_remoteallowed;
state_vars->control_systemv377_out_0_[29] = san1valve2_remoteallowed;
state_vars->control_systemv377_out_0_[30] = san2valve1_remoteallowed;
state_vars->control_systemv377_out_0_[31] = san2valve2_remoteallowed;
state_vars->control_systemv377_out_0_[32] = san3valve1_remoteallowed;
state_vars->control_systemv377_out_0_[33] = san3valve2_remoteallowed;
state_vars->control_systemv377_out_0_[34] = san4valve1_remoteallowed;
state_vars->control_systemv377_out_0_[35] = san4valve2_remoteallowed;
state_vars->control_systemv377_out_0_[36] = san5valve1_remoteallowed;
state_vars->control_systemv377_out_0_[37] = san5valve2_remoteallowed;
state_vars->control_systemv377_out_0_[38] = san6valve1_remoteallowed;
state_vars->control_systemv377_out_0_[39] = san6valve2_remoteallowed;
state_vars->control_systemv377_out_0_[40] = san7valve1_remoteallowed;
state_vars->control_systemv377_out_0_[41] = san7valve2_remoteallowed;
state_vars->control_systemv377_out_0_[42] = san8valve1_remoteallowed;
state_vars->control_systemv377_out_0_[43] = san8valve2_remoteallowed;
state_vars->control_systemv377_out_0_[44] = ks1valve1_remoteallowed;
state_vars->control_systemv377_out_0_[45] = ks1valve2_remoteallowed;
state_vars->control_systemv377_out_0_[46] = ks1valve3_remoteallowed;
state_vars->control_systemv377_out_0_[47] = ks2valve1_remoteallowed;
state_vars->control_systemv377_out_0_[48] = ks2valve2_remoteallowed;
state_vars->control_systemv377_out_0_[49] = ks2valve3_remoteallowed;
state_vars->control_systemv377_out_0_[50] = ks3valve1_remoteallowed;
state_vars->control_systemv377_out_0_[51] = ks3valve2_remoteallowed;
state_vars->control_systemv377_out_0_[52] = ks3valve3_remoteallowed;
state_vars->control_systemv377_out_0_[53] = ks4valve1_remoteallowed;
state_vars->control_systemv377_out_0_[54] = ks4valve2_remoteallowed;
state_vars->control_systemv377_out_0_[55] = ks4valve3_remoteallowed;
state_vars->control_systemv377_out_0_[56] = ks5valve1_remoteallowed;
state_vars->control_systemv377_out_0_[57] = ks5valve2_remoteallowed;
state_vars->control_systemv377_out_0_[58] = ks5valve3_remoteallowed;
state_vars->control_systemv377_out_0_[59] = ks6valve1_remoteallowed;
state_vars->control_systemv377_out_0_[60] = ks6valve2_remoteallowed;
state_vars->control_systemv377_out_0_[61] = ks6valve3_remoteallowed;
state_vars->control_systemv377_out_0_[62] = ks7valve1_remoteallowed;
state_vars->control_systemv377_out_0_[63] = ks7valve2_remoteallowed;
state_vars->control_systemv377_out_0_[64] = ks7valve3_remoteallowed;
state_vars->control_systemv377_out_0_[65] = ks8valve1_remoteallowed;
state_vars->control_systemv377_out_0_[66] = ks8valve2_remoteallowed;
state_vars->control_systemv377_out_0_[67] = ks8valve3_remoteallowed;

/* Index=378
   UID=378
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader15
   Type=Чтение из списка сигналов */

state_vars->control_systemv378_out_0_[0] = kskvalve1_autocontrol;
state_vars->control_systemv378_out_0_[1] = kskvalve2_autocontrol;
state_vars->control_systemv378_out_0_[2] = kskvalve3_autocontrol;
state_vars->control_systemv378_out_0_[3] = kskvalve4_autocontrol;
state_vars->control_systemv378_out_0_[4] = kpovalve1_autocontrol;
state_vars->control_systemv378_out_0_[5] = kpovalve2_autocontrol;
state_vars->control_systemv378_out_0_[6] = kpovalve3_autocontrol;
state_vars->control_systemv378_out_0_[7] = kpovalve4_autocontrol;
state_vars->control_systemv378_out_0_[8] = brsvalve1_autocontrol;
state_vars->control_systemv378_out_0_[9] = brsvalve2_autocontrol;
state_vars->control_systemv378_out_0_[10] = bosvvalve1_autocontrol;
state_vars->control_systemv378_out_0_[11] = bosvvalve2_autocontrol;
state_vars->control_systemv378_out_0_[12] = bosvvalve3_autocontrol;
state_vars->control_systemv378_out_0_[13] = bosvvalve4_autocontrol;
state_vars->control_systemv378_out_0_[14] = ko2valve1_autocontrol;
state_vars->control_systemv378_out_0_[15] = ko2valve2_autocontrol;
state_vars->control_systemv378_out_0_[16] = but1valve1_autocontrol;
state_vars->control_systemv378_out_0_[17] = but1valve2_autocontrol;
state_vars->control_systemv378_out_0_[18] = but2valve1_autocontrol;
state_vars->control_systemv378_out_0_[19] = but2valve2_autocontrol;
state_vars->control_systemv378_out_0_[20] = btovalve1_autocontrol;
state_vars->control_systemv378_out_0_[21] = btovalve2_autocontrol;
state_vars->control_systemv378_out_0_[22] = btovalve3_autocontrol;
state_vars->control_systemv378_out_0_[23] = btovalve4_autocontrol;
state_vars->control_systemv378_out_0_[24] = btovalve5_autocontrol;
state_vars->control_systemv378_out_0_[25] = btovalve6_autocontrol;
state_vars->control_systemv378_out_0_[26] = btovalve7_autocontrol;
state_vars->control_systemv378_out_0_[27] = btovalve8_autocontrol;
state_vars->control_systemv378_out_0_[28] = san1valve1_autocontrol;
state_vars->control_systemv378_out_0_[29] = san1valve2_autocontrol;
state_vars->control_systemv378_out_0_[30] = san2valve1_autocontrol;
state_vars->control_systemv378_out_0_[31] = san2valve2_autocontrol;
state_vars->control_systemv378_out_0_[32] = san3valve1_autocontrol;
state_vars->control_systemv378_out_0_[33] = san3valve2_autocontrol;
state_vars->control_systemv378_out_0_[34] = san4valve1_autocontrol;
state_vars->control_systemv378_out_0_[35] = san4valve2_autocontrol;
state_vars->control_systemv378_out_0_[36] = san5valve1_autocontrol;
state_vars->control_systemv378_out_0_[37] = san5valve2_autocontrol;
state_vars->control_systemv378_out_0_[38] = san6valve1_autocontrol;
state_vars->control_systemv378_out_0_[39] = san6valve2_autocontrol;
state_vars->control_systemv378_out_0_[40] = san7valve1_autocontrol;
state_vars->control_systemv378_out_0_[41] = san7valve2_autocontrol;
state_vars->control_systemv378_out_0_[42] = san8valve1_autocontrol;
state_vars->control_systemv378_out_0_[43] = san8valve2_autocontrol;
state_vars->control_systemv378_out_0_[44] = ks1valve1_autocontrol;
state_vars->control_systemv378_out_0_[45] = ks1valve2_autocontrol;
state_vars->control_systemv378_out_0_[46] = ks1valve3_autocontrol;
state_vars->control_systemv378_out_0_[47] = ks2valve1_autocontrol;
state_vars->control_systemv378_out_0_[48] = ks2valve2_autocontrol;
state_vars->control_systemv378_out_0_[49] = ks2valve3_autocontrol;
state_vars->control_systemv378_out_0_[50] = ks3valve1_autocontrol;
state_vars->control_systemv378_out_0_[51] = ks3valve2_autocontrol;
state_vars->control_systemv378_out_0_[52] = ks3valve3_autocontrol;
state_vars->control_systemv378_out_0_[53] = ks4valve1_autocontrol;
state_vars->control_systemv378_out_0_[54] = ks4valve2_autocontrol;
state_vars->control_systemv378_out_0_[55] = ks4valve3_autocontrol;
state_vars->control_systemv378_out_0_[56] = ks5valve1_autocontrol;
state_vars->control_systemv378_out_0_[57] = ks5valve2_autocontrol;
state_vars->control_systemv378_out_0_[58] = ks5valve3_autocontrol;
state_vars->control_systemv378_out_0_[59] = ks6valve1_autocontrol;
state_vars->control_systemv378_out_0_[60] = ks6valve2_autocontrol;
state_vars->control_systemv378_out_0_[61] = ks6valve3_autocontrol;
state_vars->control_systemv378_out_0_[62] = ks7valve1_autocontrol;
state_vars->control_systemv378_out_0_[63] = ks7valve2_autocontrol;
state_vars->control_systemv378_out_0_[64] = ks7valve3_autocontrol;
state_vars->control_systemv378_out_0_[65] = ks8valve1_autocontrol;
state_vars->control_systemv378_out_0_[66] = ks8valve2_autocontrol;
state_vars->control_systemv378_out_0_[67] = ks8valve3_autocontrol;

/* Index=379
   UID=379
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And11
   Type=Оператор И */

for(i=0;i<68;i++){
locals->control_systemv379_out_0_[i] = (!state_vars->control_systemv377_out_0_[i]) && state_vars->control_systemv378_out_0_[i];

/* Index=380
   UID=380
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And15
   Type=Оператор И */

locals->control_systemv380_out_0_[i] = state_vars->control_systemv355_out_0_[i] && (state_vars->control_systemv366_out_0_[i] > 0.5);

/* Index=381
   UID=381
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader6
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv381_out_0_[0] = kskvalve1_remoteallowed;
state_vars->control_systemv381_out_0_[1] = kskvalve2_remoteallowed;
state_vars->control_systemv381_out_0_[2] = kskvalve3_remoteallowed;
state_vars->control_systemv381_out_0_[3] = kskvalve4_remoteallowed;
state_vars->control_systemv381_out_0_[4] = kpovalve1_remoteallowed;
state_vars->control_systemv381_out_0_[5] = kpovalve2_remoteallowed;
state_vars->control_systemv381_out_0_[6] = kpovalve3_remoteallowed;
state_vars->control_systemv381_out_0_[7] = kpovalve4_remoteallowed;
state_vars->control_systemv381_out_0_[8] = brsvalve1_remoteallowed;
state_vars->control_systemv381_out_0_[9] = brsvalve2_remoteallowed;
state_vars->control_systemv381_out_0_[10] = bosvvalve1_remoteallowed;
state_vars->control_systemv381_out_0_[11] = bosvvalve2_remoteallowed;
state_vars->control_systemv381_out_0_[12] = bosvvalve3_remoteallowed;
state_vars->control_systemv381_out_0_[13] = bosvvalve4_remoteallowed;
state_vars->control_systemv381_out_0_[14] = ko2valve1_remoteallowed;
state_vars->control_systemv381_out_0_[15] = ko2valve2_remoteallowed;
state_vars->control_systemv381_out_0_[16] = but1valve1_remoteallowed;
state_vars->control_systemv381_out_0_[17] = but1valve2_remoteallowed;
state_vars->control_systemv381_out_0_[18] = but2valve1_remoteallowed;
state_vars->control_systemv381_out_0_[19] = but2valve2_remoteallowed;
state_vars->control_systemv381_out_0_[20] = btovalve1_remoteallowed;
state_vars->control_systemv381_out_0_[21] = btovalve2_remoteallowed;
state_vars->control_systemv381_out_0_[22] = btovalve3_remoteallowed;
state_vars->control_systemv381_out_0_[23] = btovalve4_remoteallowed;
state_vars->control_systemv381_out_0_[24] = btovalve5_remoteallowed;
state_vars->control_systemv381_out_0_[25] = btovalve6_remoteallowed;
state_vars->control_systemv381_out_0_[26] = btovalve7_remoteallowed;
state_vars->control_systemv381_out_0_[27] = btovalve8_remoteallowed;
state_vars->control_systemv381_out_0_[28] = san1valve1_remoteallowed;
state_vars->control_systemv381_out_0_[29] = san1valve2_remoteallowed;
state_vars->control_systemv381_out_0_[30] = san2valve1_remoteallowed;
state_vars->control_systemv381_out_0_[31] = san2valve2_remoteallowed;
state_vars->control_systemv381_out_0_[32] = san3valve1_remoteallowed;
state_vars->control_systemv381_out_0_[33] = san3valve2_remoteallowed;
state_vars->control_systemv381_out_0_[34] = san4valve1_remoteallowed;
state_vars->control_systemv381_out_0_[35] = san4valve2_remoteallowed;
state_vars->control_systemv381_out_0_[36] = san5valve1_remoteallowed;
state_vars->control_systemv381_out_0_[37] = san5valve2_remoteallowed;
state_vars->control_systemv381_out_0_[38] = san6valve1_remoteallowed;
state_vars->control_systemv381_out_0_[39] = san6valve2_remoteallowed;
state_vars->control_systemv381_out_0_[40] = san7valve1_remoteallowed;
state_vars->control_systemv381_out_0_[41] = san7valve2_remoteallowed;
state_vars->control_systemv381_out_0_[42] = san8valve1_remoteallowed;
state_vars->control_systemv381_out_0_[43] = san8valve2_remoteallowed;
state_vars->control_systemv381_out_0_[44] = ks1valve1_remoteallowed;
state_vars->control_systemv381_out_0_[45] = ks1valve2_remoteallowed;
state_vars->control_systemv381_out_0_[46] = ks1valve3_remoteallowed;
state_vars->control_systemv381_out_0_[47] = ks2valve1_remoteallowed;
state_vars->control_systemv381_out_0_[48] = ks2valve2_remoteallowed;
state_vars->control_systemv381_out_0_[49] = ks2valve3_remoteallowed;
state_vars->control_systemv381_out_0_[50] = ks3valve1_remoteallowed;
state_vars->control_systemv381_out_0_[51] = ks3valve2_remoteallowed;
state_vars->control_systemv381_out_0_[52] = ks3valve3_remoteallowed;
state_vars->control_systemv381_out_0_[53] = ks4valve1_remoteallowed;
state_vars->control_systemv381_out_0_[54] = ks4valve2_remoteallowed;
state_vars->control_systemv381_out_0_[55] = ks4valve3_remoteallowed;
state_vars->control_systemv381_out_0_[56] = ks5valve1_remoteallowed;
state_vars->control_systemv381_out_0_[57] = ks5valve2_remoteallowed;
state_vars->control_systemv381_out_0_[58] = ks5valve3_remoteallowed;
state_vars->control_systemv381_out_0_[59] = ks6valve1_remoteallowed;
state_vars->control_systemv381_out_0_[60] = ks6valve2_remoteallowed;
state_vars->control_systemv381_out_0_[61] = ks6valve3_remoteallowed;
state_vars->control_systemv381_out_0_[62] = ks7valve1_remoteallowed;
state_vars->control_systemv381_out_0_[63] = ks7valve2_remoteallowed;
state_vars->control_systemv381_out_0_[64] = ks7valve3_remoteallowed;
state_vars->control_systemv381_out_0_[65] = ks8valve1_remoteallowed;
state_vars->control_systemv381_out_0_[66] = ks8valve2_remoteallowed;
state_vars->control_systemv381_out_0_[67] = ks8valve3_remoteallowed;

/* Index=382
   UID=382
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader8
   Type=Чтение из списка сигналов */

state_vars->control_systemv382_out_0_[0] = kskvalve1_remoteallowed;
state_vars->control_systemv382_out_0_[1] = kskvalve2_remoteallowed;
state_vars->control_systemv382_out_0_[2] = kskvalve3_remoteallowed;
state_vars->control_systemv382_out_0_[3] = kskvalve4_remoteallowed;
state_vars->control_systemv382_out_0_[4] = kpovalve1_remoteallowed;
state_vars->control_systemv382_out_0_[5] = kpovalve2_remoteallowed;
state_vars->control_systemv382_out_0_[6] = kpovalve3_remoteallowed;
state_vars->control_systemv382_out_0_[7] = kpovalve4_remoteallowed;
state_vars->control_systemv382_out_0_[8] = brsvalve1_remoteallowed;
state_vars->control_systemv382_out_0_[9] = brsvalve2_remoteallowed;
state_vars->control_systemv382_out_0_[10] = bosvvalve1_remoteallowed;
state_vars->control_systemv382_out_0_[11] = bosvvalve2_remoteallowed;
state_vars->control_systemv382_out_0_[12] = bosvvalve3_remoteallowed;
state_vars->control_systemv382_out_0_[13] = bosvvalve4_remoteallowed;
state_vars->control_systemv382_out_0_[14] = ko2valve1_remoteallowed;
state_vars->control_systemv382_out_0_[15] = ko2valve2_remoteallowed;
state_vars->control_systemv382_out_0_[16] = but1valve1_remoteallowed;
state_vars->control_systemv382_out_0_[17] = but1valve2_remoteallowed;
state_vars->control_systemv382_out_0_[18] = but2valve1_remoteallowed;
state_vars->control_systemv382_out_0_[19] = but2valve2_remoteallowed;
state_vars->control_systemv382_out_0_[20] = btovalve1_remoteallowed;
state_vars->control_systemv382_out_0_[21] = btovalve2_remoteallowed;
state_vars->control_systemv382_out_0_[22] = btovalve3_remoteallowed;
state_vars->control_systemv382_out_0_[23] = btovalve4_remoteallowed;
state_vars->control_systemv382_out_0_[24] = btovalve5_remoteallowed;
state_vars->control_systemv382_out_0_[25] = btovalve6_remoteallowed;
state_vars->control_systemv382_out_0_[26] = btovalve7_remoteallowed;
state_vars->control_systemv382_out_0_[27] = btovalve8_remoteallowed;
state_vars->control_systemv382_out_0_[28] = san1valve1_remoteallowed;
state_vars->control_systemv382_out_0_[29] = san1valve2_remoteallowed;
state_vars->control_systemv382_out_0_[30] = san2valve1_remoteallowed;
state_vars->control_systemv382_out_0_[31] = san2valve2_remoteallowed;
state_vars->control_systemv382_out_0_[32] = san3valve1_remoteallowed;
state_vars->control_systemv382_out_0_[33] = san3valve2_remoteallowed;
state_vars->control_systemv382_out_0_[34] = san4valve1_remoteallowed;
state_vars->control_systemv382_out_0_[35] = san4valve2_remoteallowed;
state_vars->control_systemv382_out_0_[36] = san5valve1_remoteallowed;
state_vars->control_systemv382_out_0_[37] = san5valve2_remoteallowed;
state_vars->control_systemv382_out_0_[38] = san6valve1_remoteallowed;
state_vars->control_systemv382_out_0_[39] = san6valve2_remoteallowed;
state_vars->control_systemv382_out_0_[40] = san7valve1_remoteallowed;
state_vars->control_systemv382_out_0_[41] = san7valve2_remoteallowed;
state_vars->control_systemv382_out_0_[42] = san8valve1_remoteallowed;
state_vars->control_systemv382_out_0_[43] = san8valve2_remoteallowed;
state_vars->control_systemv382_out_0_[44] = ks1valve1_remoteallowed;
state_vars->control_systemv382_out_0_[45] = ks1valve2_remoteallowed;
state_vars->control_systemv382_out_0_[46] = ks1valve3_remoteallowed;
state_vars->control_systemv382_out_0_[47] = ks2valve1_remoteallowed;
state_vars->control_systemv382_out_0_[48] = ks2valve2_remoteallowed;
state_vars->control_systemv382_out_0_[49] = ks2valve3_remoteallowed;
state_vars->control_systemv382_out_0_[50] = ks3valve1_remoteallowed;
state_vars->control_systemv382_out_0_[51] = ks3valve2_remoteallowed;
state_vars->control_systemv382_out_0_[52] = ks3valve3_remoteallowed;
state_vars->control_systemv382_out_0_[53] = ks4valve1_remoteallowed;
state_vars->control_systemv382_out_0_[54] = ks4valve2_remoteallowed;
state_vars->control_systemv382_out_0_[55] = ks4valve3_remoteallowed;
state_vars->control_systemv382_out_0_[56] = ks5valve1_remoteallowed;
state_vars->control_systemv382_out_0_[57] = ks5valve2_remoteallowed;
state_vars->control_systemv382_out_0_[58] = ks5valve3_remoteallowed;
state_vars->control_systemv382_out_0_[59] = ks6valve1_remoteallowed;
state_vars->control_systemv382_out_0_[60] = ks6valve2_remoteallowed;
state_vars->control_systemv382_out_0_[61] = ks6valve3_remoteallowed;
state_vars->control_systemv382_out_0_[62] = ks7valve1_remoteallowed;
state_vars->control_systemv382_out_0_[63] = ks7valve2_remoteallowed;
state_vars->control_systemv382_out_0_[64] = ks7valve3_remoteallowed;
state_vars->control_systemv382_out_0_[65] = ks8valve1_remoteallowed;
state_vars->control_systemv382_out_0_[66] = ks8valve2_remoteallowed;
state_vars->control_systemv382_out_0_[67] = ks8valve3_remoteallowed;

/* Index=383
   UID=383
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader9
   Type=Чтение из списка сигналов */

state_vars->control_systemv383_out_0_[0] = kskvalve1_remoteallowed;
state_vars->control_systemv383_out_0_[1] = kskvalve2_remoteallowed;
state_vars->control_systemv383_out_0_[2] = kskvalve3_remoteallowed;
state_vars->control_systemv383_out_0_[3] = kskvalve4_remoteallowed;
state_vars->control_systemv383_out_0_[4] = kpovalve1_remoteallowed;
state_vars->control_systemv383_out_0_[5] = kpovalve2_remoteallowed;
state_vars->control_systemv383_out_0_[6] = kpovalve3_remoteallowed;
state_vars->control_systemv383_out_0_[7] = kpovalve4_remoteallowed;
state_vars->control_systemv383_out_0_[8] = brsvalve1_remoteallowed;
state_vars->control_systemv383_out_0_[9] = brsvalve2_remoteallowed;
state_vars->control_systemv383_out_0_[10] = bosvvalve1_remoteallowed;
state_vars->control_systemv383_out_0_[11] = bosvvalve2_remoteallowed;
state_vars->control_systemv383_out_0_[12] = bosvvalve3_remoteallowed;
state_vars->control_systemv383_out_0_[13] = bosvvalve4_remoteallowed;
state_vars->control_systemv383_out_0_[14] = ko2valve1_remoteallowed;
state_vars->control_systemv383_out_0_[15] = ko2valve2_remoteallowed;
state_vars->control_systemv383_out_0_[16] = but1valve1_remoteallowed;
state_vars->control_systemv383_out_0_[17] = but1valve2_remoteallowed;
state_vars->control_systemv383_out_0_[18] = but2valve1_remoteallowed;
state_vars->control_systemv383_out_0_[19] = but2valve2_remoteallowed;
state_vars->control_systemv383_out_0_[20] = btovalve1_remoteallowed;
state_vars->control_systemv383_out_0_[21] = btovalve2_remoteallowed;
state_vars->control_systemv383_out_0_[22] = btovalve3_remoteallowed;
state_vars->control_systemv383_out_0_[23] = btovalve4_remoteallowed;
state_vars->control_systemv383_out_0_[24] = btovalve5_remoteallowed;
state_vars->control_systemv383_out_0_[25] = btovalve6_remoteallowed;
state_vars->control_systemv383_out_0_[26] = btovalve7_remoteallowed;
state_vars->control_systemv383_out_0_[27] = btovalve8_remoteallowed;
state_vars->control_systemv383_out_0_[28] = san1valve1_remoteallowed;
state_vars->control_systemv383_out_0_[29] = san1valve2_remoteallowed;
state_vars->control_systemv383_out_0_[30] = san2valve1_remoteallowed;
state_vars->control_systemv383_out_0_[31] = san2valve2_remoteallowed;
state_vars->control_systemv383_out_0_[32] = san3valve1_remoteallowed;
state_vars->control_systemv383_out_0_[33] = san3valve2_remoteallowed;
state_vars->control_systemv383_out_0_[34] = san4valve1_remoteallowed;
state_vars->control_systemv383_out_0_[35] = san4valve2_remoteallowed;
state_vars->control_systemv383_out_0_[36] = san5valve1_remoteallowed;
state_vars->control_systemv383_out_0_[37] = san5valve2_remoteallowed;
state_vars->control_systemv383_out_0_[38] = san6valve1_remoteallowed;
state_vars->control_systemv383_out_0_[39] = san6valve2_remoteallowed;
state_vars->control_systemv383_out_0_[40] = san7valve1_remoteallowed;
state_vars->control_systemv383_out_0_[41] = san7valve2_remoteallowed;
state_vars->control_systemv383_out_0_[42] = san8valve1_remoteallowed;
state_vars->control_systemv383_out_0_[43] = san8valve2_remoteallowed;
state_vars->control_systemv383_out_0_[44] = ks1valve1_remoteallowed;
state_vars->control_systemv383_out_0_[45] = ks1valve2_remoteallowed;
state_vars->control_systemv383_out_0_[46] = ks1valve3_remoteallowed;
state_vars->control_systemv383_out_0_[47] = ks2valve1_remoteallowed;
state_vars->control_systemv383_out_0_[48] = ks2valve2_remoteallowed;
state_vars->control_systemv383_out_0_[49] = ks2valve3_remoteallowed;
state_vars->control_systemv383_out_0_[50] = ks3valve1_remoteallowed;
state_vars->control_systemv383_out_0_[51] = ks3valve2_remoteallowed;
state_vars->control_systemv383_out_0_[52] = ks3valve3_remoteallowed;
state_vars->control_systemv383_out_0_[53] = ks4valve1_remoteallowed;
state_vars->control_systemv383_out_0_[54] = ks4valve2_remoteallowed;
state_vars->control_systemv383_out_0_[55] = ks4valve3_remoteallowed;
state_vars->control_systemv383_out_0_[56] = ks5valve1_remoteallowed;
state_vars->control_systemv383_out_0_[57] = ks5valve2_remoteallowed;
state_vars->control_systemv383_out_0_[58] = ks5valve3_remoteallowed;
state_vars->control_systemv383_out_0_[59] = ks6valve1_remoteallowed;
state_vars->control_systemv383_out_0_[60] = ks6valve2_remoteallowed;
state_vars->control_systemv383_out_0_[61] = ks6valve3_remoteallowed;
state_vars->control_systemv383_out_0_[62] = ks7valve1_remoteallowed;
state_vars->control_systemv383_out_0_[63] = ks7valve2_remoteallowed;
state_vars->control_systemv383_out_0_[64] = ks7valve3_remoteallowed;
state_vars->control_systemv383_out_0_[65] = ks8valve1_remoteallowed;
state_vars->control_systemv383_out_0_[66] = ks8valve2_remoteallowed;
state_vars->control_systemv383_out_0_[67] = ks8valve3_remoteallowed;

/* Index=330
   UID=330
   GeneratorClassName=TIfSection
   Name=Macro159.Macro6.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv330_out_0_){

/* Index=384
   UID=384
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro6.Macro162.LT14
   Type=Операция МЕНЬШЕ */

state_vars->control_systemv384_out_0_ = state_vars->control_systemv373_out_0_ < consts->control_systemv241_a_;

/* Index=385
   UID=385
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro6.Macro162.LT15
   Type=Операция МЕНЬШЕ */

state_vars->control_systemv385_out_0_ = state_vars->control_systemv373_out_0_ < consts->control_systemv242_a_;

/* Index=386
   UID=386
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro6.Macro162.LT16
   Type=Операция МЕНЬШЕ */

state_vars->control_systemv386_out_0_ = state_vars->control_systemv373_out_0_ < consts->control_systemv243_a_;

/* Index=387
   UID=387
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro6.Macro162.LT17
   Type=Операция МЕНЬШЕ */

state_vars->control_systemv387_out_0_ = state_vars->control_systemv373_out_0_ < consts->control_systemv244_a_;

/* Index=388
   UID=388
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro6.Macro162.ALG21
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv248_a_)){
 maincomp1_remoteallowed = (consts->control_systemv248_a_ > 0.5);
};
 maincomp1_autocontrol = state_vars->control_systemv384_out_0_;
if(isfinite(consts->control_systemv247_a_)){
 maincomp2_remoteallowed = (consts->control_systemv247_a_ > 0.5);
};
 maincomp2_autocontrol = state_vars->control_systemv385_out_0_;
if(isfinite(consts->control_systemv246_a_)){
 additcomp1_remoteallowed = (consts->control_systemv246_a_ > 0.5);
};
 additcomp1_autocontrol = state_vars->control_systemv386_out_0_;
if(isfinite(consts->control_systemv245_a_)){
 additcomp2_remoteallowed = (consts->control_systemv245_a_ > 0.5);
};
 additcomp2_autocontrol = state_vars->control_systemv387_out_0_;

};
};

/* Index=389
   UID=389
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And14
   Type=Оператор И */

for(i=0;i<68;i++){
locals->control_systemv389_out_0_[i] = state_vars->control_systemv353_out_0_[i] && (!(state_vars->control_systemv365_out_0_[i] > 0.5));

/* Index=390
   UID=390
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And10
   Type=Оператор И */

locals->control_systemv390_out_0_[i] = state_vars->control_systemv381_out_0_[i] && locals->control_systemv389_out_0_[i];

/* Index=391
   UID=391
   GeneratorClassName=TORSrc
   Name=Macro161.Macro153.Or10
   Type=Оператор ИЛИ */

locals->control_systemv391_out_0_[i] = locals->control_systemv390_out_0_[i] || locals->control_systemv379_out_0_[i];

/* Index=392
   UID=392
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And12
   Type=Оператор И */

locals->control_systemv392_out_0_[i] = state_vars->control_systemv382_out_0_[i] && locals->control_systemv380_out_0_[i];

/* Index=393
   UID=393
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader14
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv393_out_0_[0] = kskvalve1_autocontrol;
state_vars->control_systemv393_out_0_[1] = kskvalve2_autocontrol;
state_vars->control_systemv393_out_0_[2] = kskvalve3_autocontrol;
state_vars->control_systemv393_out_0_[3] = kskvalve4_autocontrol;
state_vars->control_systemv393_out_0_[4] = kpovalve1_autocontrol;
state_vars->control_systemv393_out_0_[5] = kpovalve2_autocontrol;
state_vars->control_systemv393_out_0_[6] = kpovalve3_autocontrol;
state_vars->control_systemv393_out_0_[7] = kpovalve4_autocontrol;
state_vars->control_systemv393_out_0_[8] = brsvalve1_autocontrol;
state_vars->control_systemv393_out_0_[9] = brsvalve2_autocontrol;
state_vars->control_systemv393_out_0_[10] = bosvvalve1_autocontrol;
state_vars->control_systemv393_out_0_[11] = bosvvalve2_autocontrol;
state_vars->control_systemv393_out_0_[12] = bosvvalve3_autocontrol;
state_vars->control_systemv393_out_0_[13] = bosvvalve4_autocontrol;
state_vars->control_systemv393_out_0_[14] = ko2valve1_autocontrol;
state_vars->control_systemv393_out_0_[15] = ko2valve2_autocontrol;
state_vars->control_systemv393_out_0_[16] = but1valve1_autocontrol;
state_vars->control_systemv393_out_0_[17] = but1valve2_autocontrol;
state_vars->control_systemv393_out_0_[18] = but2valve1_autocontrol;
state_vars->control_systemv393_out_0_[19] = but2valve2_autocontrol;
state_vars->control_systemv393_out_0_[20] = btovalve1_autocontrol;
state_vars->control_systemv393_out_0_[21] = btovalve2_autocontrol;
state_vars->control_systemv393_out_0_[22] = btovalve3_autocontrol;
state_vars->control_systemv393_out_0_[23] = btovalve4_autocontrol;
state_vars->control_systemv393_out_0_[24] = btovalve5_autocontrol;
state_vars->control_systemv393_out_0_[25] = btovalve6_autocontrol;
state_vars->control_systemv393_out_0_[26] = btovalve7_autocontrol;
state_vars->control_systemv393_out_0_[27] = btovalve8_autocontrol;
state_vars->control_systemv393_out_0_[28] = san1valve1_autocontrol;
state_vars->control_systemv393_out_0_[29] = san1valve2_autocontrol;
state_vars->control_systemv393_out_0_[30] = san2valve1_autocontrol;
state_vars->control_systemv393_out_0_[31] = san2valve2_autocontrol;
state_vars->control_systemv393_out_0_[32] = san3valve1_autocontrol;
state_vars->control_systemv393_out_0_[33] = san3valve2_autocontrol;
state_vars->control_systemv393_out_0_[34] = san4valve1_autocontrol;
state_vars->control_systemv393_out_0_[35] = san4valve2_autocontrol;
state_vars->control_systemv393_out_0_[36] = san5valve1_autocontrol;
state_vars->control_systemv393_out_0_[37] = san5valve2_autocontrol;
state_vars->control_systemv393_out_0_[38] = san6valve1_autocontrol;
state_vars->control_systemv393_out_0_[39] = san6valve2_autocontrol;
state_vars->control_systemv393_out_0_[40] = san7valve1_autocontrol;
state_vars->control_systemv393_out_0_[41] = san7valve2_autocontrol;
state_vars->control_systemv393_out_0_[42] = san8valve1_autocontrol;
state_vars->control_systemv393_out_0_[43] = san8valve2_autocontrol;
state_vars->control_systemv393_out_0_[44] = ks1valve1_autocontrol;
state_vars->control_systemv393_out_0_[45] = ks1valve2_autocontrol;
state_vars->control_systemv393_out_0_[46] = ks1valve3_autocontrol;
state_vars->control_systemv393_out_0_[47] = ks2valve1_autocontrol;
state_vars->control_systemv393_out_0_[48] = ks2valve2_autocontrol;
state_vars->control_systemv393_out_0_[49] = ks2valve3_autocontrol;
state_vars->control_systemv393_out_0_[50] = ks3valve1_autocontrol;
state_vars->control_systemv393_out_0_[51] = ks3valve2_autocontrol;
state_vars->control_systemv393_out_0_[52] = ks3valve3_autocontrol;
state_vars->control_systemv393_out_0_[53] = ks4valve1_autocontrol;
state_vars->control_systemv393_out_0_[54] = ks4valve2_autocontrol;
state_vars->control_systemv393_out_0_[55] = ks4valve3_autocontrol;
state_vars->control_systemv393_out_0_[56] = ks5valve1_autocontrol;
state_vars->control_systemv393_out_0_[57] = ks5valve2_autocontrol;
state_vars->control_systemv393_out_0_[58] = ks5valve3_autocontrol;
state_vars->control_systemv393_out_0_[59] = ks6valve1_autocontrol;
state_vars->control_systemv393_out_0_[60] = ks6valve2_autocontrol;
state_vars->control_systemv393_out_0_[61] = ks6valve3_autocontrol;
state_vars->control_systemv393_out_0_[62] = ks7valve1_autocontrol;
state_vars->control_systemv393_out_0_[63] = ks7valve2_autocontrol;
state_vars->control_systemv393_out_0_[64] = ks7valve3_autocontrol;
state_vars->control_systemv393_out_0_[65] = ks8valve1_autocontrol;
state_vars->control_systemv393_out_0_[66] = ks8valve2_autocontrol;
state_vars->control_systemv393_out_0_[67] = ks8valve3_autocontrol;

/* Index=394
   UID=394
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro153.And13
   Type=Оператор И */

for(i=0;i<68;i++){
locals->control_systemv394_out_0_[i] = (!state_vars->control_systemv383_out_0_[i]) && (!state_vars->control_systemv393_out_0_[i]);

/* Index=395
   UID=395
   GeneratorClassName=TORSrc
   Name=Macro161.Macro153.Or11
   Type=Оператор ИЛИ */

locals->control_systemv395_out_0_[i] = locals->control_systemv392_out_0_[i] || locals->control_systemv394_out_0_[i];

/* Index=396
   UID=396
   GeneratorClassName=TTrigger_R
   Name=Macro161.Macro153.Trigger_RS_1
   Type=RS-триггер с приоритетом по сбросу */

u_s = locals->control_systemv391_out_0_[i];
u_r = locals->control_systemv395_out_0_[i];
state_vars->control_systemv396_out_0_[i] = state_vars->control_systemv396state_[i];
if(u_s && u_r){
state_vars->control_systemv396_out_0_[i] = 0;
}else{
if(u_s && (!u_r)){
state_vars->control_systemv396_out_0_[i] = 1;
}else{
if(!(u_s) && u_r){
state_vars->control_systemv396_out_0_[i] = 0;
};
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
state_vars->control_systemv396state_[i] = state_vars->control_systemv396_out_0_[i];
};

/* Index=397
   UID=397
   GeneratorClassName=TSignalWriter
   Name=Macro161.Macro153.SignalWriter25
   Type=Запись в список сигналов */

};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
 kskvalve1_state = state_vars->control_systemv396_out_0_[0];
 kskvalve2_state = state_vars->control_systemv396_out_0_[1];
 kskvalve3_state = state_vars->control_systemv396_out_0_[2];
 kskvalve4_state = state_vars->control_systemv396_out_0_[3];
 kpovalve1_state = state_vars->control_systemv396_out_0_[4];
 kpovalve2_state = state_vars->control_systemv396_out_0_[5];
 kpovalve3_state = state_vars->control_systemv396_out_0_[6];
 kpovalve4_state = state_vars->control_systemv396_out_0_[7];
 brsvalve1_state = state_vars->control_systemv396_out_0_[8];
 brsvalve2_state = state_vars->control_systemv396_out_0_[9];
 bosvvalve1_state = state_vars->control_systemv396_out_0_[10];
 bosvvalve2_state = state_vars->control_systemv396_out_0_[11];
 bosvvalve3_state = state_vars->control_systemv396_out_0_[12];
 bosvvalve4_state = state_vars->control_systemv396_out_0_[13];
 ko2valve1_state = state_vars->control_systemv396_out_0_[14];
 ko2valve2_state = state_vars->control_systemv396_out_0_[15];
 but1valve1_state = state_vars->control_systemv396_out_0_[16];
 but1valve2_state = state_vars->control_systemv396_out_0_[17];
 but2valve1_state = state_vars->control_systemv396_out_0_[18];
 but2valve2_state = state_vars->control_systemv396_out_0_[19];
 btovalve1_state = state_vars->control_systemv396_out_0_[20];
 btovalve2_state = state_vars->control_systemv396_out_0_[21];
 btovalve3_state = state_vars->control_systemv396_out_0_[22];
 btovalve4_state = state_vars->control_systemv396_out_0_[23];
 btovalve5_state = state_vars->control_systemv396_out_0_[24];
 btovalve6_state = state_vars->control_systemv396_out_0_[25];
 btovalve7_state = state_vars->control_systemv396_out_0_[26];
 btovalve8_state = state_vars->control_systemv396_out_0_[27];
 san1valve1_state = state_vars->control_systemv396_out_0_[28];
 san1valve2_state = state_vars->control_systemv396_out_0_[29];
 san2valve1_state = state_vars->control_systemv396_out_0_[30];
 san2valve2_state = state_vars->control_systemv396_out_0_[31];
 san3valve1_state = state_vars->control_systemv396_out_0_[32];
 san3valve2_state = state_vars->control_systemv396_out_0_[33];
 san4valve1_state = state_vars->control_systemv396_out_0_[34];
 san4valve2_state = state_vars->control_systemv396_out_0_[35];
 san5valve1_state = state_vars->control_systemv396_out_0_[36];
 san5valve2_state = state_vars->control_systemv396_out_0_[37];
 san6valve1_state = state_vars->control_systemv396_out_0_[38];
 san6valve2_state = state_vars->control_systemv396_out_0_[39];
 san7valve1_state = state_vars->control_systemv396_out_0_[40];
 san7valve2_state = state_vars->control_systemv396_out_0_[41];
 san8valve1_state = state_vars->control_systemv396_out_0_[42];
 san8valve2_state = state_vars->control_systemv396_out_0_[43];
 ks1valve1_state = state_vars->control_systemv396_out_0_[44];
 ks1valve2_state = state_vars->control_systemv396_out_0_[45];
 ks1valve3_state = state_vars->control_systemv396_out_0_[46];
 ks2valve1_state = state_vars->control_systemv396_out_0_[47];
 ks2valve2_state = state_vars->control_systemv396_out_0_[48];
 ks2valve3_state = state_vars->control_systemv396_out_0_[49];
 ks3valve1_state = state_vars->control_systemv396_out_0_[50];
 ks3valve2_state = state_vars->control_systemv396_out_0_[51];
 ks3valve3_state = state_vars->control_systemv396_out_0_[52];
 ks4valve1_state = state_vars->control_systemv396_out_0_[53];
 ks4valve2_state = state_vars->control_systemv396_out_0_[54];
 ks4valve3_state = state_vars->control_systemv396_out_0_[55];
 ks5valve1_state = state_vars->control_systemv396_out_0_[56];
 ks5valve2_state = state_vars->control_systemv396_out_0_[57];
 ks5valve3_state = state_vars->control_systemv396_out_0_[58];
 ks6valve1_state = state_vars->control_systemv396_out_0_[59];
 ks6valve2_state = state_vars->control_systemv396_out_0_[60];
 ks6valve3_state = state_vars->control_systemv396_out_0_[61];
 ks7valve1_state = state_vars->control_systemv396_out_0_[62];
 ks7valve2_state = state_vars->control_systemv396_out_0_[63];
 ks7valve3_state = state_vars->control_systemv396_out_0_[64];
 ks8valve1_state = state_vars->control_systemv396_out_0_[65];
 ks8valve2_state = state_vars->control_systemv396_out_0_[66];
 ks8valve3_state = state_vars->control_systemv396_out_0_[67];

/* Index=398
   UID=398
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader12
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv398_out_0_[0] = kskvalve1_state;
state_vars->control_systemv398_out_0_[1] = kskvalve2_state;
state_vars->control_systemv398_out_0_[2] = kskvalve3_state;
state_vars->control_systemv398_out_0_[3] = kskvalve4_state;
state_vars->control_systemv398_out_0_[4] = kpovalve1_state;
state_vars->control_systemv398_out_0_[5] = kpovalve2_state;
state_vars->control_systemv398_out_0_[6] = kpovalve3_state;
state_vars->control_systemv398_out_0_[7] = kpovalve4_state;
state_vars->control_systemv398_out_0_[8] = brsvalve1_state;
state_vars->control_systemv398_out_0_[9] = brsvalve2_state;
state_vars->control_systemv398_out_0_[10] = bosvvalve1_state;
state_vars->control_systemv398_out_0_[11] = bosvvalve2_state;
state_vars->control_systemv398_out_0_[12] = bosvvalve3_state;
state_vars->control_systemv398_out_0_[13] = bosvvalve4_state;
state_vars->control_systemv398_out_0_[14] = ko2valve1_state;
state_vars->control_systemv398_out_0_[15] = ko2valve2_state;
state_vars->control_systemv398_out_0_[16] = but1valve1_state;
state_vars->control_systemv398_out_0_[17] = but1valve2_state;
state_vars->control_systemv398_out_0_[18] = but2valve1_state;
state_vars->control_systemv398_out_0_[19] = but2valve2_state;
state_vars->control_systemv398_out_0_[20] = btovalve1_state;
state_vars->control_systemv398_out_0_[21] = btovalve2_state;
state_vars->control_systemv398_out_0_[22] = btovalve3_state;
state_vars->control_systemv398_out_0_[23] = btovalve4_state;
state_vars->control_systemv398_out_0_[24] = btovalve5_state;
state_vars->control_systemv398_out_0_[25] = btovalve6_state;
state_vars->control_systemv398_out_0_[26] = btovalve7_state;
state_vars->control_systemv398_out_0_[27] = btovalve8_state;
state_vars->control_systemv398_out_0_[28] = san1valve1_state;
state_vars->control_systemv398_out_0_[29] = san1valve2_state;
state_vars->control_systemv398_out_0_[30] = san2valve1_state;
state_vars->control_systemv398_out_0_[31] = san2valve2_state;
state_vars->control_systemv398_out_0_[32] = san3valve1_state;
state_vars->control_systemv398_out_0_[33] = san3valve2_state;
state_vars->control_systemv398_out_0_[34] = san4valve1_state;
state_vars->control_systemv398_out_0_[35] = san4valve2_state;
state_vars->control_systemv398_out_0_[36] = san5valve1_state;
state_vars->control_systemv398_out_0_[37] = san5valve2_state;
state_vars->control_systemv398_out_0_[38] = san6valve1_state;
state_vars->control_systemv398_out_0_[39] = san6valve2_state;
state_vars->control_systemv398_out_0_[40] = san7valve1_state;
state_vars->control_systemv398_out_0_[41] = san7valve2_state;
state_vars->control_systemv398_out_0_[42] = san8valve1_state;
state_vars->control_systemv398_out_0_[43] = san8valve2_state;
state_vars->control_systemv398_out_0_[44] = ks1valve1_state;
state_vars->control_systemv398_out_0_[45] = ks1valve2_state;
state_vars->control_systemv398_out_0_[46] = ks1valve3_state;
state_vars->control_systemv398_out_0_[47] = ks2valve1_state;
state_vars->control_systemv398_out_0_[48] = ks2valve2_state;
state_vars->control_systemv398_out_0_[49] = ks2valve3_state;
state_vars->control_systemv398_out_0_[50] = ks3valve1_state;
state_vars->control_systemv398_out_0_[51] = ks3valve2_state;
state_vars->control_systemv398_out_0_[52] = ks3valve3_state;
state_vars->control_systemv398_out_0_[53] = ks4valve1_state;
state_vars->control_systemv398_out_0_[54] = ks4valve2_state;
state_vars->control_systemv398_out_0_[55] = ks4valve3_state;
state_vars->control_systemv398_out_0_[56] = ks5valve1_state;
state_vars->control_systemv398_out_0_[57] = ks5valve2_state;
state_vars->control_systemv398_out_0_[58] = ks5valve3_state;
state_vars->control_systemv398_out_0_[59] = ks6valve1_state;
state_vars->control_systemv398_out_0_[60] = ks6valve2_state;
state_vars->control_systemv398_out_0_[61] = ks6valve3_state;
state_vars->control_systemv398_out_0_[62] = ks7valve1_state;
state_vars->control_systemv398_out_0_[63] = ks7valve2_state;
state_vars->control_systemv398_out_0_[64] = ks7valve3_state;
state_vars->control_systemv398_out_0_[65] = ks8valve1_state;
state_vars->control_systemv398_out_0_[66] = ks8valve2_state;
state_vars->control_systemv398_out_0_[67] = ks8valve3_state;

/* Index=399
   UID=399
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro153.SignalReader13
   Type=Чтение из списка сигналов */

state_vars->control_systemv399_out_0_[0] = kskvalve1_state;
state_vars->control_systemv399_out_0_[1] = kskvalve2_state;
state_vars->control_systemv399_out_0_[2] = kskvalve3_state;
state_vars->control_systemv399_out_0_[3] = kskvalve4_state;
state_vars->control_systemv399_out_0_[4] = kpovalve1_state;
state_vars->control_systemv399_out_0_[5] = kpovalve2_state;
state_vars->control_systemv399_out_0_[6] = kpovalve3_state;
state_vars->control_systemv399_out_0_[7] = kpovalve4_state;
state_vars->control_systemv399_out_0_[8] = brsvalve1_state;
state_vars->control_systemv399_out_0_[9] = brsvalve2_state;
state_vars->control_systemv399_out_0_[10] = bosvvalve1_state;
state_vars->control_systemv399_out_0_[11] = bosvvalve2_state;
state_vars->control_systemv399_out_0_[12] = bosvvalve3_state;
state_vars->control_systemv399_out_0_[13] = bosvvalve4_state;
state_vars->control_systemv399_out_0_[14] = ko2valve1_state;
state_vars->control_systemv399_out_0_[15] = ko2valve2_state;
state_vars->control_systemv399_out_0_[16] = but1valve1_state;
state_vars->control_systemv399_out_0_[17] = but1valve2_state;
state_vars->control_systemv399_out_0_[18] = but2valve1_state;
state_vars->control_systemv399_out_0_[19] = but2valve2_state;
state_vars->control_systemv399_out_0_[20] = btovalve1_state;
state_vars->control_systemv399_out_0_[21] = btovalve2_state;
state_vars->control_systemv399_out_0_[22] = btovalve3_state;
state_vars->control_systemv399_out_0_[23] = btovalve4_state;
state_vars->control_systemv399_out_0_[24] = btovalve5_state;
state_vars->control_systemv399_out_0_[25] = btovalve6_state;
state_vars->control_systemv399_out_0_[26] = btovalve7_state;
state_vars->control_systemv399_out_0_[27] = btovalve8_state;
state_vars->control_systemv399_out_0_[28] = san1valve1_state;
state_vars->control_systemv399_out_0_[29] = san1valve2_state;
state_vars->control_systemv399_out_0_[30] = san2valve1_state;
state_vars->control_systemv399_out_0_[31] = san2valve2_state;
state_vars->control_systemv399_out_0_[32] = san3valve1_state;
state_vars->control_systemv399_out_0_[33] = san3valve2_state;
state_vars->control_systemv399_out_0_[34] = san4valve1_state;
state_vars->control_systemv399_out_0_[35] = san4valve2_state;
state_vars->control_systemv399_out_0_[36] = san5valve1_state;
state_vars->control_systemv399_out_0_[37] = san5valve2_state;
state_vars->control_systemv399_out_0_[38] = san6valve1_state;
state_vars->control_systemv399_out_0_[39] = san6valve2_state;
state_vars->control_systemv399_out_0_[40] = san7valve1_state;
state_vars->control_systemv399_out_0_[41] = san7valve2_state;
state_vars->control_systemv399_out_0_[42] = san8valve1_state;
state_vars->control_systemv399_out_0_[43] = san8valve2_state;
state_vars->control_systemv399_out_0_[44] = ks1valve1_state;
state_vars->control_systemv399_out_0_[45] = ks1valve2_state;
state_vars->control_systemv399_out_0_[46] = ks1valve3_state;
state_vars->control_systemv399_out_0_[47] = ks2valve1_state;
state_vars->control_systemv399_out_0_[48] = ks2valve2_state;
state_vars->control_systemv399_out_0_[49] = ks2valve3_state;
state_vars->control_systemv399_out_0_[50] = ks3valve1_state;
state_vars->control_systemv399_out_0_[51] = ks3valve2_state;
state_vars->control_systemv399_out_0_[52] = ks3valve3_state;
state_vars->control_systemv399_out_0_[53] = ks4valve1_state;
state_vars->control_systemv399_out_0_[54] = ks4valve2_state;
state_vars->control_systemv399_out_0_[55] = ks4valve3_state;
state_vars->control_systemv399_out_0_[56] = ks5valve1_state;
state_vars->control_systemv399_out_0_[57] = ks5valve2_state;
state_vars->control_systemv399_out_0_[58] = ks5valve3_state;
state_vars->control_systemv399_out_0_[59] = ks6valve1_state;
state_vars->control_systemv399_out_0_[60] = ks6valve2_state;
state_vars->control_systemv399_out_0_[61] = ks6valve3_state;
state_vars->control_systemv399_out_0_[62] = ks7valve1_state;
state_vars->control_systemv399_out_0_[63] = ks7valve2_state;
state_vars->control_systemv399_out_0_[64] = ks7valve3_state;
state_vars->control_systemv399_out_0_[65] = ks8valve1_state;
state_vars->control_systemv399_out_0_[66] = ks8valve2_state;
state_vars->control_systemv399_out_0_[67] = ks8valve3_state;

/* Index=332
   UID=332
   GeneratorClassName=TIfSection
   Name=Macro159.Macro5.IfCondition3
   Type=Условие выполнения субмодели */

if(state_vars->control_systemv332_out_0_){

/* Index=400
   UID=400
   GeneratorClassName=TSignalReader
   Name=Macro159.Macro5.Macro162.Signal_Block21
   Type=Вход алгоритма */

state_vars->control_systemv400_out_0_ = pressureactual_sup;

/* Index=401
   UID=401
   GeneratorClassName=TLogBlock
   Name=Macro159.Macro5.Macro162.LT14
   Type=Операция МЕНЬШЕ */

state_vars->control_systemv401_out_0_ = state_vars->control_systemv400_out_0_ < consts->control_systemv127_a_;

/* Index=402
   UID=402
   GeneratorClassName=TSignalWriter
   Name=Macro159.Macro5.Macro162.ALG25
   Type=Выход алгоритма */

if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(consts->control_systemv124_a_)){
 maincomp1_remoteallowed = (consts->control_systemv124_a_ > 0.5);
};
 maincomp1_autocontrol = state_vars->control_systemv401_out_0_;
if(isfinite(consts->control_systemv126_a_)){
 maincomp2_remoteallowed = (consts->control_systemv126_a_ > 0.5);
};
if(isfinite(consts->control_systemv125_a_)){
 maincomp2_autocontrol = (consts->control_systemv125_a_ > 0.5);
};
if(isfinite(consts->control_systemv128_a_)){
 additcomp1_remoteallowed = (consts->control_systemv128_a_ > 0.5);
};
if(isfinite(consts->control_systemv129_a_)){
 additcomp1_autocontrol = (consts->control_systemv129_a_ > 0.5);
};
if(isfinite(consts->control_systemv130_a_)){
 additcomp2_remoteallowed = (consts->control_systemv130_a_ > 0.5);
};
if(isfinite(consts->control_systemv131_a_)){
 additcomp2_autocontrol = (consts->control_systemv131_a_ > 0.5);
};

};
};

/* Index=403
   UID=403
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader16
   Type=Чтение из списка сигналов */

state_vars->control_systemv403_out_0_[0] = maincomp1_remoteallowed;
state_vars->control_systemv403_out_0_[1] = maincomp2_remoteallowed;
state_vars->control_systemv403_out_0_[2] = additcomp1_remoteallowed;
state_vars->control_systemv403_out_0_[3] = additcomp2_remoteallowed;

/* Index=404
   UID=404
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And20
   Type=Оператор И */

for(i=0;i<4;i++){
locals->control_systemv404_out_0_[i] = state_vars->control_systemv360_out_0_[i] && (!state_vars->control_systemv367_out_0_[i]);

/* Index=405
   UID=405
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And16
   Type=Оператор И */

locals->control_systemv405_out_0_[i] = state_vars->control_systemv403_out_0_[i] && locals->control_systemv404_out_0_[i];

/* Index=406
   UID=406
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader17
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv406_out_0_[0] = maincomp1_remoteallowed;
state_vars->control_systemv406_out_0_[1] = maincomp2_remoteallowed;
state_vars->control_systemv406_out_0_[2] = additcomp2_remoteallowed;
state_vars->control_systemv406_out_0_[3] = additcomp2_remoteallowed;

/* Index=407
   UID=407
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader25
   Type=Чтение из списка сигналов */

state_vars->control_systemv407_out_0_[0] = maincomp1_autocontrol;
state_vars->control_systemv407_out_0_[1] = maincomp2_autocontrol;
state_vars->control_systemv407_out_0_[2] = additcomp1_autocontrol;
state_vars->control_systemv407_out_0_[3] = additcomp2_autocontrol;

/* Index=408
   UID=408
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And17
   Type=Оператор И */

for(i=0;i<4;i++){
locals->control_systemv408_out_0_[i] = (!state_vars->control_systemv406_out_0_[i]) && state_vars->control_systemv407_out_0_[i];

/* Index=409
   UID=409
   GeneratorClassName=TORSrc
   Name=Macro161.Macro154.Or12
   Type=Оператор ИЛИ */

locals->control_systemv409_out_0_[i] = locals->control_systemv405_out_0_[i] || locals->control_systemv408_out_0_[i];

/* Index=410
   UID=410
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader18
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv410_out_0_[0] = maincomp1_remoteallowed;
state_vars->control_systemv410_out_0_[1] = maincomp2_remoteallowed;
state_vars->control_systemv410_out_0_[2] = additcomp1_remoteallowed;
state_vars->control_systemv410_out_0_[3] = additcomp2_remoteallowed;

/* Index=411
   UID=411
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And21
   Type=Оператор И */

for(i=0;i<4;i++){
locals->control_systemv411_out_0_[i] = state_vars->control_systemv362_out_0_[i] && state_vars->control_systemv368_out_0_[i];

/* Index=412
   UID=412
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And18
   Type=Оператор И */

locals->control_systemv412_out_0_[i] = state_vars->control_systemv410_out_0_[i] && locals->control_systemv411_out_0_[i];

/* Index=413
   UID=413
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader19
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv413_out_0_[0] = maincomp1_remoteallowed;
state_vars->control_systemv413_out_0_[1] = maincomp2_remoteallowed;
state_vars->control_systemv413_out_0_[2] = additcomp1_remoteallowed;
state_vars->control_systemv413_out_0_[3] = additcomp2_remoteallowed;

/* Index=414
   UID=414
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader24
   Type=Чтение из списка сигналов */

state_vars->control_systemv414_out_0_[0] = maincomp1_autocontrol;
state_vars->control_systemv414_out_0_[1] = maincomp2_autocontrol;
state_vars->control_systemv414_out_0_[2] = additcomp1_autocontrol;
state_vars->control_systemv414_out_0_[3] = additcomp2_autocontrol;

/* Index=415
   UID=415
   GeneratorClassName=TAndSrc
   Name=Macro161.Macro154.And19
   Type=Оператор И */

for(i=0;i<4;i++){
locals->control_systemv415_out_0_[i] = (!state_vars->control_systemv413_out_0_[i]) && (!state_vars->control_systemv414_out_0_[i]);

/* Index=416
   UID=416
   GeneratorClassName=TORSrc
   Name=Macro161.Macro154.Or13
   Type=Оператор ИЛИ */

locals->control_systemv416_out_0_[i] = locals->control_systemv412_out_0_[i] || locals->control_systemv415_out_0_[i];

/* Index=417
   UID=417
   GeneratorClassName=TTrigger_R
   Name=Macro161.Macro154.Trigger_RS_2
   Type=RS-триггер с приоритетом по сбросу */

u_s = locals->control_systemv409_out_0_[i];
u_r = locals->control_systemv416_out_0_[i];
state_vars->control_systemv417_out_0_[i] = state_vars->control_systemv417state_[i];
if(u_s && u_r){
state_vars->control_systemv417_out_0_[i] = 0;
}else{
if(u_s && (!u_r)){
state_vars->control_systemv417_out_0_[i] = 1;
}else{
if(!(u_s) && u_r){
state_vars->control_systemv417_out_0_[i] = 0;
};
};
};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
state_vars->control_systemv417state_[i] = state_vars->control_systemv417_out_0_[i];
};

/* Index=418
   UID=418
   GeneratorClassName=TSignalWriter
   Name=Macro161.Macro154.SignalWriter26
   Type=Запись в список сигналов */

};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
 maincomp1_state = state_vars->control_systemv417_out_0_[0];
 maincomp2_state = state_vars->control_systemv417_out_0_[1];
 additcomp1_state = state_vars->control_systemv417_out_0_[2];
 additcomp2_state = state_vars->control_systemv417_out_0_[3];

/* Index=419
   UID=419
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader22
   Type=Чтение из списка сигналов */

};
state_vars->control_systemv419_out_0_[0] = maincomp1_state;
state_vars->control_systemv419_out_0_[1] = maincomp2_state;
state_vars->control_systemv419_out_0_[2] = additcomp1_state;
state_vars->control_systemv419_out_0_[3] = additcomp2_state;

/* Index=420
   UID=420
   GeneratorClassName=TSignalReader
   Name=Macro161.Macro154.SignalReader23
   Type=Чтение из списка сигналов */

state_vars->control_systemv420_out_0_[0] = maincomp1_state;
state_vars->control_systemv420_out_0_[1] = maincomp2_state;
state_vars->control_systemv420_out_0_[2] = additcomp1_state;
state_vars->control_systemv420_out_0_[3] = additcomp2_state;

/* Index=421
   UID=421
   GeneratorClassName=TMulDbl
   Name=Macro161.Macro154.Macro152.Mul_oper1
   Type=Перемножитель */

for(i=0;i<4;i++){
locals->control_systemv421_out_0_[i] = state_vars->control_systemv358_out_0_[i]*state_vars->control_systemv417_out_0_[i];

/* Index=422
   UID=422
   GeneratorClassName=TSignalWriter
   Name=Macro161.Macro154.SignalWriter28
   Type=Запись в список сигналов */

};
if((action==f_InitState)||(action==f_GoodStep)||(action==f_RestoreOuts)){
if(isfinite(locals->control_systemv421_out_0_[0])){
 maincomp1_g = locals->control_systemv421_out_0_[0];
};
if(isfinite(locals->control_systemv421_out_0_[1])){
 maincomp2_g = locals->control_systemv421_out_0_[1];
};
if(isfinite(locals->control_systemv421_out_0_[2])){
 additcomp1_g = locals->control_systemv421_out_0_[2];
};
if(isfinite(locals->control_systemv421_out_0_[3])){
 additcomp2_g = locals->control_systemv421_out_0_[3];
};
};
};break;
};
