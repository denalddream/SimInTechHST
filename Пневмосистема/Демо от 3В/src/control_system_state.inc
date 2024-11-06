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


/* Index=365
   UID=365
   GeneratorClassName=TStepDelay
   Name=Macro161.Macro153.StepDelay8
   Type=Задержка на шаг интегрирования */

if(action==f_GoodStep){
for(i=0;i<68;i++){
if(isfinite(state_vars->control_systemv398_out_0_[i])){
state_vars->control_systemv365_out_0_[i] = state_vars->control_systemv398_out_0_[i];
};

/* Index=366
   UID=366
   GeneratorClassName=TStepDelay
   Name=Macro161.Macro153.StepDelay9
   Type=Задержка на шаг интегрирования */

if(isfinite(state_vars->control_systemv399_out_0_[i])){
state_vars->control_systemv366_out_0_[i] = state_vars->control_systemv399_out_0_[i];
};

/* Index=367
   UID=367
   GeneratorClassName=TStepDelay
   Name=Macro161.Macro154.StepDelay10
   Type=Задержка на шаг интегрирования */

};
for(i=0;i<4;i++){
state_vars->control_systemv367_out_0_[i] = state_vars->control_systemv419_out_0_[i];

/* Index=368
   UID=368
   GeneratorClassName=TStepDelay
   Name=Macro161.Macro154.StepDelay11
   Type=Задержка на шаг интегрирования */

state_vars->control_systemv368_out_0_[i] = state_vars->control_systemv420_out_0_[i];
};
};
