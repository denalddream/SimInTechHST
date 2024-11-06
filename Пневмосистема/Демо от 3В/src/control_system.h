
/*  ------------------------------------------------------
     Routine name:  control_system
     Description:   
     Project file:  Алгоритмы управления.prt

------------------------------------------------------  */

/*  --- Base generator data types --- */
/* Real data type */
typedef double g_real_type;
/* Integer data type */
typedef int g_int_type;
/* Boolean data type */
typedef char g_boolean_type;
/* Complex data type */
typedef complex_64 g_complex_type;

typedef double  double_4[4];
typedef double  double_68[68];
typedef char  char_68[68];
typedef char  char_4[4];

/* Default initialization values */
const double pressureactual_sup1_default=277332.507417076;
const double pressureactual_sup2_default=346886.665805652;
const double pressureactual_but1_default=485314.496994721;
const double pressureactual_but2_default=485314.496994721;
const double maincomp1_gnom_default=0.214164;
const double maincomp2_gnom_default=0.214164;
const double additcomp1_gnom_default=0.0111048;
const double additcomp2_gnom_default=0.0111048;
const double pressureactual_sup_default=312109.586611364;
const double pressuredisplayed_sup_default=101325;
const double pressuredisplayed_but1_default=101325;
const double pressuredisplayed_but2_default=101325;
const double kskvalve3_state_default=0;
const double kskvalve4_state_default=0;
const double btovalve2_state_default=0;
const double btovalve3_state_default=0;
const double btovalve4_state_default=0;
const double btovalve5_state_default=0;
const double btovalve6_state_default=0;
const double btovalve7_state_default=0;
const double btovalve8_state_default=0;
const double san2valve1_state_default=0;
const double san2valve2_state_default=0;
const double san3valve1_state_default=0;
const double san3valve2_state_default=0;
const double san4valve1_state_default=0;
const double san4valve2_state_default=0;
const double san5valve1_state_default=0;
const double san5valve2_state_default=0;
const double san6valve1_state_default=0;
const double san6valve2_state_default=0;
const double san7valve1_state_default=0;
const double san7valve2_state_default=0;
const double san8valve1_state_default=0;
const double san8valve2_state_default=0;
const double maincomp1_g_default=0.214164;
const double maincomp2_g_default=0.214164;
const double additcomp1_g_default=0.0111048;
const double additcomp2_g_default=0.0111048;
const char dynamicmode_control_default=0;
const char staticmode_control_default=0;
const char manualmode_control_default=0;
const char dynamicmode_state_default=0;
const char staticmode_state_default=1;
const char manualmode_state_default=0;
const char bosvvalve1_remoteallowed_default=0;
const char bosvvalve1_autocontrol_default=1;
const char bosvvalve2_remoteallowed_default=0;
const char bosvvalve2_autocontrol_default=0;
const char bosvvalve3_remoteallowed_default=0;
const char bosvvalve3_autocontrol_default=0;
const char bosvvalve4_remoteallowed_default=0;
const char bosvvalve4_autocontrol_default=1;
const char btovalve1_remoteallowed_default=1;
const char btovalve2_remoteallowed_default=1;
const char btovalve3_remoteallowed_default=1;
const char btovalve4_remoteallowed_default=1;
const char btovalve5_remoteallowed_default=1;
const char btovalve6_remoteallowed_default=1;
const char btovalve7_remoteallowed_default=1;
const char btovalve8_remoteallowed_default=1;
const char kskvalve1_remoteallowed_default=0;
const char kskvalve2_remoteallowed_default=0;
const char kskvalve3_remoteallowed_default=0;
const char kskvalve4_remoteallowed_default=0;
const char kpovalve1_remoteallowed_default=0;
const char kpovalve2_remoteallowed_default=0;
const char kpovalve3_remoteallowed_default=0;
const char kpovalve4_remoteallowed_default=0;
const char brsvalve1_remoteallowed_default=0;
const char brsvalve2_remoteallowed_default=0;
const char ko2valve1_remoteallowed_default=0;
const char ko2valve2_remoteallowed_default=0;
const char but1valve1_remoteallowed_default=1;
const char but1valve2_remoteallowed_default=1;
const char but2valve1_remoteallowed_default=1;
const char but2valve2_remoteallowed_default=1;
const char san1valve1_remoteallowed_default=0;
const char san1valve2_remoteallowed_default=0;
const char san2valve1_remoteallowed_default=0;
const char san2valve2_remoteallowed_default=0;
const char san3valve1_remoteallowed_default=0;
const char san3valve2_remoteallowed_default=0;
const char san4valve1_remoteallowed_default=0;
const char san4valve2_remoteallowed_default=0;
const char san5valve1_remoteallowed_default=0;
const char san5valve2_remoteallowed_default=0;
const char san6valve1_remoteallowed_default=0;
const char san6valve2_remoteallowed_default=0;
const char san7valve1_remoteallowed_default=0;
const char san7valve2_remoteallowed_default=0;
const char san8valve1_remoteallowed_default=0;
const char san8valve2_remoteallowed_default=0;
const char ks1valve1_remoteallowed_default=0;
const char ks1valve2_remoteallowed_default=0;
const char ks1valve3_remoteallowed_default=0;
const char ks2valve1_remoteallowed_default=0;
const char ks2valve2_remoteallowed_default=0;
const char ks2valve3_remoteallowed_default=0;
const char ks3valve1_remoteallowed_default=0;
const char ks3valve2_remoteallowed_default=0;
const char ks3valve3_remoteallowed_default=0;
const char ks4valve1_remoteallowed_default=0;
const char ks4valve2_remoteallowed_default=0;
const char ks4valve3_remoteallowed_default=0;
const char ks5valve1_remoteallowed_default=0;
const char ks5valve2_remoteallowed_default=0;
const char ks5valve3_remoteallowed_default=0;
const char ks6valve1_remoteallowed_default=0;
const char ks6valve2_remoteallowed_default=0;
const char ks6valve3_remoteallowed_default=0;
const char ks7valve1_remoteallowed_default=0;
const char ks7valve2_remoteallowed_default=0;
const char ks7valve3_remoteallowed_default=0;
const char ks8valve1_remoteallowed_default=0;
const char ks8valve2_remoteallowed_default=0;
const char ks8valve3_remoteallowed_default=0;
const char kpovalve1_autocontrol_default=1;
const char kpovalve2_autocontrol_default=1;
const char kpovalve3_autocontrol_default=1;
const char kpovalve4_autocontrol_default=1;
const char ko2valve1_autocontrol_default=1;
const char ko2valve2_autocontrol_default=1;
const char ks1valve1_autocontrol_default=0;
const char ks1valve2_autocontrol_default=0;
const char ks1valve3_autocontrol_default=0;
const char ks2valve1_autocontrol_default=0;
const char ks2valve2_autocontrol_default=0;
const char ks2valve3_autocontrol_default=0;
const char ks3valve1_autocontrol_default=0;
const char ks3valve2_autocontrol_default=0;
const char ks3valve3_autocontrol_default=0;
const char ks4valve1_autocontrol_default=0;
const char ks4valve2_autocontrol_default=0;
const char ks4valve3_autocontrol_default=0;
const char ks5valve1_autocontrol_default=0;
const char ks5valve2_autocontrol_default=0;
const char ks5valve3_autocontrol_default=0;
const char ks6valve1_autocontrol_default=0;
const char ks6valve2_autocontrol_default=0;
const char ks6valve3_autocontrol_default=0;
const char ks7valve1_autocontrol_default=0;
const char ks7valve2_autocontrol_default=0;
const char ks7valve3_autocontrol_default=0;
const char ks8valve1_autocontrol_default=0;
const char ks8valve2_autocontrol_default=0;
const char ks8valve3_autocontrol_default=0;
const char kskvalve1_autocontrol_default=0;
const char kskvalve2_autocontrol_default=0;
const char kskvalve3_autocontrol_default=0;
const char kskvalve4_autocontrol_default=0;
const char san1valve1_autocontrol_default=0;
const char san1valve2_autocontrol_default=0;
const char san2valve1_autocontrol_default=0;
const char san2valve2_autocontrol_default=0;
const char san3valve1_autocontrol_default=0;
const char san3valve2_autocontrol_default=0;
const char san4valve1_autocontrol_default=0;
const char san4valve2_autocontrol_default=0;
const char san5valve1_autocontrol_default=0;
const char san5valve2_autocontrol_default=0;
const char san6valve1_autocontrol_default=0;
const char san6valve2_autocontrol_default=0;
const char san7valve1_autocontrol_default=0;
const char san7valve2_autocontrol_default=0;
const char san8valve1_autocontrol_default=0;
const char san8valve2_autocontrol_default=0;
const char brsvalve1_autocontrol_default=0;
const char brsvalve2_autocontrol_default=0;
const char maincomp1_remoteallowed_default=0;
const char maincomp2_remoteallowed_default=0;
const char additcomp1_remoteallowed_default=0;
const char additcomp2_remoteallowed_default=0;
const char kskvalve1_remotecontrol_default=0;
const char kskvalve2_remotecontrol_default=0;
const char kskvalve3_remotecontrol_default=0;
const char kskvalve4_remotecontrol_default=0;
const char kpovalve1_remotecontrol_default=0;
const char kpovalve2_remotecontrol_default=0;
const char kpovalve3_remotecontrol_default=0;
const char kpovalve4_remotecontrol_default=0;
const char brsvalve1_remotecontrol_default=0;
const char brsvalve2_remotecontrol_default=0;
const char bosvvalve1_remotecontrol_default=0;
const char bosvvalve2_remotecontrol_default=0;
const char bosvvalve3_remotecontrol_default=0;
const char bosvvalve4_remotecontrol_default=0;
const char ko2valve1_remotecontrol_default=0;
const char ko2valve2_remotecontrol_default=0;
const char but1valve1_remotecontrol_default=0;
const char but1valve2_remotecontrol_default=0;
const char but2valve1_remotecontrol_default=0;
const char but2valve2_remotecontrol_default=0;
const char btovalve1_remotecontrol_default=0;
const char btovalve2_remotecontrol_default=0;
const char btovalve3_remotecontrol_default=0;
const char btovalve4_remotecontrol_default=0;
const char btovalve5_remotecontrol_default=0;
const char btovalve6_remotecontrol_default=0;
const char btovalve7_remotecontrol_default=0;
const char btovalve8_remotecontrol_default=0;
const char san1valve1_remotecontrol_default=0;
const char san1valve2_remotecontrol_default=0;
const char san2valve1_remotecontrol_default=0;
const char san2valve2_remotecontrol_default=0;
const char san3valve1_remotecontrol_default=0;
const char san3valve2_remotecontrol_default=0;
const char san4valve1_remotecontrol_default=0;
const char san4valve2_remotecontrol_default=0;
const char san5valve1_remotecontrol_default=0;
const char san5valve2_remotecontrol_default=0;
const char san6valve1_remotecontrol_default=0;
const char san6valve2_remotecontrol_default=0;
const char san7valve1_remotecontrol_default=0;
const char san7valve2_remotecontrol_default=0;
const char san8valve1_remotecontrol_default=0;
const char san8valve2_remotecontrol_default=0;
const char ks1valve1_remotecontrol_default=0;
const char ks1valve2_remotecontrol_default=0;
const char ks1valve3_remotecontrol_default=0;
const char ks2valve1_remotecontrol_default=0;
const char ks2valve2_remotecontrol_default=0;
const char ks2valve3_remotecontrol_default=0;
const char ks3valve1_remotecontrol_default=0;
const char ks3valve2_remotecontrol_default=0;
const char ks3valve3_remotecontrol_default=0;
const char ks4valve1_remotecontrol_default=0;
const char ks4valve2_remotecontrol_default=0;
const char ks4valve3_remotecontrol_default=0;
const char ks5valve1_remotecontrol_default=0;
const char ks5valve2_remotecontrol_default=0;
const char ks5valve3_remotecontrol_default=0;
const char ks6valve1_remotecontrol_default=0;
const char ks6valve2_remotecontrol_default=0;
const char ks6valve3_remotecontrol_default=0;
const char ks7valve1_remotecontrol_default=0;
const char ks7valve2_remotecontrol_default=0;
const char ks7valve3_remotecontrol_default=0;
const char ks8valve1_remotecontrol_default=0;
const char ks8valve2_remotecontrol_default=0;
const char ks8valve3_remotecontrol_default=0;
const char maincomp1_remotecontrol_default=0;
const char maincomp2_remotecontrol_default=0;
const char additcomp1_remotecontrol_default=0;
const char additcomp2_remotecontrol_default=0;
const char but1valve1_autocontrol_default=0;
const char but1valve2_autocontrol_default=0;
const char but2valve1_autocontrol_default=0;
const char but2valve2_autocontrol_default=0;
const char btovalve1_autocontrol_default=0;
const char btovalve2_autocontrol_default=1;
const char btovalve3_autocontrol_default=1;
const char btovalve4_autocontrol_default=1;
const char btovalve5_autocontrol_default=1;
const char btovalve6_autocontrol_default=1;
const char btovalve7_autocontrol_default=1;
const char btovalve8_autocontrol_default=1;
const char maincomp1_autocontrol_default=1;
const char maincomp2_autocontrol_default=1;
const char additcomp1_autocontrol_default=1;
const char additcomp2_autocontrol_default=1;
const char kskvalve1_state_default=0;
const char kskvalve2_state_default=0;
const char kpovalve1_state_default=1;
const char kpovalve2_state_default=1;
const char kpovalve3_state_default=1;
const char kpovalve4_state_default=1;
const char brsvalve1_state_default=0;
const char brsvalve2_state_default=0;
const char bosvvalve1_state_default=1;
const char bosvvalve2_state_default=0;
const char bosvvalve3_state_default=0;
const char bosvvalve4_state_default=1;
const char ko2valve1_state_default=1;
const char ko2valve2_state_default=1;
const char but1valve1_state_default=0;
const char but1valve2_state_default=0;
const char but2valve1_state_default=0;
const char but2valve2_state_default=0;
const char btovalve1_state_default=0;
const char san1valve1_state_default=0;
const char san1valve2_state_default=0;
const char ks1valve1_state_default=0;
const char ks1valve2_state_default=0;
const char ks1valve3_state_default=0;
const char ks2valve1_state_default=0;
const char ks2valve2_state_default=0;
const char ks2valve3_state_default=0;
const char ks3valve1_state_default=0;
const char ks3valve2_state_default=0;
const char ks3valve3_state_default=0;
const char ks4valve1_state_default=0;
const char ks4valve2_state_default=0;
const char ks4valve3_state_default=0;
const char ks5valve1_state_default=0;
const char ks5valve2_state_default=0;
const char ks5valve3_state_default=0;
const char ks6valve1_state_default=0;
const char ks6valve2_state_default=0;
const char ks6valve3_state_default=0;
const char ks7valve1_state_default=0;
const char ks7valve2_state_default=0;
const char ks7valve3_state_default=0;
const char ks8valve1_state_default=0;
const char ks8valve2_state_default=0;
const char ks8valve3_state_default=0;
const char maincomp1_state_default=1;
const char maincomp2_state_default=1;
const char additcomp1_state_default=1;
const char additcomp2_state_default=1;
const double control_systemv369_out_0_default=101325;
const double control_systemv370_out_0_default=101325;
const double control_systemv371_out_0_default=101325;
const double control_systemv335_out_0_default=277332.507417076;
const double control_systemv335_out_1_default=346886.665805652;
const double control_systemv335_out_2_default=485314.496994721;
const double control_systemv335_out_3_default=485314.496994721;
const double_4 control_systemv358_out_0_default={0.214164,0.214164,0.0111048,0.0111048};
const double_68 control_systemv365_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const double_68 control_systemv366_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const double control_systemv373_out_0_default=101325;
const double control_systemv374_out_0_default=101325;
const double_68 control_systemv398_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const double_68 control_systemv399_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const double control_systemv400_out_0_default=0;
const char control_systemv321_out_0_default=0;
const char control_systemv321_out_1_default=0;
const char control_systemv321_out_2_default=0;
const char control_systemv321_out_3_default=0;
const char control_systemv321_out_4_default=0;
const char control_systemv321_out_5_default=0;
const char control_systemv321_out_6_default=0;
const char control_systemv321_out_7_default=0;
const char control_systemv321_out_8_default=0;
const char control_systemv323_out_0_default=0;
const char control_systemv323state_default=0;
const char control_systemv325_out_0_default=1;
const char control_systemv325state_default=1;
const char control_systemv327_out_0_default=0;
const char control_systemv327state_default=0;
const char control_systemv329_out_0_default=0;
const char control_systemv329_out_1_default=1;
const char control_systemv329_out_2_default=0;
const char control_systemv330_out_0_default=1;
const char control_systemv332_out_0_default=0;
const char control_systemv337_out_0_default=0;
const char_68 control_systemv352_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv353_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv353_trigger_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv354_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv355_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv355_trigger_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_4 control_systemv359_out_0_default={0,0,0,0};
const char_4 control_systemv360_out_0_default={0,0,0,0};
const char_4 control_systemv360_trigger_default={0,0,0,0};
const char_4 control_systemv361_out_0_default={0,0,0,0};
const char_4 control_systemv362_out_0_default={0,0,0,0};
const char_4 control_systemv362_trigger_default={0,0,0,0};
const char_4 control_systemv367_out_0_default={0,0,0,0};
const char_4 control_systemv368_out_0_default={0,0,0,0};
const char control_systemv375_out_0_default=0;
const char_68 control_systemv377_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv378_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv381_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv382_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv383_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char control_systemv384_out_0_default=1;
const char control_systemv385_out_0_default=1;
const char control_systemv386_out_0_default=1;
const char control_systemv387_out_0_default=1;
const char_68 control_systemv393_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv396_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv396state_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char control_systemv401_out_0_default=0;
const char_4 control_systemv403_out_0_default={0,0,0,0};
const char_4 control_systemv406_out_0_default={0,0,0,0};
const char_4 control_systemv407_out_0_default={1,1,1,1};
const char_4 control_systemv410_out_0_default={0,0,0,0};
const char_4 control_systemv413_out_0_default={0,0,0,0};
const char_4 control_systemv414_out_0_default={1,1,1,1};
const char_4 control_systemv417_out_0_default={1,1,1,1};
const char_4 control_systemv417state_default={1,1,1,1};
const char_4 control_systemv419_out_0_default={1,1,1,1};
const char_4 control_systemv420_out_0_default={1,1,1,1};
const double control_systemv0_a_default=1;
const double control_systemv1_a_default=1;
const double control_systemv2_a_default=1;
const double control_systemv3_a_default=1;
const double control_systemv4_a_default=1;
const double control_systemv5_a_default=1;
const double control_systemv6_a_default=1;
const double control_systemv7_a_default=1;
const double control_systemv8_a_default=1;
const double control_systemv9_a_default=1;
const double control_systemv10_a_default=0;
const double control_systemv11_a_default=0;
const double control_systemv12_a_default=0;
const double control_systemv13_a_default=0;
const double control_systemv14_a_default=1;
const double control_systemv15_a_default=0;
const double control_systemv16_a_default=0;
const double control_systemv17_a_default=0;
const double control_systemv18_a_default=0;
const double control_systemv19_a_default=0;
const double control_systemv20_a_default=0;
const double control_systemv21_a_default=1;
const double control_systemv22_a_default=0;
const double control_systemv23_a_default=0;
const double control_systemv24_a_default=0;
const double control_systemv25_a_default=0;
const double control_systemv26_a_default=0;
const double control_systemv27_a_default=0;
const double control_systemv28_a_default=0;
const double control_systemv29_a_default=0;
const double control_systemv30_a_default=0;
const double control_systemv31_a_default=0;
const double control_systemv32_a_default=0;
const double control_systemv33_a_default=0;
const double control_systemv34_a_default=0;
const double control_systemv35_a_default=0;
const double control_systemv36_a_default=0;
const double control_systemv37_a_default=0;
const double control_systemv38_a_default=0;
const double control_systemv39_a_default=0;
const double control_systemv40_a_default=0;
const double control_systemv41_a_default=0;
const double control_systemv42_a_default=0;
const double control_systemv43_a_default=0;
const double control_systemv44_a_default=0;
const double control_systemv45_a_default=0;
const double control_systemv46_a_default=0;
const double control_systemv47_a_default=0;
const double control_systemv48_a_default=0;
const double control_systemv49_a_default=0;
const double control_systemv50_a_default=0;
const double control_systemv51_a_default=0;
const double control_systemv52_a_default=0;
const double control_systemv53_a_default=0;
const double control_systemv54_a_default=0;
const double control_systemv55_a_default=0;
const double control_systemv56_a_default=0;
const double control_systemv57_a_default=0;
const double control_systemv58_a_default=0;
const double control_systemv59_a_default=0;
const double control_systemv60_a_default=0;
const double control_systemv61_a_default=0;
const double control_systemv62_a_default=0;
const double control_systemv63_a_default=0;
const double control_systemv64_a_default=0;
const double control_systemv65_a_default=0;
const double control_systemv66_a_default=0;
const double control_systemv67_a_default=0;
const double control_systemv68_a_default=0;
const double control_systemv69_a_default=0;
const double control_systemv70_a_default=0;
const double control_systemv71_a_default=0;
const double control_systemv72_a_default=0;
const double control_systemv73_a_default=0;
const double control_systemv74_a_default=0;
const double control_systemv75_a_default=0;
const double control_systemv76_a_default=0;
const double control_systemv77_a_default=0;
const double control_systemv78_a_default=0;
const double control_systemv79_a_default=0;
const double control_systemv80_a_default=0;
const double control_systemv81_a_default=0;
const double control_systemv82_a_default=0;
const double control_systemv83_a_default=0;
const double control_systemv84_a_default=1;
const double control_systemv85_a_default=1;
const double control_systemv86_a_default=1;
const double control_systemv87_a_default=1;
const double control_systemv88_a_default=1;
const double control_systemv89_a_default=1;
const double control_systemv90_a_default=1;
const double control_systemv91_a_default=1;
const double control_systemv92_a_default=0;
const double control_systemv93_a_default=0;
const double control_systemv94_a_default=0;
const double control_systemv95_a_default=0;
const double control_systemv96_a_default=0;
const double control_systemv97_a_default=0;
const double control_systemv98_a_default=0;
const double control_systemv99_a_default=0;
const double control_systemv100_a_default=0;
const double control_systemv101_a_default=0;
const double control_systemv102_a_default=0;
const double control_systemv103_a_default=0;
const double control_systemv104_a_default=0;
const double control_systemv105_a_default=0;
const double control_systemv106_a_default=0;
const double control_systemv107_a_default=0;
const double control_systemv108_a_default=0;
const double control_systemv109_a_default=0;
const double control_systemv110_a_default=0;
const double control_systemv111_a_default=0;
const double control_systemv112_a_default=0;
const double control_systemv113_a_default=0;
const double control_systemv114_a_default=0;
const double control_systemv115_a_default=0;
const double control_systemv116_a_default=0;
const double control_systemv117_a_default=0;
const double control_systemv118_a_default=0;
const double control_systemv119_a_default=0;
const double control_systemv120_a_default=0;
const double control_systemv121_a_default=0;
const double control_systemv122_a_default=0;
const double control_systemv123_a_default=0;
const double control_systemv124_a_default=0;
const double control_systemv125_a_default=0;
const double control_systemv126_a_default=0;
const double control_systemv127_a_default=780000;
const double control_systemv128_a_default=0;
const double control_systemv129_a_default=0;
const double control_systemv130_a_default=0;
const double control_systemv131_a_default=0;
const double control_systemv132_a_default=670000;
const double control_systemv133_a_default=1;
const double control_systemv134_a_default=1;
const double control_systemv135_a_default=1;
const double control_systemv136_a_default=1;
const double control_systemv137_a_default=1;
const double control_systemv138_a_default=1;
const double control_systemv139_a_default=1;
const double control_systemv140_a_default=1;
const double control_systemv141_a_default=1;
const double control_systemv142_a_default=1;
const double control_systemv143_a_default=0;
const double control_systemv144_a_default=0;
const double control_systemv145_a_default=0;
const double control_systemv146_a_default=0;
const double control_systemv147_a_default=0;
const double control_systemv148_a_default=0;
const double control_systemv149_a_default=0;
const double control_systemv150_a_default=0;
const double control_systemv151_a_default=1;
const double control_systemv152_a_default=0;
const double control_systemv153_a_default=0;
const double control_systemv154_a_default=0;
const double control_systemv155_a_default=0;
const double control_systemv156_a_default=0;
const double control_systemv157_a_default=0;
const double control_systemv158_a_default=1;
const double control_systemv159_a_default=0;
const double control_systemv160_a_default=0;
const double control_systemv161_a_default=0;
const double control_systemv162_a_default=0;
const double control_systemv163_a_default=0;
const double control_systemv164_a_default=0;
const double control_systemv165_a_default=0;
const double control_systemv166_a_default=0;
const double control_systemv167_a_default=0;
const double control_systemv168_a_default=0;
const double control_systemv169_a_default=0;
const double control_systemv170_a_default=0;
const double control_systemv171_a_default=0;
const double control_systemv172_a_default=0;
const double control_systemv173_a_default=0;
const double control_systemv174_a_default=0;
const double control_systemv175_a_default=0;
const double control_systemv176_a_default=0;
const double control_systemv177_a_default=0;
const double control_systemv178_a_default=0;
const double control_systemv179_a_default=0;
const double control_systemv180_a_default=0;
const double control_systemv181_a_default=0;
const double control_systemv182_a_default=0;
const double control_systemv183_a_default=0;
const double control_systemv184_a_default=0;
const double control_systemv185_a_default=0;
const double control_systemv186_a_default=0;
const double control_systemv187_a_default=0;
const double control_systemv188_a_default=0;
const double control_systemv189_a_default=0;
const double control_systemv190_a_default=0;
const double control_systemv191_a_default=0;
const double control_systemv192_a_default=0;
const double control_systemv193_a_default=0;
const double control_systemv194_a_default=0;
const double control_systemv195_a_default=0;
const double control_systemv196_a_default=0;
const double control_systemv197_a_default=0;
const double control_systemv198_a_default=0;
const double control_systemv199_a_default=0;
const double control_systemv200_a_default=0;
const double control_systemv201_a_default=0;
const double control_systemv202_a_default=0;
const double control_systemv203_a_default=0;
const double control_systemv204_a_default=0;
const double control_systemv205_a_default=0;
const double control_systemv206_a_default=0;
const double control_systemv207_a_default=0;
const double control_systemv208_a_default=0;
const double control_systemv209_a_default=0;
const double control_systemv210_a_default=0;
const double control_systemv211_a_default=0;
const double control_systemv212_a_default=0;
const double control_systemv213_a_default=0;
const double control_systemv214_a_default=0;
const double control_systemv215_a_default=1;
const double control_systemv216_a_default=1;
const double control_systemv217_a_default=1;
const double control_systemv218_a_default=1;
const double control_systemv219_a_default=1;
const double control_systemv220_a_default=1;
const double control_systemv221_a_default=1;
const double control_systemv222_a_default=1;
const double control_systemv223_a_default=0;
const double control_systemv224_a_default=0;
const double control_systemv225_a_default=0;
const double control_systemv226_a_default=0;
const double control_systemv227_a_default=0;
const double control_systemv228_a_default=0;
const double control_systemv229_a_default=0;
const double control_systemv230_a_default=0;
const double control_systemv231_a_default=0;
const double control_systemv232_a_default=0;
const double control_systemv233_a_default=0;
const double control_systemv234_a_default=0;
const double control_systemv235_a_default=0;
const double control_systemv236_a_default=0;
const double control_systemv237_a_default=0;
const double control_systemv238_a_default=0;
const double control_systemv239_a_default=0;
const double control_systemv240_a_default=0;
const double control_systemv241_a_default=1000000;
const double control_systemv242_a_default=700000;
const double control_systemv243_a_default=620000;
const double control_systemv244_a_default=300000;
const double control_systemv245_a_default=0;
const double control_systemv246_a_default=0;
const double control_systemv247_a_default=0;
const double control_systemv248_a_default=0;
const double control_systemv249_a_default=1;
const double control_systemv250_a_default=1;
const double control_systemv251_a_default=1;
const double control_systemv252_a_default=1;
const double control_systemv253_a_default=1;
const double control_systemv254_a_default=1;
const double control_systemv255_a_default=1;
const double control_systemv256_a_default=1;
const double control_systemv257_a_default=1;
const double control_systemv258_a_default=1;
const double control_systemv259_a_default=1;
const double control_systemv260_a_default=1;
const double control_systemv261_a_default=1;
const double control_systemv262_a_default=1;
const double control_systemv263_a_default=1;
const double control_systemv264_a_default=1;
const double control_systemv265_a_default=1;
const double control_systemv266_a_default=1;
const double control_systemv267_a_default=1;
const double control_systemv268_a_default=1;
const double control_systemv269_a_default=1;
const double control_systemv270_a_default=1;
const double control_systemv271_a_default=1;
const double control_systemv272_a_default=1;
const double control_systemv273_a_default=1;
const double control_systemv274_a_default=1;
const double control_systemv275_a_default=1;
const double control_systemv276_a_default=1;
const double control_systemv277_a_default=1;
const double control_systemv278_a_default=1;
const double control_systemv279_a_default=1;
const double control_systemv280_a_default=1;
const double control_systemv281_a_default=1;
const double control_systemv282_a_default=1;
const double control_systemv283_a_default=1;
const double control_systemv284_a_default=1;
const double control_systemv285_a_default=1;
const double control_systemv286_a_default=1;
const double control_systemv287_a_default=1;
const double control_systemv288_a_default=1;
const double control_systemv289_a_default=1;
const double control_systemv290_a_default=1;
const double control_systemv291_a_default=1;
const double control_systemv292_a_default=1;
const double control_systemv293_a_default=1;
const double control_systemv294_a_default=1;
const double control_systemv295_a_default=1;
const double control_systemv296_a_default=1;
const double control_systemv297_a_default=1;
const double control_systemv298_a_default=1;
const double control_systemv299_a_default=1;
const double control_systemv300_a_default=1;
const double control_systemv301_a_default=1;
const double control_systemv302_a_default=1;
const double control_systemv303_a_default=1;
const double control_systemv304_a_default=1;
const double control_systemv305_a_default=1;
const double control_systemv306_a_default=1;
const double control_systemv307_a_default=1;
const double control_systemv308_a_default=1;
const double control_systemv309_a_default=1;
const double control_systemv310_a_default=1;
const double control_systemv311_a_default=1;
const double control_systemv312_a_default=1;
const double control_systemv313_a_default=1;
const double control_systemv314_a_default=1;
const double control_systemv315_a_default=1;
const double control_systemv316_a_default=1;
const double control_systemv317_a_default=1;
const double control_systemv318_a_default=1;
const double control_systemv319_a_default=1;
const double control_systemv320_a_default=1;
const double control_systemv369_k_default=1;
const double control_systemv369_t_default=1;
const double control_systemv370_k_default=1;
const double control_systemv370_t_default=1;
const double control_systemv371_k_default=1;
const double control_systemv371_t_default=1;
const double control_systemv336_out_0_default=312109.586611364;
const double_4 control_systemv421_out_0_default={0.214164,0.214164,0.0111048,0.0111048};
const char control_systemv322_out_0_default=0;
const char control_systemv324_out_0_default=0;
const char control_systemv326_out_0_default=0;
const char_68 control_systemv379_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv380_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv389_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv390_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv391_out_0_default={0,0,0,0,1,1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv392_out_0_default={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const char_68 control_systemv394_out_0_default={1,1,1,1,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
const char_68 control_systemv395_out_0_default={1,1,1,1,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
const char_4 control_systemv404_out_0_default={0,0,0,0};
const char_4 control_systemv405_out_0_default={0,0,0,0};
const char_4 control_systemv408_out_0_default={1,1,1,1};
const char_4 control_systemv409_out_0_default={1,1,1,1};
const char_4 control_systemv411_out_0_default={0,0,0,0};
const char_4 control_systemv412_out_0_default={0,0,0,0};
const char_4 control_systemv415_out_0_default={0,0,0,0};
const char_4 control_systemv416_out_0_default={0,0,0,0};

/* Project signal database hash */
const unsigned int sp_database_hash_32=2287879898;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32=960795763;


/* Structures defines */
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 0.01
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 0.01
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0.01
/* Model integration method */
#define INTEGRATION_METHOD 0
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1E-6
/* Model end time */
#define INTEGRATION_END_TIME 1000000000
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10

/* External variables */
#define ext_vars_count 310

#define pressureactual_sup1 (*(double*)(ext_vars_addr[0]))
#define pressureactual_sup2 (*(double*)(ext_vars_addr[1]))
#define pressureactual_but1 (*(double*)(ext_vars_addr[2]))
#define pressureactual_but2 (*(double*)(ext_vars_addr[3]))
#define maincomp1_gnom (*(double*)(ext_vars_addr[4]))
#define maincomp2_gnom (*(double*)(ext_vars_addr[5]))
#define additcomp1_gnom (*(double*)(ext_vars_addr[6]))
#define additcomp2_gnom (*(double*)(ext_vars_addr[7]))
#define pressureactual_sup (*(double*)(ext_vars_addr[8]))
#define pressuredisplayed_sup (*(double*)(ext_vars_addr[9]))
#define pressuredisplayed_but1 (*(double*)(ext_vars_addr[10]))
#define pressuredisplayed_but2 (*(double*)(ext_vars_addr[11]))
#define kskvalve3_state (*(double*)(ext_vars_addr[12]))
#define kskvalve4_state (*(double*)(ext_vars_addr[13]))
#define btovalve2_state (*(double*)(ext_vars_addr[14]))
#define btovalve3_state (*(double*)(ext_vars_addr[15]))
#define btovalve4_state (*(double*)(ext_vars_addr[16]))
#define btovalve5_state (*(double*)(ext_vars_addr[17]))
#define btovalve6_state (*(double*)(ext_vars_addr[18]))
#define btovalve7_state (*(double*)(ext_vars_addr[19]))
#define btovalve8_state (*(double*)(ext_vars_addr[20]))
#define san2valve1_state (*(double*)(ext_vars_addr[21]))
#define san2valve2_state (*(double*)(ext_vars_addr[22]))
#define san3valve1_state (*(double*)(ext_vars_addr[23]))
#define san3valve2_state (*(double*)(ext_vars_addr[24]))
#define san4valve1_state (*(double*)(ext_vars_addr[25]))
#define san4valve2_state (*(double*)(ext_vars_addr[26]))
#define san5valve1_state (*(double*)(ext_vars_addr[27]))
#define san5valve2_state (*(double*)(ext_vars_addr[28]))
#define san6valve1_state (*(double*)(ext_vars_addr[29]))
#define san6valve2_state (*(double*)(ext_vars_addr[30]))
#define san7valve1_state (*(double*)(ext_vars_addr[31]))
#define san7valve2_state (*(double*)(ext_vars_addr[32]))
#define san8valve1_state (*(double*)(ext_vars_addr[33]))
#define san8valve2_state (*(double*)(ext_vars_addr[34]))
#define maincomp1_g (*(double*)(ext_vars_addr[35]))
#define maincomp2_g (*(double*)(ext_vars_addr[36]))
#define additcomp1_g (*(double*)(ext_vars_addr[37]))
#define additcomp2_g (*(double*)(ext_vars_addr[38]))
#define dynamicmode_control (*(char*)(ext_vars_addr[39]))
#define staticmode_control (*(char*)(ext_vars_addr[40]))
#define manualmode_control (*(char*)(ext_vars_addr[41]))
#define dynamicmode_state (*(char*)(ext_vars_addr[42]))
#define staticmode_state (*(char*)(ext_vars_addr[43]))
#define manualmode_state (*(char*)(ext_vars_addr[44]))
#define bosvvalve1_remoteallowed (*(char*)(ext_vars_addr[45]))
#define bosvvalve1_autocontrol (*(char*)(ext_vars_addr[46]))
#define bosvvalve2_remoteallowed (*(char*)(ext_vars_addr[47]))
#define bosvvalve2_autocontrol (*(char*)(ext_vars_addr[48]))
#define bosvvalve3_remoteallowed (*(char*)(ext_vars_addr[49]))
#define bosvvalve3_autocontrol (*(char*)(ext_vars_addr[50]))
#define bosvvalve4_remoteallowed (*(char*)(ext_vars_addr[51]))
#define bosvvalve4_autocontrol (*(char*)(ext_vars_addr[52]))
#define btovalve1_remoteallowed (*(char*)(ext_vars_addr[53]))
#define btovalve2_remoteallowed (*(char*)(ext_vars_addr[54]))
#define btovalve3_remoteallowed (*(char*)(ext_vars_addr[55]))
#define btovalve4_remoteallowed (*(char*)(ext_vars_addr[56]))
#define btovalve5_remoteallowed (*(char*)(ext_vars_addr[57]))
#define btovalve6_remoteallowed (*(char*)(ext_vars_addr[58]))
#define btovalve7_remoteallowed (*(char*)(ext_vars_addr[59]))
#define btovalve8_remoteallowed (*(char*)(ext_vars_addr[60]))
#define kskvalve1_remoteallowed (*(char*)(ext_vars_addr[61]))
#define kskvalve2_remoteallowed (*(char*)(ext_vars_addr[62]))
#define kskvalve3_remoteallowed (*(char*)(ext_vars_addr[63]))
#define kskvalve4_remoteallowed (*(char*)(ext_vars_addr[64]))
#define kpovalve1_remoteallowed (*(char*)(ext_vars_addr[65]))
#define kpovalve2_remoteallowed (*(char*)(ext_vars_addr[66]))
#define kpovalve3_remoteallowed (*(char*)(ext_vars_addr[67]))
#define kpovalve4_remoteallowed (*(char*)(ext_vars_addr[68]))
#define brsvalve1_remoteallowed (*(char*)(ext_vars_addr[69]))
#define brsvalve2_remoteallowed (*(char*)(ext_vars_addr[70]))
#define ko2valve1_remoteallowed (*(char*)(ext_vars_addr[71]))
#define ko2valve2_remoteallowed (*(char*)(ext_vars_addr[72]))
#define but1valve1_remoteallowed (*(char*)(ext_vars_addr[73]))
#define but1valve2_remoteallowed (*(char*)(ext_vars_addr[74]))
#define but2valve1_remoteallowed (*(char*)(ext_vars_addr[75]))
#define but2valve2_remoteallowed (*(char*)(ext_vars_addr[76]))
#define san1valve1_remoteallowed (*(char*)(ext_vars_addr[77]))
#define san1valve2_remoteallowed (*(char*)(ext_vars_addr[78]))
#define san2valve1_remoteallowed (*(char*)(ext_vars_addr[79]))
#define san2valve2_remoteallowed (*(char*)(ext_vars_addr[80]))
#define san3valve1_remoteallowed (*(char*)(ext_vars_addr[81]))
#define san3valve2_remoteallowed (*(char*)(ext_vars_addr[82]))
#define san4valve1_remoteallowed (*(char*)(ext_vars_addr[83]))
#define san4valve2_remoteallowed (*(char*)(ext_vars_addr[84]))
#define san5valve1_remoteallowed (*(char*)(ext_vars_addr[85]))
#define san5valve2_remoteallowed (*(char*)(ext_vars_addr[86]))
#define san6valve1_remoteallowed (*(char*)(ext_vars_addr[87]))
#define san6valve2_remoteallowed (*(char*)(ext_vars_addr[88]))
#define san7valve1_remoteallowed (*(char*)(ext_vars_addr[89]))
#define san7valve2_remoteallowed (*(char*)(ext_vars_addr[90]))
#define san8valve1_remoteallowed (*(char*)(ext_vars_addr[91]))
#define san8valve2_remoteallowed (*(char*)(ext_vars_addr[92]))
#define ks1valve1_remoteallowed (*(char*)(ext_vars_addr[93]))
#define ks1valve2_remoteallowed (*(char*)(ext_vars_addr[94]))
#define ks1valve3_remoteallowed (*(char*)(ext_vars_addr[95]))
#define ks2valve1_remoteallowed (*(char*)(ext_vars_addr[96]))
#define ks2valve2_remoteallowed (*(char*)(ext_vars_addr[97]))
#define ks2valve3_remoteallowed (*(char*)(ext_vars_addr[98]))
#define ks3valve1_remoteallowed (*(char*)(ext_vars_addr[99]))
#define ks3valve2_remoteallowed (*(char*)(ext_vars_addr[100]))
#define ks3valve3_remoteallowed (*(char*)(ext_vars_addr[101]))
#define ks4valve1_remoteallowed (*(char*)(ext_vars_addr[102]))
#define ks4valve2_remoteallowed (*(char*)(ext_vars_addr[103]))
#define ks4valve3_remoteallowed (*(char*)(ext_vars_addr[104]))
#define ks5valve1_remoteallowed (*(char*)(ext_vars_addr[105]))
#define ks5valve2_remoteallowed (*(char*)(ext_vars_addr[106]))
#define ks5valve3_remoteallowed (*(char*)(ext_vars_addr[107]))
#define ks6valve1_remoteallowed (*(char*)(ext_vars_addr[108]))
#define ks6valve2_remoteallowed (*(char*)(ext_vars_addr[109]))
#define ks6valve3_remoteallowed (*(char*)(ext_vars_addr[110]))
#define ks7valve1_remoteallowed (*(char*)(ext_vars_addr[111]))
#define ks7valve2_remoteallowed (*(char*)(ext_vars_addr[112]))
#define ks7valve3_remoteallowed (*(char*)(ext_vars_addr[113]))
#define ks8valve1_remoteallowed (*(char*)(ext_vars_addr[114]))
#define ks8valve2_remoteallowed (*(char*)(ext_vars_addr[115]))
#define ks8valve3_remoteallowed (*(char*)(ext_vars_addr[116]))
#define kpovalve1_autocontrol (*(char*)(ext_vars_addr[117]))
#define kpovalve2_autocontrol (*(char*)(ext_vars_addr[118]))
#define kpovalve3_autocontrol (*(char*)(ext_vars_addr[119]))
#define kpovalve4_autocontrol (*(char*)(ext_vars_addr[120]))
#define ko2valve1_autocontrol (*(char*)(ext_vars_addr[121]))
#define ko2valve2_autocontrol (*(char*)(ext_vars_addr[122]))
#define ks1valve1_autocontrol (*(char*)(ext_vars_addr[123]))
#define ks1valve2_autocontrol (*(char*)(ext_vars_addr[124]))
#define ks1valve3_autocontrol (*(char*)(ext_vars_addr[125]))
#define ks2valve1_autocontrol (*(char*)(ext_vars_addr[126]))
#define ks2valve2_autocontrol (*(char*)(ext_vars_addr[127]))
#define ks2valve3_autocontrol (*(char*)(ext_vars_addr[128]))
#define ks3valve1_autocontrol (*(char*)(ext_vars_addr[129]))
#define ks3valve2_autocontrol (*(char*)(ext_vars_addr[130]))
#define ks3valve3_autocontrol (*(char*)(ext_vars_addr[131]))
#define ks4valve1_autocontrol (*(char*)(ext_vars_addr[132]))
#define ks4valve2_autocontrol (*(char*)(ext_vars_addr[133]))
#define ks4valve3_autocontrol (*(char*)(ext_vars_addr[134]))
#define ks5valve1_autocontrol (*(char*)(ext_vars_addr[135]))
#define ks5valve2_autocontrol (*(char*)(ext_vars_addr[136]))
#define ks5valve3_autocontrol (*(char*)(ext_vars_addr[137]))
#define ks6valve1_autocontrol (*(char*)(ext_vars_addr[138]))
#define ks6valve2_autocontrol (*(char*)(ext_vars_addr[139]))
#define ks6valve3_autocontrol (*(char*)(ext_vars_addr[140]))
#define ks7valve1_autocontrol (*(char*)(ext_vars_addr[141]))
#define ks7valve2_autocontrol (*(char*)(ext_vars_addr[142]))
#define ks7valve3_autocontrol (*(char*)(ext_vars_addr[143]))
#define ks8valve1_autocontrol (*(char*)(ext_vars_addr[144]))
#define ks8valve2_autocontrol (*(char*)(ext_vars_addr[145]))
#define ks8valve3_autocontrol (*(char*)(ext_vars_addr[146]))
#define kskvalve1_autocontrol (*(char*)(ext_vars_addr[147]))
#define kskvalve2_autocontrol (*(char*)(ext_vars_addr[148]))
#define kskvalve3_autocontrol (*(char*)(ext_vars_addr[149]))
#define kskvalve4_autocontrol (*(char*)(ext_vars_addr[150]))
#define san1valve1_autocontrol (*(char*)(ext_vars_addr[151]))
#define san1valve2_autocontrol (*(char*)(ext_vars_addr[152]))
#define san2valve1_autocontrol (*(char*)(ext_vars_addr[153]))
#define san2valve2_autocontrol (*(char*)(ext_vars_addr[154]))
#define san3valve1_autocontrol (*(char*)(ext_vars_addr[155]))
#define san3valve2_autocontrol (*(char*)(ext_vars_addr[156]))
#define san4valve1_autocontrol (*(char*)(ext_vars_addr[157]))
#define san4valve2_autocontrol (*(char*)(ext_vars_addr[158]))
#define san5valve1_autocontrol (*(char*)(ext_vars_addr[159]))
#define san5valve2_autocontrol (*(char*)(ext_vars_addr[160]))
#define san6valve1_autocontrol (*(char*)(ext_vars_addr[161]))
#define san6valve2_autocontrol (*(char*)(ext_vars_addr[162]))
#define san7valve1_autocontrol (*(char*)(ext_vars_addr[163]))
#define san7valve2_autocontrol (*(char*)(ext_vars_addr[164]))
#define san8valve1_autocontrol (*(char*)(ext_vars_addr[165]))
#define san8valve2_autocontrol (*(char*)(ext_vars_addr[166]))
#define brsvalve1_autocontrol (*(char*)(ext_vars_addr[167]))
#define brsvalve2_autocontrol (*(char*)(ext_vars_addr[168]))
#define maincomp1_remoteallowed (*(char*)(ext_vars_addr[169]))
#define maincomp2_remoteallowed (*(char*)(ext_vars_addr[170]))
#define additcomp1_remoteallowed (*(char*)(ext_vars_addr[171]))
#define additcomp2_remoteallowed (*(char*)(ext_vars_addr[172]))
#define kskvalve1_remotecontrol (*(char*)(ext_vars_addr[173]))
#define kskvalve2_remotecontrol (*(char*)(ext_vars_addr[174]))
#define kskvalve3_remotecontrol (*(char*)(ext_vars_addr[175]))
#define kskvalve4_remotecontrol (*(char*)(ext_vars_addr[176]))
#define kpovalve1_remotecontrol (*(char*)(ext_vars_addr[177]))
#define kpovalve2_remotecontrol (*(char*)(ext_vars_addr[178]))
#define kpovalve3_remotecontrol (*(char*)(ext_vars_addr[179]))
#define kpovalve4_remotecontrol (*(char*)(ext_vars_addr[180]))
#define brsvalve1_remotecontrol (*(char*)(ext_vars_addr[181]))
#define brsvalve2_remotecontrol (*(char*)(ext_vars_addr[182]))
#define bosvvalve1_remotecontrol (*(char*)(ext_vars_addr[183]))
#define bosvvalve2_remotecontrol (*(char*)(ext_vars_addr[184]))
#define bosvvalve3_remotecontrol (*(char*)(ext_vars_addr[185]))
#define bosvvalve4_remotecontrol (*(char*)(ext_vars_addr[186]))
#define ko2valve1_remotecontrol (*(char*)(ext_vars_addr[187]))
#define ko2valve2_remotecontrol (*(char*)(ext_vars_addr[188]))
#define but1valve1_remotecontrol (*(char*)(ext_vars_addr[189]))
#define but1valve2_remotecontrol (*(char*)(ext_vars_addr[190]))
#define but2valve1_remotecontrol (*(char*)(ext_vars_addr[191]))
#define but2valve2_remotecontrol (*(char*)(ext_vars_addr[192]))
#define btovalve1_remotecontrol (*(char*)(ext_vars_addr[193]))
#define btovalve2_remotecontrol (*(char*)(ext_vars_addr[194]))
#define btovalve3_remotecontrol (*(char*)(ext_vars_addr[195]))
#define btovalve4_remotecontrol (*(char*)(ext_vars_addr[196]))
#define btovalve5_remotecontrol (*(char*)(ext_vars_addr[197]))
#define btovalve6_remotecontrol (*(char*)(ext_vars_addr[198]))
#define btovalve7_remotecontrol (*(char*)(ext_vars_addr[199]))
#define btovalve8_remotecontrol (*(char*)(ext_vars_addr[200]))
#define san1valve1_remotecontrol (*(char*)(ext_vars_addr[201]))
#define san1valve2_remotecontrol (*(char*)(ext_vars_addr[202]))
#define san2valve1_remotecontrol (*(char*)(ext_vars_addr[203]))
#define san2valve2_remotecontrol (*(char*)(ext_vars_addr[204]))
#define san3valve1_remotecontrol (*(char*)(ext_vars_addr[205]))
#define san3valve2_remotecontrol (*(char*)(ext_vars_addr[206]))
#define san4valve1_remotecontrol (*(char*)(ext_vars_addr[207]))
#define san4valve2_remotecontrol (*(char*)(ext_vars_addr[208]))
#define san5valve1_remotecontrol (*(char*)(ext_vars_addr[209]))
#define san5valve2_remotecontrol (*(char*)(ext_vars_addr[210]))
#define san6valve1_remotecontrol (*(char*)(ext_vars_addr[211]))
#define san6valve2_remotecontrol (*(char*)(ext_vars_addr[212]))
#define san7valve1_remotecontrol (*(char*)(ext_vars_addr[213]))
#define san7valve2_remotecontrol (*(char*)(ext_vars_addr[214]))
#define san8valve1_remotecontrol (*(char*)(ext_vars_addr[215]))
#define san8valve2_remotecontrol (*(char*)(ext_vars_addr[216]))
#define ks1valve1_remotecontrol (*(char*)(ext_vars_addr[217]))
#define ks1valve2_remotecontrol (*(char*)(ext_vars_addr[218]))
#define ks1valve3_remotecontrol (*(char*)(ext_vars_addr[219]))
#define ks2valve1_remotecontrol (*(char*)(ext_vars_addr[220]))
#define ks2valve2_remotecontrol (*(char*)(ext_vars_addr[221]))
#define ks2valve3_remotecontrol (*(char*)(ext_vars_addr[222]))
#define ks3valve1_remotecontrol (*(char*)(ext_vars_addr[223]))
#define ks3valve2_remotecontrol (*(char*)(ext_vars_addr[224]))
#define ks3valve3_remotecontrol (*(char*)(ext_vars_addr[225]))
#define ks4valve1_remotecontrol (*(char*)(ext_vars_addr[226]))
#define ks4valve2_remotecontrol (*(char*)(ext_vars_addr[227]))
#define ks4valve3_remotecontrol (*(char*)(ext_vars_addr[228]))
#define ks5valve1_remotecontrol (*(char*)(ext_vars_addr[229]))
#define ks5valve2_remotecontrol (*(char*)(ext_vars_addr[230]))
#define ks5valve3_remotecontrol (*(char*)(ext_vars_addr[231]))
#define ks6valve1_remotecontrol (*(char*)(ext_vars_addr[232]))
#define ks6valve2_remotecontrol (*(char*)(ext_vars_addr[233]))
#define ks6valve3_remotecontrol (*(char*)(ext_vars_addr[234]))
#define ks7valve1_remotecontrol (*(char*)(ext_vars_addr[235]))
#define ks7valve2_remotecontrol (*(char*)(ext_vars_addr[236]))
#define ks7valve3_remotecontrol (*(char*)(ext_vars_addr[237]))
#define ks8valve1_remotecontrol (*(char*)(ext_vars_addr[238]))
#define ks8valve2_remotecontrol (*(char*)(ext_vars_addr[239]))
#define ks8valve3_remotecontrol (*(char*)(ext_vars_addr[240]))
#define maincomp1_remotecontrol (*(char*)(ext_vars_addr[241]))
#define maincomp2_remotecontrol (*(char*)(ext_vars_addr[242]))
#define additcomp1_remotecontrol (*(char*)(ext_vars_addr[243]))
#define additcomp2_remotecontrol (*(char*)(ext_vars_addr[244]))
#define but1valve1_autocontrol (*(char*)(ext_vars_addr[245]))
#define but1valve2_autocontrol (*(char*)(ext_vars_addr[246]))
#define but2valve1_autocontrol (*(char*)(ext_vars_addr[247]))
#define but2valve2_autocontrol (*(char*)(ext_vars_addr[248]))
#define btovalve1_autocontrol (*(char*)(ext_vars_addr[249]))
#define btovalve2_autocontrol (*(char*)(ext_vars_addr[250]))
#define btovalve3_autocontrol (*(char*)(ext_vars_addr[251]))
#define btovalve4_autocontrol (*(char*)(ext_vars_addr[252]))
#define btovalve5_autocontrol (*(char*)(ext_vars_addr[253]))
#define btovalve6_autocontrol (*(char*)(ext_vars_addr[254]))
#define btovalve7_autocontrol (*(char*)(ext_vars_addr[255]))
#define btovalve8_autocontrol (*(char*)(ext_vars_addr[256]))
#define maincomp1_autocontrol (*(char*)(ext_vars_addr[257]))
#define maincomp2_autocontrol (*(char*)(ext_vars_addr[258]))
#define additcomp1_autocontrol (*(char*)(ext_vars_addr[259]))
#define additcomp2_autocontrol (*(char*)(ext_vars_addr[260]))
#define kskvalve1_state (*(char*)(ext_vars_addr[261]))
#define kskvalve2_state (*(char*)(ext_vars_addr[262]))
#define kpovalve1_state (*(char*)(ext_vars_addr[263]))
#define kpovalve2_state (*(char*)(ext_vars_addr[264]))
#define kpovalve3_state (*(char*)(ext_vars_addr[265]))
#define kpovalve4_state (*(char*)(ext_vars_addr[266]))
#define brsvalve1_state (*(char*)(ext_vars_addr[267]))
#define brsvalve2_state (*(char*)(ext_vars_addr[268]))
#define bosvvalve1_state (*(char*)(ext_vars_addr[269]))
#define bosvvalve2_state (*(char*)(ext_vars_addr[270]))
#define bosvvalve3_state (*(char*)(ext_vars_addr[271]))
#define bosvvalve4_state (*(char*)(ext_vars_addr[272]))
#define ko2valve1_state (*(char*)(ext_vars_addr[273]))
#define ko2valve2_state (*(char*)(ext_vars_addr[274]))
#define but1valve1_state (*(char*)(ext_vars_addr[275]))
#define but1valve2_state (*(char*)(ext_vars_addr[276]))
#define but2valve1_state (*(char*)(ext_vars_addr[277]))
#define but2valve2_state (*(char*)(ext_vars_addr[278]))
#define btovalve1_state (*(char*)(ext_vars_addr[279]))
#define san1valve1_state (*(char*)(ext_vars_addr[280]))
#define san1valve2_state (*(char*)(ext_vars_addr[281]))
#define ks1valve1_state (*(char*)(ext_vars_addr[282]))
#define ks1valve2_state (*(char*)(ext_vars_addr[283]))
#define ks1valve3_state (*(char*)(ext_vars_addr[284]))
#define ks2valve1_state (*(char*)(ext_vars_addr[285]))
#define ks2valve2_state (*(char*)(ext_vars_addr[286]))
#define ks2valve3_state (*(char*)(ext_vars_addr[287]))
#define ks3valve1_state (*(char*)(ext_vars_addr[288]))
#define ks3valve2_state (*(char*)(ext_vars_addr[289]))
#define ks3valve3_state (*(char*)(ext_vars_addr[290]))
#define ks4valve1_state (*(char*)(ext_vars_addr[291]))
#define ks4valve2_state (*(char*)(ext_vars_addr[292]))
#define ks4valve3_state (*(char*)(ext_vars_addr[293]))
#define ks5valve1_state (*(char*)(ext_vars_addr[294]))
#define ks5valve2_state (*(char*)(ext_vars_addr[295]))
#define ks5valve3_state (*(char*)(ext_vars_addr[296]))
#define ks6valve1_state (*(char*)(ext_vars_addr[297]))
#define ks6valve2_state (*(char*)(ext_vars_addr[298]))
#define ks6valve3_state (*(char*)(ext_vars_addr[299]))
#define ks7valve1_state (*(char*)(ext_vars_addr[300]))
#define ks7valve2_state (*(char*)(ext_vars_addr[301]))
#define ks7valve3_state (*(char*)(ext_vars_addr[302]))
#define ks8valve1_state (*(char*)(ext_vars_addr[303]))
#define ks8valve2_state (*(char*)(ext_vars_addr[304]))
#define ks8valve3_state (*(char*)(ext_vars_addr[305]))
#define maincomp1_state (*(char*)(ext_vars_addr[306]))
#define maincomp2_state (*(char*)(ext_vars_addr[307]))
#define additcomp1_state (*(char*)(ext_vars_addr[308]))
#define additcomp2_state (*(char*)(ext_vars_addr[309]))

const ext_var_info_record ext_vars_names[ext_vars_count] = {
  {"pressureactual_sup1", "Давление питательной магистрали ДД1, Па", (void*)&pressureactual_sup1_default, vt_double,   {1}, 0, dir_input, sizeof(double)} ,
  {"pressureactual_sup2", "Давление питательной магистрали ДД2, Па", (void*)&pressureactual_sup2_default, vt_double,   {1}, 1, dir_input, sizeof(double)} ,
  {"pressureactual_but1", "Давление в магистрали токоприемников №1", (void*)&pressureactual_but1_default, vt_double,   {1}, 2, dir_input, sizeof(double)} ,
  {"pressureactual_but2", "Давление в магистрали токоприемников №2", (void*)&pressureactual_but2_default, vt_double,   {1}, 3, dir_input, sizeof(double)} ,
  {"maincomp1_gnom", "Номинальный массовый расход", (void*)&maincomp1_gnom_default, vt_double,   {1}, 4, dir_input, sizeof(double)} ,
  {"maincomp2_gnom", "Номинальный массовый расход", (void*)&maincomp2_gnom_default, vt_double,   {1}, 5, dir_input, sizeof(double)} ,
  {"additcomp1_gnom", "Номинальный массовый расход", (void*)&additcomp1_gnom_default, vt_double,   {1}, 6, dir_input, sizeof(double)} ,
  {"additcomp2_gnom", "Номинальный массовый расход", (void*)&additcomp2_gnom_default, vt_double,   {1}, 7, dir_input, sizeof(double)} ,
  {"pressureactual_sup", "Давление питательной магистрали среднее, Па", (void*)&pressureactual_sup_default, vt_double,   {1}, 8, dir_inout, sizeof(double)} ,
  {"pressuredisplayed_sup", "Давление питательной магистрали среднее, Па", (void*)&pressuredisplayed_sup_default, vt_double,   {1}, 9, dir_inout, sizeof(double)} ,
  {"pressuredisplayed_but1", "Давление в магистрали токоприемников №1", (void*)&pressuredisplayed_but1_default, vt_double,   {1}, 10, dir_out, sizeof(double)} ,
  {"pressuredisplayed_but2", "Давление в магистрали токоприемников №2", (void*)&pressuredisplayed_but2_default, vt_double,   {1}, 11, dir_out, sizeof(double)} ,
  {"kskvalve3_state", "Состояние", (void*)&kskvalve3_state_default, vt_double,   {1}, 12, dir_inout, sizeof(double)} ,
  {"kskvalve4_state", "Состояние", (void*)&kskvalve4_state_default, vt_double,   {1}, 13, dir_inout, sizeof(double)} ,
  {"btovalve2_state", "Состояние", (void*)&btovalve2_state_default, vt_double,   {1}, 14, dir_inout, sizeof(double)} ,
  {"btovalve3_state", "Состояние", (void*)&btovalve3_state_default, vt_double,   {1}, 15, dir_inout, sizeof(double)} ,
  {"btovalve4_state", "Состояние", (void*)&btovalve4_state_default, vt_double,   {1}, 16, dir_inout, sizeof(double)} ,
  {"btovalve5_state", "Состояние", (void*)&btovalve5_state_default, vt_double,   {1}, 17, dir_inout, sizeof(double)} ,
  {"btovalve6_state", "Состояние", (void*)&btovalve6_state_default, vt_double,   {1}, 18, dir_inout, sizeof(double)} ,
  {"btovalve7_state", "Состояние", (void*)&btovalve7_state_default, vt_double,   {1}, 19, dir_inout, sizeof(double)} ,
  {"btovalve8_state", "Состояние", (void*)&btovalve8_state_default, vt_double,   {1}, 20, dir_inout, sizeof(double)} ,
  {"san2valve1_state", "Состояние", (void*)&san2valve1_state_default, vt_double,   {1}, 21, dir_inout, sizeof(double)} ,
  {"san2valve2_state", "Состояние", (void*)&san2valve2_state_default, vt_double,   {1}, 22, dir_inout, sizeof(double)} ,
  {"san3valve1_state", "Состояние", (void*)&san3valve1_state_default, vt_double,   {1}, 23, dir_inout, sizeof(double)} ,
  {"san3valve2_state", "Состояние", (void*)&san3valve2_state_default, vt_double,   {1}, 24, dir_inout, sizeof(double)} ,
  {"san4valve1_state", "Состояние", (void*)&san4valve1_state_default, vt_double,   {1}, 25, dir_inout, sizeof(double)} ,
  {"san4valve2_state", "Состояние", (void*)&san4valve2_state_default, vt_double,   {1}, 26, dir_inout, sizeof(double)} ,
  {"san5valve1_state", "Состояние", (void*)&san5valve1_state_default, vt_double,   {1}, 27, dir_inout, sizeof(double)} ,
  {"san5valve2_state", "Состояние", (void*)&san5valve2_state_default, vt_double,   {1}, 28, dir_inout, sizeof(double)} ,
  {"san6valve1_state", "Состояние", (void*)&san6valve1_state_default, vt_double,   {1}, 29, dir_inout, sizeof(double)} ,
  {"san6valve2_state", "Состояние", (void*)&san6valve2_state_default, vt_double,   {1}, 30, dir_inout, sizeof(double)} ,
  {"san7valve1_state", "Состояние", (void*)&san7valve1_state_default, vt_double,   {1}, 31, dir_inout, sizeof(double)} ,
  {"san7valve2_state", "Состояние", (void*)&san7valve2_state_default, vt_double,   {1}, 32, dir_inout, sizeof(double)} ,
  {"san8valve1_state", "Состояние", (void*)&san8valve1_state_default, vt_double,   {1}, 33, dir_inout, sizeof(double)} ,
  {"san8valve2_state", "Состояние", (void*)&san8valve2_state_default, vt_double,   {1}, 34, dir_inout, sizeof(double)} ,
  {"maincomp1_g", "Текущий массовый расход", (void*)&maincomp1_g_default, vt_double,   {1}, 35, dir_out, sizeof(double)} ,
  {"maincomp2_g", "Текущий массовый расход", (void*)&maincomp2_g_default, vt_double,   {1}, 36, dir_out, sizeof(double)} ,
  {"additcomp1_g", "Текущий массовый расход", (void*)&additcomp1_g_default, vt_double,   {1}, 37, dir_out, sizeof(double)} ,
  {"additcomp2_g", "Текущий массовый расход", (void*)&additcomp2_g_default, vt_double,   {1}, 38, dir_out, sizeof(double)} ,
  {"dynamicmode_control", "Сигнал активации динамического режима", (void*)&dynamicmode_control_default, vt_bool,   {1}, 39, dir_input, sizeof(char)} ,
  {"staticmode_control", "Сигнал активации статического режима", (void*)&staticmode_control_default, vt_bool,   {1}, 40, dir_input, sizeof(char)} ,
  {"manualmode_control", "Сигнал активации ручного режима", (void*)&manualmode_control_default, vt_bool,   {1}, 41, dir_input, sizeof(char)} ,
  {"dynamicmode_state", "Активность динамического режима", (void*)&dynamicmode_state_default, vt_bool,   {1}, 42, dir_inout, sizeof(char)} ,
  {"staticmode_state", "Активность статического режима", (void*)&staticmode_state_default, vt_bool,   {1}, 43, dir_inout, sizeof(char)} ,
  {"manualmode_state", "Активность ручного режима", (void*)&manualmode_state_default, vt_bool,   {1}, 44, dir_inout, sizeof(char)} ,
  {"bosvvalve1_remoteallowed", "Разрешение ручного режима", (void*)&bosvvalve1_remoteallowed_default, vt_bool,   {1}, 45, dir_inout, sizeof(char)} ,
  {"bosvvalve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&bosvvalve1_autocontrol_default, vt_bool,   {1}, 46, dir_inout, sizeof(char)} ,
  {"bosvvalve2_remoteallowed", "Разрешение ручного режима", (void*)&bosvvalve2_remoteallowed_default, vt_bool,   {1}, 47, dir_inout, sizeof(char)} ,
  {"bosvvalve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&bosvvalve2_autocontrol_default, vt_bool,   {1}, 48, dir_inout, sizeof(char)} ,
  {"bosvvalve3_remoteallowed", "Разрешение ручного режима", (void*)&bosvvalve3_remoteallowed_default, vt_bool,   {1}, 49, dir_inout, sizeof(char)} ,
  {"bosvvalve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&bosvvalve3_autocontrol_default, vt_bool,   {1}, 50, dir_inout, sizeof(char)} ,
  {"bosvvalve4_remoteallowed", "Разрешение ручного режима", (void*)&bosvvalve4_remoteallowed_default, vt_bool,   {1}, 51, dir_inout, sizeof(char)} ,
  {"bosvvalve4_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&bosvvalve4_autocontrol_default, vt_bool,   {1}, 52, dir_inout, sizeof(char)} ,
  {"btovalve1_remoteallowed", "Разрешение ручного режима", (void*)&btovalve1_remoteallowed_default, vt_bool,   {1}, 53, dir_inout, sizeof(char)} ,
  {"btovalve2_remoteallowed", "Разрешение ручного режима", (void*)&btovalve2_remoteallowed_default, vt_bool,   {1}, 54, dir_inout, sizeof(char)} ,
  {"btovalve3_remoteallowed", "Разрешение ручного режима", (void*)&btovalve3_remoteallowed_default, vt_bool,   {1}, 55, dir_inout, sizeof(char)} ,
  {"btovalve4_remoteallowed", "Разрешение ручного режима", (void*)&btovalve4_remoteallowed_default, vt_bool,   {1}, 56, dir_inout, sizeof(char)} ,
  {"btovalve5_remoteallowed", "Разрешение ручного режима", (void*)&btovalve5_remoteallowed_default, vt_bool,   {1}, 57, dir_inout, sizeof(char)} ,
  {"btovalve6_remoteallowed", "Разрешение ручного режима", (void*)&btovalve6_remoteallowed_default, vt_bool,   {1}, 58, dir_inout, sizeof(char)} ,
  {"btovalve7_remoteallowed", "Разрешение ручного режима", (void*)&btovalve7_remoteallowed_default, vt_bool,   {1}, 59, dir_inout, sizeof(char)} ,
  {"btovalve8_remoteallowed", "Разрешение ручного режима", (void*)&btovalve8_remoteallowed_default, vt_bool,   {1}, 60, dir_inout, sizeof(char)} ,
  {"kskvalve1_remoteallowed", "Разрешение ручного режима", (void*)&kskvalve1_remoteallowed_default, vt_bool,   {1}, 61, dir_inout, sizeof(char)} ,
  {"kskvalve2_remoteallowed", "Разрешение ручного режима", (void*)&kskvalve2_remoteallowed_default, vt_bool,   {1}, 62, dir_inout, sizeof(char)} ,
  {"kskvalve3_remoteallowed", "Разрешение ручного режима", (void*)&kskvalve3_remoteallowed_default, vt_bool,   {1}, 63, dir_inout, sizeof(char)} ,
  {"kskvalve4_remoteallowed", "Разрешение ручного режима", (void*)&kskvalve4_remoteallowed_default, vt_bool,   {1}, 64, dir_inout, sizeof(char)} ,
  {"kpovalve1_remoteallowed", "Разрешение ручного режима", (void*)&kpovalve1_remoteallowed_default, vt_bool,   {1}, 65, dir_inout, sizeof(char)} ,
  {"kpovalve2_remoteallowed", "Разрешение ручного режима", (void*)&kpovalve2_remoteallowed_default, vt_bool,   {1}, 66, dir_inout, sizeof(char)} ,
  {"kpovalve3_remoteallowed", "Разрешение ручного режима", (void*)&kpovalve3_remoteallowed_default, vt_bool,   {1}, 67, dir_inout, sizeof(char)} ,
  {"kpovalve4_remoteallowed", "Разрешение ручного режима", (void*)&kpovalve4_remoteallowed_default, vt_bool,   {1}, 68, dir_inout, sizeof(char)} ,
  {"brsvalve1_remoteallowed", "Разрешение ручного режима", (void*)&brsvalve1_remoteallowed_default, vt_bool,   {1}, 69, dir_inout, sizeof(char)} ,
  {"brsvalve2_remoteallowed", "Разрешение ручного режима", (void*)&brsvalve2_remoteallowed_default, vt_bool,   {1}, 70, dir_inout, sizeof(char)} ,
  {"ko2valve1_remoteallowed", "Разрешение ручного режима", (void*)&ko2valve1_remoteallowed_default, vt_bool,   {1}, 71, dir_inout, sizeof(char)} ,
  {"ko2valve2_remoteallowed", "Разрешение ручного режима", (void*)&ko2valve2_remoteallowed_default, vt_bool,   {1}, 72, dir_inout, sizeof(char)} ,
  {"but1valve1_remoteallowed", "Разрешение ручного режима", (void*)&but1valve1_remoteallowed_default, vt_bool,   {1}, 73, dir_inout, sizeof(char)} ,
  {"but1valve2_remoteallowed", "Разрешение ручного режима", (void*)&but1valve2_remoteallowed_default, vt_bool,   {1}, 74, dir_inout, sizeof(char)} ,
  {"but2valve1_remoteallowed", "Разрешение ручного режима", (void*)&but2valve1_remoteallowed_default, vt_bool,   {1}, 75, dir_inout, sizeof(char)} ,
  {"but2valve2_remoteallowed", "Разрешение ручного режима", (void*)&but2valve2_remoteallowed_default, vt_bool,   {1}, 76, dir_inout, sizeof(char)} ,
  {"san1valve1_remoteallowed", "Разрешение ручного режима", (void*)&san1valve1_remoteallowed_default, vt_bool,   {1}, 77, dir_inout, sizeof(char)} ,
  {"san1valve2_remoteallowed", "Разрешение ручного режима", (void*)&san1valve2_remoteallowed_default, vt_bool,   {1}, 78, dir_inout, sizeof(char)} ,
  {"san2valve1_remoteallowed", "Разрешение ручного режима", (void*)&san2valve1_remoteallowed_default, vt_bool,   {1}, 79, dir_inout, sizeof(char)} ,
  {"san2valve2_remoteallowed", "Разрешение ручного режима", (void*)&san2valve2_remoteallowed_default, vt_bool,   {1}, 80, dir_inout, sizeof(char)} ,
  {"san3valve1_remoteallowed", "Разрешение ручного режима", (void*)&san3valve1_remoteallowed_default, vt_bool,   {1}, 81, dir_inout, sizeof(char)} ,
  {"san3valve2_remoteallowed", "Разрешение ручного режима", (void*)&san3valve2_remoteallowed_default, vt_bool,   {1}, 82, dir_inout, sizeof(char)} ,
  {"san4valve1_remoteallowed", "Разрешение ручного режима", (void*)&san4valve1_remoteallowed_default, vt_bool,   {1}, 83, dir_inout, sizeof(char)} ,
  {"san4valve2_remoteallowed", "Разрешение ручного режима", (void*)&san4valve2_remoteallowed_default, vt_bool,   {1}, 84, dir_inout, sizeof(char)} ,
  {"san5valve1_remoteallowed", "Разрешение ручного режима", (void*)&san5valve1_remoteallowed_default, vt_bool,   {1}, 85, dir_inout, sizeof(char)} ,
  {"san5valve2_remoteallowed", "Разрешение ручного режима", (void*)&san5valve2_remoteallowed_default, vt_bool,   {1}, 86, dir_inout, sizeof(char)} ,
  {"san6valve1_remoteallowed", "Разрешение ручного режима", (void*)&san6valve1_remoteallowed_default, vt_bool,   {1}, 87, dir_inout, sizeof(char)} ,
  {"san6valve2_remoteallowed", "Разрешение ручного режима", (void*)&san6valve2_remoteallowed_default, vt_bool,   {1}, 88, dir_inout, sizeof(char)} ,
  {"san7valve1_remoteallowed", "Разрешение ручного режима", (void*)&san7valve1_remoteallowed_default, vt_bool,   {1}, 89, dir_inout, sizeof(char)} ,
  {"san7valve2_remoteallowed", "Разрешение ручного режима", (void*)&san7valve2_remoteallowed_default, vt_bool,   {1}, 90, dir_inout, sizeof(char)} ,
  {"san8valve1_remoteallowed", "Разрешение ручного режима", (void*)&san8valve1_remoteallowed_default, vt_bool,   {1}, 91, dir_inout, sizeof(char)} ,
  {"san8valve2_remoteallowed", "Разрешение ручного режима", (void*)&san8valve2_remoteallowed_default, vt_bool,   {1}, 92, dir_inout, sizeof(char)} ,
  {"ks1valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks1valve1_remoteallowed_default, vt_bool,   {1}, 93, dir_inout, sizeof(char)} ,
  {"ks1valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks1valve2_remoteallowed_default, vt_bool,   {1}, 94, dir_inout, sizeof(char)} ,
  {"ks1valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks1valve3_remoteallowed_default, vt_bool,   {1}, 95, dir_inout, sizeof(char)} ,
  {"ks2valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks2valve1_remoteallowed_default, vt_bool,   {1}, 96, dir_inout, sizeof(char)} ,
  {"ks2valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks2valve2_remoteallowed_default, vt_bool,   {1}, 97, dir_inout, sizeof(char)} ,
  {"ks2valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks2valve3_remoteallowed_default, vt_bool,   {1}, 98, dir_inout, sizeof(char)} ,
  {"ks3valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks3valve1_remoteallowed_default, vt_bool,   {1}, 99, dir_inout, sizeof(char)} ,
  {"ks3valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks3valve2_remoteallowed_default, vt_bool,   {1}, 100, dir_inout, sizeof(char)} ,
  {"ks3valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks3valve3_remoteallowed_default, vt_bool,   {1}, 101, dir_inout, sizeof(char)} ,
  {"ks4valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks4valve1_remoteallowed_default, vt_bool,   {1}, 102, dir_inout, sizeof(char)} ,
  {"ks4valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks4valve2_remoteallowed_default, vt_bool,   {1}, 103, dir_inout, sizeof(char)} ,
  {"ks4valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks4valve3_remoteallowed_default, vt_bool,   {1}, 104, dir_inout, sizeof(char)} ,
  {"ks5valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks5valve1_remoteallowed_default, vt_bool,   {1}, 105, dir_inout, sizeof(char)} ,
  {"ks5valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks5valve2_remoteallowed_default, vt_bool,   {1}, 106, dir_inout, sizeof(char)} ,
  {"ks5valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks5valve3_remoteallowed_default, vt_bool,   {1}, 107, dir_inout, sizeof(char)} ,
  {"ks6valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks6valve1_remoteallowed_default, vt_bool,   {1}, 108, dir_inout, sizeof(char)} ,
  {"ks6valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks6valve2_remoteallowed_default, vt_bool,   {1}, 109, dir_inout, sizeof(char)} ,
  {"ks6valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks6valve3_remoteallowed_default, vt_bool,   {1}, 110, dir_inout, sizeof(char)} ,
  {"ks7valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks7valve1_remoteallowed_default, vt_bool,   {1}, 111, dir_inout, sizeof(char)} ,
  {"ks7valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks7valve2_remoteallowed_default, vt_bool,   {1}, 112, dir_inout, sizeof(char)} ,
  {"ks7valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks7valve3_remoteallowed_default, vt_bool,   {1}, 113, dir_inout, sizeof(char)} ,
  {"ks8valve1_remoteallowed", "Разрешение ручного режима", (void*)&ks8valve1_remoteallowed_default, vt_bool,   {1}, 114, dir_inout, sizeof(char)} ,
  {"ks8valve2_remoteallowed", "Разрешение ручного режима", (void*)&ks8valve2_remoteallowed_default, vt_bool,   {1}, 115, dir_inout, sizeof(char)} ,
  {"ks8valve3_remoteallowed", "Разрешение ручного режима", (void*)&ks8valve3_remoteallowed_default, vt_bool,   {1}, 116, dir_inout, sizeof(char)} ,
  {"kpovalve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kpovalve1_autocontrol_default, vt_bool,   {1}, 117, dir_inout, sizeof(char)} ,
  {"kpovalve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kpovalve2_autocontrol_default, vt_bool,   {1}, 118, dir_inout, sizeof(char)} ,
  {"kpovalve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kpovalve3_autocontrol_default, vt_bool,   {1}, 119, dir_inout, sizeof(char)} ,
  {"kpovalve4_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kpovalve4_autocontrol_default, vt_bool,   {1}, 120, dir_inout, sizeof(char)} ,
  {"ko2valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ko2valve1_autocontrol_default, vt_bool,   {1}, 121, dir_inout, sizeof(char)} ,
  {"ko2valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&ko2valve2_autocontrol_default, vt_bool,   {1}, 122, dir_inout, sizeof(char)} ,
  {"ks1valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks1valve1_autocontrol_default, vt_bool,   {1}, 123, dir_inout, sizeof(char)} ,
  {"ks1valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks1valve2_autocontrol_default, vt_bool,   {1}, 124, dir_inout, sizeof(char)} ,
  {"ks1valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks1valve3_autocontrol_default, vt_bool,   {1}, 125, dir_inout, sizeof(char)} ,
  {"ks2valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks2valve1_autocontrol_default, vt_bool,   {1}, 126, dir_inout, sizeof(char)} ,
  {"ks2valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks2valve2_autocontrol_default, vt_bool,   {1}, 127, dir_inout, sizeof(char)} ,
  {"ks2valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks2valve3_autocontrol_default, vt_bool,   {1}, 128, dir_inout, sizeof(char)} ,
  {"ks3valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks3valve1_autocontrol_default, vt_bool,   {1}, 129, dir_inout, sizeof(char)} ,
  {"ks3valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks3valve2_autocontrol_default, vt_bool,   {1}, 130, dir_inout, sizeof(char)} ,
  {"ks3valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks3valve3_autocontrol_default, vt_bool,   {1}, 131, dir_inout, sizeof(char)} ,
  {"ks4valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks4valve1_autocontrol_default, vt_bool,   {1}, 132, dir_inout, sizeof(char)} ,
  {"ks4valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks4valve2_autocontrol_default, vt_bool,   {1}, 133, dir_inout, sizeof(char)} ,
  {"ks4valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks4valve3_autocontrol_default, vt_bool,   {1}, 134, dir_inout, sizeof(char)} ,
  {"ks5valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks5valve1_autocontrol_default, vt_bool,   {1}, 135, dir_inout, sizeof(char)} ,
  {"ks5valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks5valve2_autocontrol_default, vt_bool,   {1}, 136, dir_inout, sizeof(char)} ,
  {"ks5valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks5valve3_autocontrol_default, vt_bool,   {1}, 137, dir_inout, sizeof(char)} ,
  {"ks6valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks6valve1_autocontrol_default, vt_bool,   {1}, 138, dir_inout, sizeof(char)} ,
  {"ks6valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks6valve2_autocontrol_default, vt_bool,   {1}, 139, dir_inout, sizeof(char)} ,
  {"ks6valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks6valve3_autocontrol_default, vt_bool,   {1}, 140, dir_inout, sizeof(char)} ,
  {"ks7valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks7valve1_autocontrol_default, vt_bool,   {1}, 141, dir_inout, sizeof(char)} ,
  {"ks7valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks7valve2_autocontrol_default, vt_bool,   {1}, 142, dir_inout, sizeof(char)} ,
  {"ks7valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks7valve3_autocontrol_default, vt_bool,   {1}, 143, dir_inout, sizeof(char)} ,
  {"ks8valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks8valve1_autocontrol_default, vt_bool,   {1}, 144, dir_inout, sizeof(char)} ,
  {"ks8valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks8valve2_autocontrol_default, vt_bool,   {1}, 145, dir_inout, sizeof(char)} ,
  {"ks8valve3_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&ks8valve3_autocontrol_default, vt_bool,   {1}, 146, dir_inout, sizeof(char)} ,
  {"kskvalve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kskvalve1_autocontrol_default, vt_bool,   {1}, 147, dir_inout, sizeof(char)} ,
  {"kskvalve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&kskvalve2_autocontrol_default, vt_bool,   {1}, 148, dir_inout, sizeof(char)} ,
  {"kskvalve3_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&kskvalve3_autocontrol_default, vt_bool,   {1}, 149, dir_inout, sizeof(char)} ,
  {"kskvalve4_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&kskvalve4_autocontrol_default, vt_bool,   {1}, 150, dir_inout, sizeof(char)} ,
  {"san1valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&san1valve1_autocontrol_default, vt_bool,   {1}, 151, dir_inout, sizeof(char)} ,
  {"san1valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&san1valve2_autocontrol_default, vt_bool,   {1}, 152, dir_inout, sizeof(char)} ,
  {"san2valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san2valve1_autocontrol_default, vt_bool,   {1}, 153, dir_inout, sizeof(char)} ,
  {"san2valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san2valve2_autocontrol_default, vt_bool,   {1}, 154, dir_inout, sizeof(char)} ,
  {"san3valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san3valve1_autocontrol_default, vt_bool,   {1}, 155, dir_inout, sizeof(char)} ,
  {"san3valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san3valve2_autocontrol_default, vt_bool,   {1}, 156, dir_inout, sizeof(char)} ,
  {"san4valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san4valve1_autocontrol_default, vt_bool,   {1}, 157, dir_inout, sizeof(char)} ,
  {"san4valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san4valve2_autocontrol_default, vt_bool,   {1}, 158, dir_inout, sizeof(char)} ,
  {"san5valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san5valve1_autocontrol_default, vt_bool,   {1}, 159, dir_inout, sizeof(char)} ,
  {"san5valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san5valve2_autocontrol_default, vt_bool,   {1}, 160, dir_inout, sizeof(char)} ,
  {"san6valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san6valve1_autocontrol_default, vt_bool,   {1}, 161, dir_inout, sizeof(char)} ,
  {"san6valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san6valve2_autocontrol_default, vt_bool,   {1}, 162, dir_inout, sizeof(char)} ,
  {"san7valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san7valve1_autocontrol_default, vt_bool,   {1}, 163, dir_inout, sizeof(char)} ,
  {"san7valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san7valve2_autocontrol_default, vt_bool,   {1}, 164, dir_inout, sizeof(char)} ,
  {"san8valve1_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san8valve1_autocontrol_default, vt_bool,   {1}, 165, dir_inout, sizeof(char)} ,
  {"san8valve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&san8valve2_autocontrol_default, vt_bool,   {1}, 166, dir_inout, sizeof(char)} ,
  {"brsvalve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&brsvalve1_autocontrol_default, vt_bool,   {1}, 167, dir_inout, sizeof(char)} ,
  {"brsvalve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&brsvalve2_autocontrol_default, vt_bool,   {1}, 168, dir_inout, sizeof(char)} ,
  {"maincomp1_remoteallowed", "Разрешение ручного режима", (void*)&maincomp1_remoteallowed_default, vt_bool,   {1}, 169, dir_inout, sizeof(char)} ,
  {"maincomp2_remoteallowed", "Разрешение ручного режима", (void*)&maincomp2_remoteallowed_default, vt_bool,   {1}, 170, dir_inout, sizeof(char)} ,
  {"additcomp1_remoteallowed", "Разрешение ручного режима", (void*)&additcomp1_remoteallowed_default, vt_bool,   {1}, 171, dir_inout, sizeof(char)} ,
  {"additcomp2_remoteallowed", "Разрешение ручного режима", (void*)&additcomp2_remoteallowed_default, vt_bool,   {1}, 172, dir_inout, sizeof(char)} ,
  {"kskvalve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kskvalve1_remotecontrol_default, vt_bool,   {1}, 173, dir_input, sizeof(char)} ,
  {"kskvalve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kskvalve2_remotecontrol_default, vt_bool,   {1}, 174, dir_input, sizeof(char)} ,
  {"kskvalve3_remotecontrol", "Сигнал управления в ручном режиме", (void*)&kskvalve3_remotecontrol_default, vt_bool,   {1}, 175, dir_input, sizeof(char)} ,
  {"kskvalve4_remotecontrol", "Сигнал управления в ручном режиме", (void*)&kskvalve4_remotecontrol_default, vt_bool,   {1}, 176, dir_input, sizeof(char)} ,
  {"kpovalve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kpovalve1_remotecontrol_default, vt_bool,   {1}, 177, dir_input, sizeof(char)} ,
  {"kpovalve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kpovalve2_remotecontrol_default, vt_bool,   {1}, 178, dir_input, sizeof(char)} ,
  {"kpovalve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kpovalve3_remotecontrol_default, vt_bool,   {1}, 179, dir_input, sizeof(char)} ,
  {"kpovalve4_remotecontrol", "Сигнал активации в ручном режиме", (void*)&kpovalve4_remotecontrol_default, vt_bool,   {1}, 180, dir_input, sizeof(char)} ,
  {"brsvalve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&brsvalve1_remotecontrol_default, vt_bool,   {1}, 181, dir_input, sizeof(char)} ,
  {"brsvalve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&brsvalve2_remotecontrol_default, vt_bool,   {1}, 182, dir_input, sizeof(char)} ,
  {"bosvvalve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&bosvvalve1_remotecontrol_default, vt_bool,   {1}, 183, dir_input, sizeof(char)} ,
  {"bosvvalve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&bosvvalve2_remotecontrol_default, vt_bool,   {1}, 184, dir_input, sizeof(char)} ,
  {"bosvvalve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&bosvvalve3_remotecontrol_default, vt_bool,   {1}, 185, dir_input, sizeof(char)} ,
  {"bosvvalve4_remotecontrol", "Сигнал активации в ручном режиме", (void*)&bosvvalve4_remotecontrol_default, vt_bool,   {1}, 186, dir_input, sizeof(char)} ,
  {"ko2valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ko2valve1_remotecontrol_default, vt_bool,   {1}, 187, dir_input, sizeof(char)} ,
  {"ko2valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&ko2valve2_remotecontrol_default, vt_bool,   {1}, 188, dir_input, sizeof(char)} ,
  {"but1valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&but1valve1_remotecontrol_default, vt_bool,   {1}, 189, dir_input, sizeof(char)} ,
  {"but1valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&but1valve2_remotecontrol_default, vt_bool,   {1}, 190, dir_input, sizeof(char)} ,
  {"but2valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&but2valve1_remotecontrol_default, vt_bool,   {1}, 191, dir_input, sizeof(char)} ,
  {"but2valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&but2valve2_remotecontrol_default, vt_bool,   {1}, 192, dir_input, sizeof(char)} ,
  {"btovalve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&btovalve1_remotecontrol_default, vt_bool,   {1}, 193, dir_input, sizeof(char)} ,
  {"btovalve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve2_remotecontrol_default, vt_bool,   {1}, 194, dir_input, sizeof(char)} ,
  {"btovalve3_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve3_remotecontrol_default, vt_bool,   {1}, 195, dir_input, sizeof(char)} ,
  {"btovalve4_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve4_remotecontrol_default, vt_bool,   {1}, 196, dir_input, sizeof(char)} ,
  {"btovalve5_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve5_remotecontrol_default, vt_bool,   {1}, 197, dir_input, sizeof(char)} ,
  {"btovalve6_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve6_remotecontrol_default, vt_bool,   {1}, 198, dir_input, sizeof(char)} ,
  {"btovalve7_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve7_remotecontrol_default, vt_bool,   {1}, 199, dir_input, sizeof(char)} ,
  {"btovalve8_remotecontrol", "Сигнал управления в ручном режиме", (void*)&btovalve8_remotecontrol_default, vt_bool,   {1}, 200, dir_input, sizeof(char)} ,
  {"san1valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&san1valve1_remotecontrol_default, vt_bool,   {1}, 201, dir_input, sizeof(char)} ,
  {"san1valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&san1valve2_remotecontrol_default, vt_bool,   {1}, 202, dir_input, sizeof(char)} ,
  {"san2valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san2valve1_remotecontrol_default, vt_bool,   {1}, 203, dir_input, sizeof(char)} ,
  {"san2valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san2valve2_remotecontrol_default, vt_bool,   {1}, 204, dir_input, sizeof(char)} ,
  {"san3valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san3valve1_remotecontrol_default, vt_bool,   {1}, 205, dir_input, sizeof(char)} ,
  {"san3valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san3valve2_remotecontrol_default, vt_bool,   {1}, 206, dir_input, sizeof(char)} ,
  {"san4valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san4valve1_remotecontrol_default, vt_bool,   {1}, 207, dir_input, sizeof(char)} ,
  {"san4valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san4valve2_remotecontrol_default, vt_bool,   {1}, 208, dir_input, sizeof(char)} ,
  {"san5valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san5valve1_remotecontrol_default, vt_bool,   {1}, 209, dir_input, sizeof(char)} ,
  {"san5valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san5valve2_remotecontrol_default, vt_bool,   {1}, 210, dir_input, sizeof(char)} ,
  {"san6valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san6valve1_remotecontrol_default, vt_bool,   {1}, 211, dir_input, sizeof(char)} ,
  {"san6valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san6valve2_remotecontrol_default, vt_bool,   {1}, 212, dir_input, sizeof(char)} ,
  {"san7valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san7valve1_remotecontrol_default, vt_bool,   {1}, 213, dir_input, sizeof(char)} ,
  {"san7valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san7valve2_remotecontrol_default, vt_bool,   {1}, 214, dir_input, sizeof(char)} ,
  {"san8valve1_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san8valve1_remotecontrol_default, vt_bool,   {1}, 215, dir_input, sizeof(char)} ,
  {"san8valve2_remotecontrol", "Сигнал управления в ручном режиме", (void*)&san8valve2_remotecontrol_default, vt_bool,   {1}, 216, dir_input, sizeof(char)} ,
  {"ks1valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks1valve1_remotecontrol_default, vt_bool,   {1}, 217, dir_input, sizeof(char)} ,
  {"ks1valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks1valve2_remotecontrol_default, vt_bool,   {1}, 218, dir_input, sizeof(char)} ,
  {"ks1valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks1valve3_remotecontrol_default, vt_bool,   {1}, 219, dir_input, sizeof(char)} ,
  {"ks2valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks2valve1_remotecontrol_default, vt_bool,   {1}, 220, dir_input, sizeof(char)} ,
  {"ks2valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks2valve2_remotecontrol_default, vt_bool,   {1}, 221, dir_input, sizeof(char)} ,
  {"ks2valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks2valve3_remotecontrol_default, vt_bool,   {1}, 222, dir_input, sizeof(char)} ,
  {"ks3valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks3valve1_remotecontrol_default, vt_bool,   {1}, 223, dir_input, sizeof(char)} ,
  {"ks3valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks3valve2_remotecontrol_default, vt_bool,   {1}, 224, dir_input, sizeof(char)} ,
  {"ks3valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks3valve3_remotecontrol_default, vt_bool,   {1}, 225, dir_input, sizeof(char)} ,
  {"ks4valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks4valve1_remotecontrol_default, vt_bool,   {1}, 226, dir_input, sizeof(char)} ,
  {"ks4valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks4valve2_remotecontrol_default, vt_bool,   {1}, 227, dir_input, sizeof(char)} ,
  {"ks4valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks4valve3_remotecontrol_default, vt_bool,   {1}, 228, dir_input, sizeof(char)} ,
  {"ks5valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks5valve1_remotecontrol_default, vt_bool,   {1}, 229, dir_input, sizeof(char)} ,
  {"ks5valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks5valve2_remotecontrol_default, vt_bool,   {1}, 230, dir_input, sizeof(char)} ,
  {"ks5valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks5valve3_remotecontrol_default, vt_bool,   {1}, 231, dir_input, sizeof(char)} ,
  {"ks6valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks6valve1_remotecontrol_default, vt_bool,   {1}, 232, dir_input, sizeof(char)} ,
  {"ks6valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks6valve2_remotecontrol_default, vt_bool,   {1}, 233, dir_input, sizeof(char)} ,
  {"ks6valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks6valve3_remotecontrol_default, vt_bool,   {1}, 234, dir_input, sizeof(char)} ,
  {"ks7valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks7valve1_remotecontrol_default, vt_bool,   {1}, 235, dir_input, sizeof(char)} ,
  {"ks7valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks7valve2_remotecontrol_default, vt_bool,   {1}, 236, dir_input, sizeof(char)} ,
  {"ks7valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks7valve3_remotecontrol_default, vt_bool,   {1}, 237, dir_input, sizeof(char)} ,
  {"ks8valve1_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks8valve1_remotecontrol_default, vt_bool,   {1}, 238, dir_input, sizeof(char)} ,
  {"ks8valve2_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks8valve2_remotecontrol_default, vt_bool,   {1}, 239, dir_input, sizeof(char)} ,
  {"ks8valve3_remotecontrol", "Сигнал активации в ручном режиме", (void*)&ks8valve3_remotecontrol_default, vt_bool,   {1}, 240, dir_input, sizeof(char)} ,
  {"maincomp1_remotecontrol", "Сигнал активации ручного режима", (void*)&maincomp1_remotecontrol_default, vt_bool,   {1}, 241, dir_input, sizeof(char)} ,
  {"maincomp2_remotecontrol", "Сигнал активации ручного режима", (void*)&maincomp2_remotecontrol_default, vt_bool,   {1}, 242, dir_input, sizeof(char)} ,
  {"additcomp1_remotecontrol", "Сигнал активации ручного режима", (void*)&additcomp1_remotecontrol_default, vt_bool,   {1}, 243, dir_input, sizeof(char)} ,
  {"additcomp2_remotecontrol", "Сигнал активации ручного режима", (void*)&additcomp2_remotecontrol_default, vt_bool,   {1}, 244, dir_input, sizeof(char)} ,
  {"but1valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&but1valve1_autocontrol_default, vt_bool,   {1}, 245, dir_input, sizeof(char)} ,
  {"but1valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&but1valve2_autocontrol_default, vt_bool,   {1}, 246, dir_input, sizeof(char)} ,
  {"but2valve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&but2valve1_autocontrol_default, vt_bool,   {1}, 247, dir_input, sizeof(char)} ,
  {"but2valve2_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&but2valve2_autocontrol_default, vt_bool,   {1}, 248, dir_input, sizeof(char)} ,
  {"btovalve1_autocontrol", "Сигнал активации в автоматическом режиме", (void*)&btovalve1_autocontrol_default, vt_bool,   {1}, 249, dir_input, sizeof(char)} ,
  {"btovalve2_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve2_autocontrol_default, vt_bool,   {1}, 250, dir_input, sizeof(char)} ,
  {"btovalve3_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve3_autocontrol_default, vt_bool,   {1}, 251, dir_input, sizeof(char)} ,
  {"btovalve4_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve4_autocontrol_default, vt_bool,   {1}, 252, dir_input, sizeof(char)} ,
  {"btovalve5_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve5_autocontrol_default, vt_bool,   {1}, 253, dir_input, sizeof(char)} ,
  {"btovalve6_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve6_autocontrol_default, vt_bool,   {1}, 254, dir_input, sizeof(char)} ,
  {"btovalve7_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve7_autocontrol_default, vt_bool,   {1}, 255, dir_input, sizeof(char)} ,
  {"btovalve8_autocontrol", "Сигнал управления в автоматическом режиме", (void*)&btovalve8_autocontrol_default, vt_bool,   {1}, 256, dir_input, sizeof(char)} ,
  {"maincomp1_autocontrol", "Сигнал активации автоматического режима", (void*)&maincomp1_autocontrol_default, vt_bool,   {1}, 257, dir_inout, sizeof(char)} ,
  {"maincomp2_autocontrol", "Сигнал активации автоматического режима", (void*)&maincomp2_autocontrol_default, vt_bool,   {1}, 258, dir_inout, sizeof(char)} ,
  {"additcomp1_autocontrol", "Сигнал активации автоматического режима", (void*)&additcomp1_autocontrol_default, vt_bool,   {1}, 259, dir_inout, sizeof(char)} ,
  {"additcomp2_autocontrol", "Сигнал активации автоматического режима", (void*)&additcomp2_autocontrol_default, vt_bool,   {1}, 260, dir_inout, sizeof(char)} ,
  {"kskvalve1_state", "Активность задвижки", (void*)&kskvalve1_state_default, vt_bool,   {1}, 261, dir_inout, sizeof(char)} ,
  {"kskvalve2_state", "Активность задвижки", (void*)&kskvalve2_state_default, vt_bool,   {1}, 262, dir_inout, sizeof(char)} ,
  {"kpovalve1_state", "Активность задвижки", (void*)&kpovalve1_state_default, vt_bool,   {1}, 263, dir_inout, sizeof(char)} ,
  {"kpovalve2_state", "Активность задвижки", (void*)&kpovalve2_state_default, vt_bool,   {1}, 264, dir_inout, sizeof(char)} ,
  {"kpovalve3_state", "Активность задвижки", (void*)&kpovalve3_state_default, vt_bool,   {1}, 265, dir_inout, sizeof(char)} ,
  {"kpovalve4_state", "Активность задвижки", (void*)&kpovalve4_state_default, vt_bool,   {1}, 266, dir_inout, sizeof(char)} ,
  {"brsvalve1_state", "Активность задвижки", (void*)&brsvalve1_state_default, vt_bool,   {1}, 267, dir_inout, sizeof(char)} ,
  {"brsvalve2_state", "Активность задвижки", (void*)&brsvalve2_state_default, vt_bool,   {1}, 268, dir_inout, sizeof(char)} ,
  {"bosvvalve1_state", "Активность задвижки", (void*)&bosvvalve1_state_default, vt_bool,   {1}, 269, dir_inout, sizeof(char)} ,
  {"bosvvalve2_state", "Активность задвижки", (void*)&bosvvalve2_state_default, vt_bool,   {1}, 270, dir_inout, sizeof(char)} ,
  {"bosvvalve3_state", "Активность задвижки", (void*)&bosvvalve3_state_default, vt_bool,   {1}, 271, dir_inout, sizeof(char)} ,
  {"bosvvalve4_state", "Активность задвижки", (void*)&bosvvalve4_state_default, vt_bool,   {1}, 272, dir_inout, sizeof(char)} ,
  {"ko2valve1_state", "Активность задвижки", (void*)&ko2valve1_state_default, vt_bool,   {1}, 273, dir_inout, sizeof(char)} ,
  {"ko2valve2_state", "Состояние", (void*)&ko2valve2_state_default, vt_bool,   {1}, 274, dir_inout, sizeof(char)} ,
  {"but1valve1_state", "Активность задвижки", (void*)&but1valve1_state_default, vt_bool,   {1}, 275, dir_inout, sizeof(char)} ,
  {"but1valve2_state", "Активность задвижки", (void*)&but1valve2_state_default, vt_bool,   {1}, 276, dir_inout, sizeof(char)} ,
  {"but2valve1_state", "Активность задвижки", (void*)&but2valve1_state_default, vt_bool,   {1}, 277, dir_inout, sizeof(char)} ,
  {"but2valve2_state", "Активность задвижки", (void*)&but2valve2_state_default, vt_bool,   {1}, 278, dir_inout, sizeof(char)} ,
  {"btovalve1_state", "Активность задвижки", (void*)&btovalve1_state_default, vt_bool,   {1}, 279, dir_inout, sizeof(char)} ,
  {"san1valve1_state", "Активность задвижки", (void*)&san1valve1_state_default, vt_bool,   {1}, 280, dir_inout, sizeof(char)} ,
  {"san1valve2_state", "Активность задвижки", (void*)&san1valve2_state_default, vt_bool,   {1}, 281, dir_inout, sizeof(char)} ,
  {"ks1valve1_state", "Активность задвижки", (void*)&ks1valve1_state_default, vt_bool,   {1}, 282, dir_inout, sizeof(char)} ,
  {"ks1valve2_state", "Активность задвижки", (void*)&ks1valve2_state_default, vt_bool,   {1}, 283, dir_inout, sizeof(char)} ,
  {"ks1valve3_state", "Активность задвижки", (void*)&ks1valve3_state_default, vt_bool,   {1}, 284, dir_inout, sizeof(char)} ,
  {"ks2valve1_state", "Активность задвижки", (void*)&ks2valve1_state_default, vt_bool,   {1}, 285, dir_inout, sizeof(char)} ,
  {"ks2valve2_state", "Активность задвижки", (void*)&ks2valve2_state_default, vt_bool,   {1}, 286, dir_inout, sizeof(char)} ,
  {"ks2valve3_state", "Активность задвижки", (void*)&ks2valve3_state_default, vt_bool,   {1}, 287, dir_inout, sizeof(char)} ,
  {"ks3valve1_state", "Активность задвижки", (void*)&ks3valve1_state_default, vt_bool,   {1}, 288, dir_inout, sizeof(char)} ,
  {"ks3valve2_state", "Активность задвижки", (void*)&ks3valve2_state_default, vt_bool,   {1}, 289, dir_inout, sizeof(char)} ,
  {"ks3valve3_state", "Активность задвижки", (void*)&ks3valve3_state_default, vt_bool,   {1}, 290, dir_inout, sizeof(char)} ,
  {"ks4valve1_state", "Активность задвижки", (void*)&ks4valve1_state_default, vt_bool,   {1}, 291, dir_inout, sizeof(char)} ,
  {"ks4valve2_state", "Активность задвижки", (void*)&ks4valve2_state_default, vt_bool,   {1}, 292, dir_inout, sizeof(char)} ,
  {"ks4valve3_state", "Активность задвижки", (void*)&ks4valve3_state_default, vt_bool,   {1}, 293, dir_inout, sizeof(char)} ,
  {"ks5valve1_state", "Активность задвижки", (void*)&ks5valve1_state_default, vt_bool,   {1}, 294, dir_inout, sizeof(char)} ,
  {"ks5valve2_state", "Активность задвижки", (void*)&ks5valve2_state_default, vt_bool,   {1}, 295, dir_inout, sizeof(char)} ,
  {"ks5valve3_state", "Активность задвижки", (void*)&ks5valve3_state_default, vt_bool,   {1}, 296, dir_inout, sizeof(char)} ,
  {"ks6valve1_state", "Активность задвижки", (void*)&ks6valve1_state_default, vt_bool,   {1}, 297, dir_inout, sizeof(char)} ,
  {"ks6valve2_state", "Активность задвижки", (void*)&ks6valve2_state_default, vt_bool,   {1}, 298, dir_inout, sizeof(char)} ,
  {"ks6valve3_state", "Активность задвижки", (void*)&ks6valve3_state_default, vt_bool,   {1}, 299, dir_inout, sizeof(char)} ,
  {"ks7valve1_state", "Активность задвижки", (void*)&ks7valve1_state_default, vt_bool,   {1}, 300, dir_inout, sizeof(char)} ,
  {"ks7valve2_state", "Активность задвижки", (void*)&ks7valve2_state_default, vt_bool,   {1}, 301, dir_inout, sizeof(char)} ,
  {"ks7valve3_state", "Активность задвижки", (void*)&ks7valve3_state_default, vt_bool,   {1}, 302, dir_inout, sizeof(char)} ,
  {"ks8valve1_state", "Активность задвижки", (void*)&ks8valve1_state_default, vt_bool,   {1}, 303, dir_inout, sizeof(char)} ,
  {"ks8valve2_state", "Активность задвижки", (void*)&ks8valve2_state_default, vt_bool,   {1}, 304, dir_inout, sizeof(char)} ,
  {"ks8valve3_state", "Активность задвижки", (void*)&ks8valve3_state_default, vt_bool,   {1}, 305, dir_inout, sizeof(char)} ,
  {"maincomp1_state", "Активность компрессора", (void*)&maincomp1_state_default, vt_bool,   {1}, 306, dir_inout, sizeof(char)} ,
  {"maincomp2_state", "Активность компрессора", (void*)&maincomp2_state_default, vt_bool,   {1}, 307, dir_inout, sizeof(char)} ,
  {"additcomp1_state", "Активность компрессора", (void*)&additcomp1_state_default, vt_bool,   {1}, 308, dir_inout, sizeof(char)} ,
  {"additcomp2_state", "Активность компрессора", (void*)&additcomp2_state_default, vt_bool,   {1}, 309, dir_inout, sizeof(char)} 
};
/* Dynamical variables */
#define din_vars_count 3


#define din_vars_dimension 3
#define control_systemv369_out_0 din_vars[0]
#define control_systemv369_out_0_deri derivates[0]
#define control_systemv370_out_0 din_vars[1]
#define control_systemv370_out_0_deri derivates[1]
#define control_systemv371_out_0 din_vars[2]
#define control_systemv371_out_0_deri derivates[2]

const ext_var_info_record din_vars_names[din_vars_count] = {
  {"control_systemv369_out_0", "TAperiodika1 integrator output", (void*)&control_systemv369_out_0_default, vt_double,   {1}, 0, dir_input, sizeof(double)} ,
  {"control_systemv370_out_0", "TAperiodika1 integrator output", (void*)&control_systemv370_out_0_default, vt_double,   {1}, 1, dir_input, sizeof(double)} ,
  {"control_systemv371_out_0", "TAperiodika1 integrator output", (void*)&control_systemv371_out_0_default, vt_double,   {1}, 2, dir_input, sizeof(double)} 
};
/* State variables */
#define state_vars_count 71


typedef struct {
  double control_systemv335_out_0_;
  double control_systemv335_out_1_;
  double control_systemv335_out_2_;
  double control_systemv335_out_3_;
  double_4 control_systemv358_out_0_;
  double_68 control_systemv365_out_0_;
  double_68 control_systemv366_out_0_;
  double control_systemv373_out_0_;
  double control_systemv374_out_0_;
  double_68 control_systemv398_out_0_;
  double_68 control_systemv399_out_0_;
  double control_systemv400_out_0_;
  char control_systemv321_out_0_;
  char control_systemv321_out_1_;
  char control_systemv321_out_2_;
  char control_systemv321_out_3_;
  char control_systemv321_out_4_;
  char control_systemv321_out_5_;
  char control_systemv321_out_6_;
  char control_systemv321_out_7_;
  char control_systemv321_out_8_;
  char control_systemv323_out_0_;
  char control_systemv323state_;
  char control_systemv325_out_0_;
  char control_systemv325state_;
  char control_systemv327_out_0_;
  char control_systemv327state_;
  char control_systemv329_out_0_;
  char control_systemv329_out_1_;
  char control_systemv329_out_2_;
  char control_systemv330_out_0_;
  char control_systemv332_out_0_;
  char control_systemv337_out_0_;
  char_68 control_systemv352_out_0_;
  char_68 control_systemv353_out_0_;
  char_68 control_systemv353_trigger_;
  char_68 control_systemv354_out_0_;
  char_68 control_systemv355_out_0_;
  char_68 control_systemv355_trigger_;
  char_4 control_systemv359_out_0_;
  char_4 control_systemv360_out_0_;
  char_4 control_systemv360_trigger_;
  char_4 control_systemv361_out_0_;
  char_4 control_systemv362_out_0_;
  char_4 control_systemv362_trigger_;
  char_4 control_systemv367_out_0_;
  char_4 control_systemv368_out_0_;
  char control_systemv375_out_0_;
  char_68 control_systemv377_out_0_;
  char_68 control_systemv378_out_0_;
  char_68 control_systemv381_out_0_;
  char_68 control_systemv382_out_0_;
  char_68 control_systemv383_out_0_;
  char control_systemv384_out_0_;
  char control_systemv385_out_0_;
  char control_systemv386_out_0_;
  char control_systemv387_out_0_;
  char_68 control_systemv393_out_0_;
  char_68 control_systemv396_out_0_;
  char_68 control_systemv396state_;
  char control_systemv401_out_0_;
  char_4 control_systemv403_out_0_;
  char_4 control_systemv406_out_0_;
  char_4 control_systemv407_out_0_;
  char_4 control_systemv410_out_0_;
  char_4 control_systemv413_out_0_;
  char_4 control_systemv414_out_0_;
  char_4 control_systemv417_out_0_;
  char_4 control_systemv417state_;
  char_4 control_systemv419_out_0_;
  char_4 control_systemv420_out_0_;
} t_state_vars;



const ext_var_info_record state_vars_names[state_vars_count] = {
  {"control_systemv335_out_0", "Signal reader variable", (void*)&control_systemv335_out_0_default, vt_double,   {1}, 0, dir_out, sizeof(double)} ,
  {"control_systemv335_out_1", "Signal reader variable", (void*)&control_systemv335_out_1_default, vt_double,   {1}, 8, dir_out, sizeof(double)} ,
  {"control_systemv335_out_2", "Signal reader variable", (void*)&control_systemv335_out_2_default, vt_double,   {1}, 16, dir_out, sizeof(double)} ,
  {"control_systemv335_out_3", "Signal reader variable", (void*)&control_systemv335_out_3_default, vt_double,   {1}, 24, dir_out, sizeof(double)} ,
  {"control_systemv358_out_0", "Signal reader variable", (void*)&control_systemv358_out_0_default, vt_double,   {4}, 32, dir_out, sizeof(double_4)} ,
  {"control_systemv365_out_0", "Step delay state", (void*)&control_systemv365_out_0_default, vt_double,   {68}, 64, dir_input, sizeof(double_68)} ,
  {"control_systemv366_out_0", "Step delay state", (void*)&control_systemv366_out_0_default, vt_double,   {68}, 608, dir_input, sizeof(double_68)} ,
  {"control_systemv373_out_0", "Signal reader variable", (void*)&control_systemv373_out_0_default, vt_double,   {1}, 1152, dir_out, sizeof(double)} ,
  {"control_systemv374_out_0", "Signal reader variable", (void*)&control_systemv374_out_0_default, vt_double,   {1}, 1160, dir_out, sizeof(double)} ,
  {"control_systemv398_out_0", "Signal reader variable", (void*)&control_systemv398_out_0_default, vt_double,   {68}, 1168, dir_out, sizeof(double_68)} ,
  {"control_systemv399_out_0", "Signal reader variable", (void*)&control_systemv399_out_0_default, vt_double,   {68}, 1712, dir_out, sizeof(double_68)} ,
  {"control_systemv400_out_0", "Signal reader variable", (void*)&control_systemv400_out_0_default, vt_double,   {1}, 2256, dir_out, sizeof(double)} ,
  {"control_systemv321_out_0", "Signal reader variable", (void*)&control_systemv321_out_0_default, vt_bool,   {1}, 2264, dir_out, sizeof(char)} ,
  {"control_systemv321_out_1", "Signal reader variable", (void*)&control_systemv321_out_1_default, vt_bool,   {1}, 2265, dir_out, sizeof(char)} ,
  {"control_systemv321_out_2", "Signal reader variable", (void*)&control_systemv321_out_2_default, vt_bool,   {1}, 2266, dir_out, sizeof(char)} ,
  {"control_systemv321_out_3", "Signal reader variable", (void*)&control_systemv321_out_3_default, vt_bool,   {1}, 2267, dir_out, sizeof(char)} ,
  {"control_systemv321_out_4", "Signal reader variable", (void*)&control_systemv321_out_4_default, vt_bool,   {1}, 2268, dir_out, sizeof(char)} ,
  {"control_systemv321_out_5", "Signal reader variable", (void*)&control_systemv321_out_5_default, vt_bool,   {1}, 2269, dir_out, sizeof(char)} ,
  {"control_systemv321_out_6", "Signal reader variable", (void*)&control_systemv321_out_6_default, vt_bool,   {1}, 2270, dir_out, sizeof(char)} ,
  {"control_systemv321_out_7", "Signal reader variable", (void*)&control_systemv321_out_7_default, vt_bool,   {1}, 2271, dir_out, sizeof(char)} ,
  {"control_systemv321_out_8", "Signal reader variable", (void*)&control_systemv321_out_8_default, vt_bool,   {1}, 2272, dir_out, sizeof(char)} ,
  {"control_systemv323_out_0", "Trigger S out", (void*)&control_systemv323_out_0_default, vt_bool,   {1}, 2273, dir_input, sizeof(char)} ,
  {"control_systemv323state", "Trigger S state variable", (void*)&control_systemv323state_default, vt_bool,   {1}, 2274, dir_input, sizeof(char)} ,
  {"control_systemv325_out_0", "Trigger S out", (void*)&control_systemv325_out_0_default, vt_bool,   {1}, 2275, dir_input, sizeof(char)} ,
  {"control_systemv325state", "Trigger S state variable", (void*)&control_systemv325state_default, vt_bool,   {1}, 2276, dir_input, sizeof(char)} ,
  {"control_systemv327_out_0", "Trigger S out", (void*)&control_systemv327_out_0_default, vt_bool,   {1}, 2277, dir_input, sizeof(char)} ,
  {"control_systemv327state", "Trigger S state variable", (void*)&control_systemv327state_default, vt_bool,   {1}, 2278, dir_input, sizeof(char)} ,
  {"control_systemv329_out_0", "Signal reader variable", (void*)&control_systemv329_out_0_default, vt_bool,   {1}, 2279, dir_out, sizeof(char)} ,
  {"control_systemv329_out_1", "Signal reader variable", (void*)&control_systemv329_out_1_default, vt_bool,   {1}, 2280, dir_out, sizeof(char)} ,
  {"control_systemv329_out_2", "Signal reader variable", (void*)&control_systemv329_out_2_default, vt_bool,   {1}, 2281, dir_out, sizeof(char)} ,
  {"control_systemv330_out_0", "If section state", (void*)&control_systemv330_out_0_default, vt_bool,   {1}, 2282, dir_input, sizeof(char)} ,
  {"control_systemv332_out_0", "If section state", (void*)&control_systemv332_out_0_default, vt_bool,   {1}, 2283, dir_input, sizeof(char)} ,
  {"control_systemv337_out_0", "If section state", (void*)&control_systemv337_out_0_default, vt_bool,   {1}, 2284, dir_input, sizeof(char)} ,
  {"control_systemv352_out_0", "Signal reader variable", (void*)&control_systemv352_out_0_default, vt_bool,   {68}, 2285, dir_out, sizeof(char_68)} ,
  {"control_systemv353_out_0", "TOneImpulse_on impulse on out", (void*)&control_systemv353_out_0_default, vt_bool,   {68}, 2353, dir_input, sizeof(char_68)} ,
  {"control_systemv353_trigger", "TOneImpulse_on impulse trigger", (void*)&control_systemv353_trigger_default, vt_bool,   {68}, 2421, dir_input, sizeof(char_68)} ,
  {"control_systemv354_out_0", "Signal reader variable", (void*)&control_systemv354_out_0_default, vt_bool,   {68}, 2489, dir_out, sizeof(char_68)} ,
  {"control_systemv355_out_0", "TOneImpulse_on impulse on out", (void*)&control_systemv355_out_0_default, vt_bool,   {68}, 2557, dir_input, sizeof(char_68)} ,
  {"control_systemv355_trigger", "TOneImpulse_on impulse trigger", (void*)&control_systemv355_trigger_default, vt_bool,   {68}, 2625, dir_input, sizeof(char_68)} ,
  {"control_systemv359_out_0", "Signal reader variable", (void*)&control_systemv359_out_0_default, vt_bool,   {4}, 2693, dir_out, sizeof(char_4)} ,
  {"control_systemv360_out_0", "TOneImpulse_on impulse on out", (void*)&control_systemv360_out_0_default, vt_bool,   {4}, 2697, dir_input, sizeof(char_4)} ,
  {"control_systemv360_trigger", "TOneImpulse_on impulse trigger", (void*)&control_systemv360_trigger_default, vt_bool,   {4}, 2701, dir_input, sizeof(char_4)} ,
  {"control_systemv361_out_0", "Signal reader variable", (void*)&control_systemv361_out_0_default, vt_bool,   {4}, 2705, dir_out, sizeof(char_4)} ,
  {"control_systemv362_out_0", "TOneImpulse_on impulse on out", (void*)&control_systemv362_out_0_default, vt_bool,   {4}, 2709, dir_input, sizeof(char_4)} ,
  {"control_systemv362_trigger", "TOneImpulse_on impulse trigger", (void*)&control_systemv362_trigger_default, vt_bool,   {4}, 2713, dir_input, sizeof(char_4)} ,
  {"control_systemv367_out_0", "Step delay state", (void*)&control_systemv367_out_0_default, vt_bool,   {4}, 2717, dir_input, sizeof(char_4)} ,
  {"control_systemv368_out_0", "Step delay state", (void*)&control_systemv368_out_0_default, vt_bool,   {4}, 2721, dir_input, sizeof(char_4)} ,
  {"control_systemv375_out_0", "Logical block output", (void*)&control_systemv375_out_0_default, vt_bool,   {1}, 2725, dir_out, sizeof(char)} ,
  {"control_systemv377_out_0", "Signal reader variable", (void*)&control_systemv377_out_0_default, vt_bool,   {68}, 2726, dir_out, sizeof(char_68)} ,
  {"control_systemv378_out_0", "Signal reader variable", (void*)&control_systemv378_out_0_default, vt_bool,   {68}, 2794, dir_out, sizeof(char_68)} ,
  {"control_systemv381_out_0", "Signal reader variable", (void*)&control_systemv381_out_0_default, vt_bool,   {68}, 2862, dir_out, sizeof(char_68)} ,
  {"control_systemv382_out_0", "Signal reader variable", (void*)&control_systemv382_out_0_default, vt_bool,   {68}, 2930, dir_out, sizeof(char_68)} ,
  {"control_systemv383_out_0", "Signal reader variable", (void*)&control_systemv383_out_0_default, vt_bool,   {68}, 2998, dir_out, sizeof(char_68)} ,
  {"control_systemv384_out_0", "Logical block output", (void*)&control_systemv384_out_0_default, vt_bool,   {1}, 3066, dir_out, sizeof(char)} ,
  {"control_systemv385_out_0", "Logical block output", (void*)&control_systemv385_out_0_default, vt_bool,   {1}, 3067, dir_out, sizeof(char)} ,
  {"control_systemv386_out_0", "Logical block output", (void*)&control_systemv386_out_0_default, vt_bool,   {1}, 3068, dir_out, sizeof(char)} ,
  {"control_systemv387_out_0", "Logical block output", (void*)&control_systemv387_out_0_default, vt_bool,   {1}, 3069, dir_out, sizeof(char)} ,
  {"control_systemv393_out_0", "Signal reader variable", (void*)&control_systemv393_out_0_default, vt_bool,   {68}, 3070, dir_out, sizeof(char_68)} ,
  {"control_systemv396_out_0", "Trigger S out", (void*)&control_systemv396_out_0_default, vt_bool,   {68}, 3138, dir_input, sizeof(char_68)} ,
  {"control_systemv396state", "Trigger S state variable", (void*)&control_systemv396state_default, vt_bool,   {68}, 3206, dir_input, sizeof(char_68)} ,
  {"control_systemv401_out_0", "Logical block output", (void*)&control_systemv401_out_0_default, vt_bool,   {1}, 3274, dir_out, sizeof(char)} ,
  {"control_systemv403_out_0", "Signal reader variable", (void*)&control_systemv403_out_0_default, vt_bool,   {4}, 3275, dir_out, sizeof(char_4)} ,
  {"control_systemv406_out_0", "Signal reader variable", (void*)&control_systemv406_out_0_default, vt_bool,   {4}, 3279, dir_out, sizeof(char_4)} ,
  {"control_systemv407_out_0", "Signal reader variable", (void*)&control_systemv407_out_0_default, vt_bool,   {4}, 3283, dir_out, sizeof(char_4)} ,
  {"control_systemv410_out_0", "Signal reader variable", (void*)&control_systemv410_out_0_default, vt_bool,   {4}, 3287, dir_out, sizeof(char_4)} ,
  {"control_systemv413_out_0", "Signal reader variable", (void*)&control_systemv413_out_0_default, vt_bool,   {4}, 3291, dir_out, sizeof(char_4)} ,
  {"control_systemv414_out_0", "Signal reader variable", (void*)&control_systemv414_out_0_default, vt_bool,   {4}, 3295, dir_out, sizeof(char_4)} ,
  {"control_systemv417_out_0", "Trigger S out", (void*)&control_systemv417_out_0_default, vt_bool,   {4}, 3299, dir_input, sizeof(char_4)} ,
  {"control_systemv417state", "Trigger S state variable", (void*)&control_systemv417state_default, vt_bool,   {4}, 3303, dir_input, sizeof(char_4)} ,
  {"control_systemv419_out_0", "Signal reader variable", (void*)&control_systemv419_out_0_default, vt_bool,   {4}, 3307, dir_out, sizeof(char_4)} ,
  {"control_systemv420_out_0", "Signal reader variable", (void*)&control_systemv420_out_0_default, vt_bool,   {4}, 3311, dir_out, sizeof(char_4)} 
};
/* Constants */
#define const_count 327


typedef struct {
  double control_systemv0_a_;
  double control_systemv1_a_;
  double control_systemv2_a_;
  double control_systemv3_a_;
  double control_systemv4_a_;
  double control_systemv5_a_;
  double control_systemv6_a_;
  double control_systemv7_a_;
  double control_systemv8_a_;
  double control_systemv9_a_;
  double control_systemv10_a_;
  double control_systemv11_a_;
  double control_systemv12_a_;
  double control_systemv13_a_;
  double control_systemv14_a_;
  double control_systemv15_a_;
  double control_systemv16_a_;
  double control_systemv17_a_;
  double control_systemv18_a_;
  double control_systemv19_a_;
  double control_systemv20_a_;
  double control_systemv21_a_;
  double control_systemv22_a_;
  double control_systemv23_a_;
  double control_systemv24_a_;
  double control_systemv25_a_;
  double control_systemv26_a_;
  double control_systemv27_a_;
  double control_systemv28_a_;
  double control_systemv29_a_;
  double control_systemv30_a_;
  double control_systemv31_a_;
  double control_systemv32_a_;
  double control_systemv33_a_;
  double control_systemv34_a_;
  double control_systemv35_a_;
  double control_systemv36_a_;
  double control_systemv37_a_;
  double control_systemv38_a_;
  double control_systemv39_a_;
  double control_systemv40_a_;
  double control_systemv41_a_;
  double control_systemv42_a_;
  double control_systemv43_a_;
  double control_systemv44_a_;
  double control_systemv45_a_;
  double control_systemv46_a_;
  double control_systemv47_a_;
  double control_systemv48_a_;
  double control_systemv49_a_;
  double control_systemv50_a_;
  double control_systemv51_a_;
  double control_systemv52_a_;
  double control_systemv53_a_;
  double control_systemv54_a_;
  double control_systemv55_a_;
  double control_systemv56_a_;
  double control_systemv57_a_;
  double control_systemv58_a_;
  double control_systemv59_a_;
  double control_systemv60_a_;
  double control_systemv61_a_;
  double control_systemv62_a_;
  double control_systemv63_a_;
  double control_systemv64_a_;
  double control_systemv65_a_;
  double control_systemv66_a_;
  double control_systemv67_a_;
  double control_systemv68_a_;
  double control_systemv69_a_;
  double control_systemv70_a_;
  double control_systemv71_a_;
  double control_systemv72_a_;
  double control_systemv73_a_;
  double control_systemv74_a_;
  double control_systemv75_a_;
  double control_systemv76_a_;
  double control_systemv77_a_;
  double control_systemv78_a_;
  double control_systemv79_a_;
  double control_systemv80_a_;
  double control_systemv81_a_;
  double control_systemv82_a_;
  double control_systemv83_a_;
  double control_systemv84_a_;
  double control_systemv85_a_;
  double control_systemv86_a_;
  double control_systemv87_a_;
  double control_systemv88_a_;
  double control_systemv89_a_;
  double control_systemv90_a_;
  double control_systemv91_a_;
  double control_systemv92_a_;
  double control_systemv93_a_;
  double control_systemv94_a_;
  double control_systemv95_a_;
  double control_systemv96_a_;
  double control_systemv97_a_;
  double control_systemv98_a_;
  double control_systemv99_a_;
  double control_systemv100_a_;
  double control_systemv101_a_;
  double control_systemv102_a_;
  double control_systemv103_a_;
  double control_systemv104_a_;
  double control_systemv105_a_;
  double control_systemv106_a_;
  double control_systemv107_a_;
  double control_systemv108_a_;
  double control_systemv109_a_;
  double control_systemv110_a_;
  double control_systemv111_a_;
  double control_systemv112_a_;
  double control_systemv113_a_;
  double control_systemv114_a_;
  double control_systemv115_a_;
  double control_systemv116_a_;
  double control_systemv117_a_;
  double control_systemv118_a_;
  double control_systemv119_a_;
  double control_systemv120_a_;
  double control_systemv121_a_;
  double control_systemv122_a_;
  double control_systemv123_a_;
  double control_systemv124_a_;
  double control_systemv125_a_;
  double control_systemv126_a_;
  double control_systemv127_a_;
  double control_systemv128_a_;
  double control_systemv129_a_;
  double control_systemv130_a_;
  double control_systemv131_a_;
  double control_systemv132_a_;
  double control_systemv133_a_;
  double control_systemv134_a_;
  double control_systemv135_a_;
  double control_systemv136_a_;
  double control_systemv137_a_;
  double control_systemv138_a_;
  double control_systemv139_a_;
  double control_systemv140_a_;
  double control_systemv141_a_;
  double control_systemv142_a_;
  double control_systemv143_a_;
  double control_systemv144_a_;
  double control_systemv145_a_;
  double control_systemv146_a_;
  double control_systemv147_a_;
  double control_systemv148_a_;
  double control_systemv149_a_;
  double control_systemv150_a_;
  double control_systemv151_a_;
  double control_systemv152_a_;
  double control_systemv153_a_;
  double control_systemv154_a_;
  double control_systemv155_a_;
  double control_systemv156_a_;
  double control_systemv157_a_;
  double control_systemv158_a_;
  double control_systemv159_a_;
  double control_systemv160_a_;
  double control_systemv161_a_;
  double control_systemv162_a_;
  double control_systemv163_a_;
  double control_systemv164_a_;
  double control_systemv165_a_;
  double control_systemv166_a_;
  double control_systemv167_a_;
  double control_systemv168_a_;
  double control_systemv169_a_;
  double control_systemv170_a_;
  double control_systemv171_a_;
  double control_systemv172_a_;
  double control_systemv173_a_;
  double control_systemv174_a_;
  double control_systemv175_a_;
  double control_systemv176_a_;
  double control_systemv177_a_;
  double control_systemv178_a_;
  double control_systemv179_a_;
  double control_systemv180_a_;
  double control_systemv181_a_;
  double control_systemv182_a_;
  double control_systemv183_a_;
  double control_systemv184_a_;
  double control_systemv185_a_;
  double control_systemv186_a_;
  double control_systemv187_a_;
  double control_systemv188_a_;
  double control_systemv189_a_;
  double control_systemv190_a_;
  double control_systemv191_a_;
  double control_systemv192_a_;
  double control_systemv193_a_;
  double control_systemv194_a_;
  double control_systemv195_a_;
  double control_systemv196_a_;
  double control_systemv197_a_;
  double control_systemv198_a_;
  double control_systemv199_a_;
  double control_systemv200_a_;
  double control_systemv201_a_;
  double control_systemv202_a_;
  double control_systemv203_a_;
  double control_systemv204_a_;
  double control_systemv205_a_;
  double control_systemv206_a_;
  double control_systemv207_a_;
  double control_systemv208_a_;
  double control_systemv209_a_;
  double control_systemv210_a_;
  double control_systemv211_a_;
  double control_systemv212_a_;
  double control_systemv213_a_;
  double control_systemv214_a_;
  double control_systemv215_a_;
  double control_systemv216_a_;
  double control_systemv217_a_;
  double control_systemv218_a_;
  double control_systemv219_a_;
  double control_systemv220_a_;
  double control_systemv221_a_;
  double control_systemv222_a_;
  double control_systemv223_a_;
  double control_systemv224_a_;
  double control_systemv225_a_;
  double control_systemv226_a_;
  double control_systemv227_a_;
  double control_systemv228_a_;
  double control_systemv229_a_;
  double control_systemv230_a_;
  double control_systemv231_a_;
  double control_systemv232_a_;
  double control_systemv233_a_;
  double control_systemv234_a_;
  double control_systemv235_a_;
  double control_systemv236_a_;
  double control_systemv237_a_;
  double control_systemv238_a_;
  double control_systemv239_a_;
  double control_systemv240_a_;
  double control_systemv241_a_;
  double control_systemv242_a_;
  double control_systemv243_a_;
  double control_systemv244_a_;
  double control_systemv245_a_;
  double control_systemv246_a_;
  double control_systemv247_a_;
  double control_systemv248_a_;
  double control_systemv249_a_;
  double control_systemv250_a_;
  double control_systemv251_a_;
  double control_systemv252_a_;
  double control_systemv253_a_;
  double control_systemv254_a_;
  double control_systemv255_a_;
  double control_systemv256_a_;
  double control_systemv257_a_;
  double control_systemv258_a_;
  double control_systemv259_a_;
  double control_systemv260_a_;
  double control_systemv261_a_;
  double control_systemv262_a_;
  double control_systemv263_a_;
  double control_systemv264_a_;
  double control_systemv265_a_;
  double control_systemv266_a_;
  double control_systemv267_a_;
  double control_systemv268_a_;
  double control_systemv269_a_;
  double control_systemv270_a_;
  double control_systemv271_a_;
  double control_systemv272_a_;
  double control_systemv273_a_;
  double control_systemv274_a_;
  double control_systemv275_a_;
  double control_systemv276_a_;
  double control_systemv277_a_;
  double control_systemv278_a_;
  double control_systemv279_a_;
  double control_systemv280_a_;
  double control_systemv281_a_;
  double control_systemv282_a_;
  double control_systemv283_a_;
  double control_systemv284_a_;
  double control_systemv285_a_;
  double control_systemv286_a_;
  double control_systemv287_a_;
  double control_systemv288_a_;
  double control_systemv289_a_;
  double control_systemv290_a_;
  double control_systemv291_a_;
  double control_systemv292_a_;
  double control_systemv293_a_;
  double control_systemv294_a_;
  double control_systemv295_a_;
  double control_systemv296_a_;
  double control_systemv297_a_;
  double control_systemv298_a_;
  double control_systemv299_a_;
  double control_systemv300_a_;
  double control_systemv301_a_;
  double control_systemv302_a_;
  double control_systemv303_a_;
  double control_systemv304_a_;
  double control_systemv305_a_;
  double control_systemv306_a_;
  double control_systemv307_a_;
  double control_systemv308_a_;
  double control_systemv309_a_;
  double control_systemv310_a_;
  double control_systemv311_a_;
  double control_systemv312_a_;
  double control_systemv313_a_;
  double control_systemv314_a_;
  double control_systemv315_a_;
  double control_systemv316_a_;
  double control_systemv317_a_;
  double control_systemv318_a_;
  double control_systemv319_a_;
  double control_systemv320_a_;
  double control_systemv369_k_;
  double control_systemv369_t_;
  double control_systemv370_k_;
  double control_systemv370_t_;
  double control_systemv371_k_;
  double control_systemv371_t_;
} t_consts;



const ext_var_info_record const_names[const_count] = {
  {"control_systemv0_a", "Constant value", (void*)&control_systemv0_a_default, vt_double,   {1}, 0, dir_input, sizeof(double)} ,
  {"control_systemv1_a", "Constant value", (void*)&control_systemv1_a_default, vt_double,   {1}, 8, dir_input, sizeof(double)} ,
  {"control_systemv2_a", "Constant value", (void*)&control_systemv2_a_default, vt_double,   {1}, 16, dir_input, sizeof(double)} ,
  {"control_systemv3_a", "Constant value", (void*)&control_systemv3_a_default, vt_double,   {1}, 24, dir_input, sizeof(double)} ,
  {"control_systemv4_a", "Constant value", (void*)&control_systemv4_a_default, vt_double,   {1}, 32, dir_input, sizeof(double)} ,
  {"control_systemv5_a", "Constant value", (void*)&control_systemv5_a_default, vt_double,   {1}, 40, dir_input, sizeof(double)} ,
  {"control_systemv6_a", "Constant value", (void*)&control_systemv6_a_default, vt_double,   {1}, 48, dir_input, sizeof(double)} ,
  {"control_systemv7_a", "Constant value", (void*)&control_systemv7_a_default, vt_double,   {1}, 56, dir_input, sizeof(double)} ,
  {"control_systemv8_a", "Constant value", (void*)&control_systemv8_a_default, vt_double,   {1}, 64, dir_input, sizeof(double)} ,
  {"control_systemv9_a", "Constant value", (void*)&control_systemv9_a_default, vt_double,   {1}, 72, dir_input, sizeof(double)} ,
  {"control_systemv10_a", "Constant value", (void*)&control_systemv10_a_default, vt_double,   {1}, 80, dir_input, sizeof(double)} ,
  {"control_systemv11_a", "Constant value", (void*)&control_systemv11_a_default, vt_double,   {1}, 88, dir_input, sizeof(double)} ,
  {"control_systemv12_a", "Constant value", (void*)&control_systemv12_a_default, vt_double,   {1}, 96, dir_input, sizeof(double)} ,
  {"control_systemv13_a", "Constant value", (void*)&control_systemv13_a_default, vt_double,   {1}, 104, dir_input, sizeof(double)} ,
  {"control_systemv14_a", "Constant value", (void*)&control_systemv14_a_default, vt_double,   {1}, 112, dir_input, sizeof(double)} ,
  {"control_systemv15_a", "Constant value", (void*)&control_systemv15_a_default, vt_double,   {1}, 120, dir_input, sizeof(double)} ,
  {"control_systemv16_a", "Constant value", (void*)&control_systemv16_a_default, vt_double,   {1}, 128, dir_input, sizeof(double)} ,
  {"control_systemv17_a", "Constant value", (void*)&control_systemv17_a_default, vt_double,   {1}, 136, dir_input, sizeof(double)} ,
  {"control_systemv18_a", "Constant value", (void*)&control_systemv18_a_default, vt_double,   {1}, 144, dir_input, sizeof(double)} ,
  {"control_systemv19_a", "Constant value", (void*)&control_systemv19_a_default, vt_double,   {1}, 152, dir_input, sizeof(double)} ,
  {"control_systemv20_a", "Constant value", (void*)&control_systemv20_a_default, vt_double,   {1}, 160, dir_input, sizeof(double)} ,
  {"control_systemv21_a", "Constant value", (void*)&control_systemv21_a_default, vt_double,   {1}, 168, dir_input, sizeof(double)} ,
  {"control_systemv22_a", "Constant value", (void*)&control_systemv22_a_default, vt_double,   {1}, 176, dir_input, sizeof(double)} ,
  {"control_systemv23_a", "Constant value", (void*)&control_systemv23_a_default, vt_double,   {1}, 184, dir_input, sizeof(double)} ,
  {"control_systemv24_a", "Constant value", (void*)&control_systemv24_a_default, vt_double,   {1}, 192, dir_input, sizeof(double)} ,
  {"control_systemv25_a", "Constant value", (void*)&control_systemv25_a_default, vt_double,   {1}, 200, dir_input, sizeof(double)} ,
  {"control_systemv26_a", "Constant value", (void*)&control_systemv26_a_default, vt_double,   {1}, 208, dir_input, sizeof(double)} ,
  {"control_systemv27_a", "Constant value", (void*)&control_systemv27_a_default, vt_double,   {1}, 216, dir_input, sizeof(double)} ,
  {"control_systemv28_a", "Constant value", (void*)&control_systemv28_a_default, vt_double,   {1}, 224, dir_input, sizeof(double)} ,
  {"control_systemv29_a", "Constant value", (void*)&control_systemv29_a_default, vt_double,   {1}, 232, dir_input, sizeof(double)} ,
  {"control_systemv30_a", "Constant value", (void*)&control_systemv30_a_default, vt_double,   {1}, 240, dir_input, sizeof(double)} ,
  {"control_systemv31_a", "Constant value", (void*)&control_systemv31_a_default, vt_double,   {1}, 248, dir_input, sizeof(double)} ,
  {"control_systemv32_a", "Constant value", (void*)&control_systemv32_a_default, vt_double,   {1}, 256, dir_input, sizeof(double)} ,
  {"control_systemv33_a", "Constant value", (void*)&control_systemv33_a_default, vt_double,   {1}, 264, dir_input, sizeof(double)} ,
  {"control_systemv34_a", "Constant value", (void*)&control_systemv34_a_default, vt_double,   {1}, 272, dir_input, sizeof(double)} ,
  {"control_systemv35_a", "Constant value", (void*)&control_systemv35_a_default, vt_double,   {1}, 280, dir_input, sizeof(double)} ,
  {"control_systemv36_a", "Constant value", (void*)&control_systemv36_a_default, vt_double,   {1}, 288, dir_input, sizeof(double)} ,
  {"control_systemv37_a", "Constant value", (void*)&control_systemv37_a_default, vt_double,   {1}, 296, dir_input, sizeof(double)} ,
  {"control_systemv38_a", "Constant value", (void*)&control_systemv38_a_default, vt_double,   {1}, 304, dir_input, sizeof(double)} ,
  {"control_systemv39_a", "Constant value", (void*)&control_systemv39_a_default, vt_double,   {1}, 312, dir_input, sizeof(double)} ,
  {"control_systemv40_a", "Constant value", (void*)&control_systemv40_a_default, vt_double,   {1}, 320, dir_input, sizeof(double)} ,
  {"control_systemv41_a", "Constant value", (void*)&control_systemv41_a_default, vt_double,   {1}, 328, dir_input, sizeof(double)} ,
  {"control_systemv42_a", "Constant value", (void*)&control_systemv42_a_default, vt_double,   {1}, 336, dir_input, sizeof(double)} ,
  {"control_systemv43_a", "Constant value", (void*)&control_systemv43_a_default, vt_double,   {1}, 344, dir_input, sizeof(double)} ,
  {"control_systemv44_a", "Constant value", (void*)&control_systemv44_a_default, vt_double,   {1}, 352, dir_input, sizeof(double)} ,
  {"control_systemv45_a", "Constant value", (void*)&control_systemv45_a_default, vt_double,   {1}, 360, dir_input, sizeof(double)} ,
  {"control_systemv46_a", "Constant value", (void*)&control_systemv46_a_default, vt_double,   {1}, 368, dir_input, sizeof(double)} ,
  {"control_systemv47_a", "Constant value", (void*)&control_systemv47_a_default, vt_double,   {1}, 376, dir_input, sizeof(double)} ,
  {"control_systemv48_a", "Constant value", (void*)&control_systemv48_a_default, vt_double,   {1}, 384, dir_input, sizeof(double)} ,
  {"control_systemv49_a", "Constant value", (void*)&control_systemv49_a_default, vt_double,   {1}, 392, dir_input, sizeof(double)} ,
  {"control_systemv50_a", "Constant value", (void*)&control_systemv50_a_default, vt_double,   {1}, 400, dir_input, sizeof(double)} ,
  {"control_systemv51_a", "Constant value", (void*)&control_systemv51_a_default, vt_double,   {1}, 408, dir_input, sizeof(double)} ,
  {"control_systemv52_a", "Constant value", (void*)&control_systemv52_a_default, vt_double,   {1}, 416, dir_input, sizeof(double)} ,
  {"control_systemv53_a", "Constant value", (void*)&control_systemv53_a_default, vt_double,   {1}, 424, dir_input, sizeof(double)} ,
  {"control_systemv54_a", "Constant value", (void*)&control_systemv54_a_default, vt_double,   {1}, 432, dir_input, sizeof(double)} ,
  {"control_systemv55_a", "Constant value", (void*)&control_systemv55_a_default, vt_double,   {1}, 440, dir_input, sizeof(double)} ,
  {"control_systemv56_a", "Constant value", (void*)&control_systemv56_a_default, vt_double,   {1}, 448, dir_input, sizeof(double)} ,
  {"control_systemv57_a", "Constant value", (void*)&control_systemv57_a_default, vt_double,   {1}, 456, dir_input, sizeof(double)} ,
  {"control_systemv58_a", "Constant value", (void*)&control_systemv58_a_default, vt_double,   {1}, 464, dir_input, sizeof(double)} ,
  {"control_systemv59_a", "Constant value", (void*)&control_systemv59_a_default, vt_double,   {1}, 472, dir_input, sizeof(double)} ,
  {"control_systemv60_a", "Constant value", (void*)&control_systemv60_a_default, vt_double,   {1}, 480, dir_input, sizeof(double)} ,
  {"control_systemv61_a", "Constant value", (void*)&control_systemv61_a_default, vt_double,   {1}, 488, dir_input, sizeof(double)} ,
  {"control_systemv62_a", "Constant value", (void*)&control_systemv62_a_default, vt_double,   {1}, 496, dir_input, sizeof(double)} ,
  {"control_systemv63_a", "Constant value", (void*)&control_systemv63_a_default, vt_double,   {1}, 504, dir_input, sizeof(double)} ,
  {"control_systemv64_a", "Constant value", (void*)&control_systemv64_a_default, vt_double,   {1}, 512, dir_input, sizeof(double)} ,
  {"control_systemv65_a", "Constant value", (void*)&control_systemv65_a_default, vt_double,   {1}, 520, dir_input, sizeof(double)} ,
  {"control_systemv66_a", "Constant value", (void*)&control_systemv66_a_default, vt_double,   {1}, 528, dir_input, sizeof(double)} ,
  {"control_systemv67_a", "Constant value", (void*)&control_systemv67_a_default, vt_double,   {1}, 536, dir_input, sizeof(double)} ,
  {"control_systemv68_a", "Constant value", (void*)&control_systemv68_a_default, vt_double,   {1}, 544, dir_input, sizeof(double)} ,
  {"control_systemv69_a", "Constant value", (void*)&control_systemv69_a_default, vt_double,   {1}, 552, dir_input, sizeof(double)} ,
  {"control_systemv70_a", "Constant value", (void*)&control_systemv70_a_default, vt_double,   {1}, 560, dir_input, sizeof(double)} ,
  {"control_systemv71_a", "Constant value", (void*)&control_systemv71_a_default, vt_double,   {1}, 568, dir_input, sizeof(double)} ,
  {"control_systemv72_a", "Constant value", (void*)&control_systemv72_a_default, vt_double,   {1}, 576, dir_input, sizeof(double)} ,
  {"control_systemv73_a", "Constant value", (void*)&control_systemv73_a_default, vt_double,   {1}, 584, dir_input, sizeof(double)} ,
  {"control_systemv74_a", "Constant value", (void*)&control_systemv74_a_default, vt_double,   {1}, 592, dir_input, sizeof(double)} ,
  {"control_systemv75_a", "Constant value", (void*)&control_systemv75_a_default, vt_double,   {1}, 600, dir_input, sizeof(double)} ,
  {"control_systemv76_a", "Constant value", (void*)&control_systemv76_a_default, vt_double,   {1}, 608, dir_input, sizeof(double)} ,
  {"control_systemv77_a", "Constant value", (void*)&control_systemv77_a_default, vt_double,   {1}, 616, dir_input, sizeof(double)} ,
  {"control_systemv78_a", "Constant value", (void*)&control_systemv78_a_default, vt_double,   {1}, 624, dir_input, sizeof(double)} ,
  {"control_systemv79_a", "Constant value", (void*)&control_systemv79_a_default, vt_double,   {1}, 632, dir_input, sizeof(double)} ,
  {"control_systemv80_a", "Constant value", (void*)&control_systemv80_a_default, vt_double,   {1}, 640, dir_input, sizeof(double)} ,
  {"control_systemv81_a", "Constant value", (void*)&control_systemv81_a_default, vt_double,   {1}, 648, dir_input, sizeof(double)} ,
  {"control_systemv82_a", "Constant value", (void*)&control_systemv82_a_default, vt_double,   {1}, 656, dir_input, sizeof(double)} ,
  {"control_systemv83_a", "Constant value", (void*)&control_systemv83_a_default, vt_double,   {1}, 664, dir_input, sizeof(double)} ,
  {"control_systemv84_a", "Constant value", (void*)&control_systemv84_a_default, vt_double,   {1}, 672, dir_input, sizeof(double)} ,
  {"control_systemv85_a", "Constant value", (void*)&control_systemv85_a_default, vt_double,   {1}, 680, dir_input, sizeof(double)} ,
  {"control_systemv86_a", "Constant value", (void*)&control_systemv86_a_default, vt_double,   {1}, 688, dir_input, sizeof(double)} ,
  {"control_systemv87_a", "Constant value", (void*)&control_systemv87_a_default, vt_double,   {1}, 696, dir_input, sizeof(double)} ,
  {"control_systemv88_a", "Constant value", (void*)&control_systemv88_a_default, vt_double,   {1}, 704, dir_input, sizeof(double)} ,
  {"control_systemv89_a", "Constant value", (void*)&control_systemv89_a_default, vt_double,   {1}, 712, dir_input, sizeof(double)} ,
  {"control_systemv90_a", "Constant value", (void*)&control_systemv90_a_default, vt_double,   {1}, 720, dir_input, sizeof(double)} ,
  {"control_systemv91_a", "Constant value", (void*)&control_systemv91_a_default, vt_double,   {1}, 728, dir_input, sizeof(double)} ,
  {"control_systemv92_a", "Constant value", (void*)&control_systemv92_a_default, vt_double,   {1}, 736, dir_input, sizeof(double)} ,
  {"control_systemv93_a", "Constant value", (void*)&control_systemv93_a_default, vt_double,   {1}, 744, dir_input, sizeof(double)} ,
  {"control_systemv94_a", "Constant value", (void*)&control_systemv94_a_default, vt_double,   {1}, 752, dir_input, sizeof(double)} ,
  {"control_systemv95_a", "Constant value", (void*)&control_systemv95_a_default, vt_double,   {1}, 760, dir_input, sizeof(double)} ,
  {"control_systemv96_a", "Constant value", (void*)&control_systemv96_a_default, vt_double,   {1}, 768, dir_input, sizeof(double)} ,
  {"control_systemv97_a", "Constant value", (void*)&control_systemv97_a_default, vt_double,   {1}, 776, dir_input, sizeof(double)} ,
  {"control_systemv98_a", "Constant value", (void*)&control_systemv98_a_default, vt_double,   {1}, 784, dir_input, sizeof(double)} ,
  {"control_systemv99_a", "Constant value", (void*)&control_systemv99_a_default, vt_double,   {1}, 792, dir_input, sizeof(double)} ,
  {"control_systemv100_a", "Constant value", (void*)&control_systemv100_a_default, vt_double,   {1}, 800, dir_input, sizeof(double)} ,
  {"control_systemv101_a", "Constant value", (void*)&control_systemv101_a_default, vt_double,   {1}, 808, dir_input, sizeof(double)} ,
  {"control_systemv102_a", "Constant value", (void*)&control_systemv102_a_default, vt_double,   {1}, 816, dir_input, sizeof(double)} ,
  {"control_systemv103_a", "Constant value", (void*)&control_systemv103_a_default, vt_double,   {1}, 824, dir_input, sizeof(double)} ,
  {"control_systemv104_a", "Constant value", (void*)&control_systemv104_a_default, vt_double,   {1}, 832, dir_input, sizeof(double)} ,
  {"control_systemv105_a", "Constant value", (void*)&control_systemv105_a_default, vt_double,   {1}, 840, dir_input, sizeof(double)} ,
  {"control_systemv106_a", "Constant value", (void*)&control_systemv106_a_default, vt_double,   {1}, 848, dir_input, sizeof(double)} ,
  {"control_systemv107_a", "Constant value", (void*)&control_systemv107_a_default, vt_double,   {1}, 856, dir_input, sizeof(double)} ,
  {"control_systemv108_a", "Constant value", (void*)&control_systemv108_a_default, vt_double,   {1}, 864, dir_input, sizeof(double)} ,
  {"control_systemv109_a", "Constant value", (void*)&control_systemv109_a_default, vt_double,   {1}, 872, dir_input, sizeof(double)} ,
  {"control_systemv110_a", "Constant value", (void*)&control_systemv110_a_default, vt_double,   {1}, 880, dir_input, sizeof(double)} ,
  {"control_systemv111_a", "Constant value", (void*)&control_systemv111_a_default, vt_double,   {1}, 888, dir_input, sizeof(double)} ,
  {"control_systemv112_a", "Constant value", (void*)&control_systemv112_a_default, vt_double,   {1}, 896, dir_input, sizeof(double)} ,
  {"control_systemv113_a", "Constant value", (void*)&control_systemv113_a_default, vt_double,   {1}, 904, dir_input, sizeof(double)} ,
  {"control_systemv114_a", "Constant value", (void*)&control_systemv114_a_default, vt_double,   {1}, 912, dir_input, sizeof(double)} ,
  {"control_systemv115_a", "Constant value", (void*)&control_systemv115_a_default, vt_double,   {1}, 920, dir_input, sizeof(double)} ,
  {"control_systemv116_a", "Constant value", (void*)&control_systemv116_a_default, vt_double,   {1}, 928, dir_input, sizeof(double)} ,
  {"control_systemv117_a", "Constant value", (void*)&control_systemv117_a_default, vt_double,   {1}, 936, dir_input, sizeof(double)} ,
  {"control_systemv118_a", "Constant value", (void*)&control_systemv118_a_default, vt_double,   {1}, 944, dir_input, sizeof(double)} ,
  {"control_systemv119_a", "Constant value", (void*)&control_systemv119_a_default, vt_double,   {1}, 952, dir_input, sizeof(double)} ,
  {"control_systemv120_a", "Constant value", (void*)&control_systemv120_a_default, vt_double,   {1}, 960, dir_input, sizeof(double)} ,
  {"control_systemv121_a", "Constant value", (void*)&control_systemv121_a_default, vt_double,   {1}, 968, dir_input, sizeof(double)} ,
  {"control_systemv122_a", "Constant value", (void*)&control_systemv122_a_default, vt_double,   {1}, 976, dir_input, sizeof(double)} ,
  {"control_systemv123_a", "Constant value", (void*)&control_systemv123_a_default, vt_double,   {1}, 984, dir_input, sizeof(double)} ,
  {"control_systemv124_a", "Constant value", (void*)&control_systemv124_a_default, vt_double,   {1}, 992, dir_input, sizeof(double)} ,
  {"control_systemv125_a", "Constant value", (void*)&control_systemv125_a_default, vt_double,   {1}, 1000, dir_input, sizeof(double)} ,
  {"control_systemv126_a", "Constant value", (void*)&control_systemv126_a_default, vt_double,   {1}, 1008, dir_input, sizeof(double)} ,
  {"control_systemv127_a", "Constant value", (void*)&control_systemv127_a_default, vt_double,   {1}, 1016, dir_input, sizeof(double)} ,
  {"control_systemv128_a", "Constant value", (void*)&control_systemv128_a_default, vt_double,   {1}, 1024, dir_input, sizeof(double)} ,
  {"control_systemv129_a", "Constant value", (void*)&control_systemv129_a_default, vt_double,   {1}, 1032, dir_input, sizeof(double)} ,
  {"control_systemv130_a", "Constant value", (void*)&control_systemv130_a_default, vt_double,   {1}, 1040, dir_input, sizeof(double)} ,
  {"control_systemv131_a", "Constant value", (void*)&control_systemv131_a_default, vt_double,   {1}, 1048, dir_input, sizeof(double)} ,
  {"control_systemv132_a", "Constant value", (void*)&control_systemv132_a_default, vt_double,   {1}, 1056, dir_input, sizeof(double)} ,
  {"control_systemv133_a", "Constant value", (void*)&control_systemv133_a_default, vt_double,   {1}, 1064, dir_input, sizeof(double)} ,
  {"control_systemv134_a", "Constant value", (void*)&control_systemv134_a_default, vt_double,   {1}, 1072, dir_input, sizeof(double)} ,
  {"control_systemv135_a", "Constant value", (void*)&control_systemv135_a_default, vt_double,   {1}, 1080, dir_input, sizeof(double)} ,
  {"control_systemv136_a", "Constant value", (void*)&control_systemv136_a_default, vt_double,   {1}, 1088, dir_input, sizeof(double)} ,
  {"control_systemv137_a", "Constant value", (void*)&control_systemv137_a_default, vt_double,   {1}, 1096, dir_input, sizeof(double)} ,
  {"control_systemv138_a", "Constant value", (void*)&control_systemv138_a_default, vt_double,   {1}, 1104, dir_input, sizeof(double)} ,
  {"control_systemv139_a", "Constant value", (void*)&control_systemv139_a_default, vt_double,   {1}, 1112, dir_input, sizeof(double)} ,
  {"control_systemv140_a", "Constant value", (void*)&control_systemv140_a_default, vt_double,   {1}, 1120, dir_input, sizeof(double)} ,
  {"control_systemv141_a", "Constant value", (void*)&control_systemv141_a_default, vt_double,   {1}, 1128, dir_input, sizeof(double)} ,
  {"control_systemv142_a", "Constant value", (void*)&control_systemv142_a_default, vt_double,   {1}, 1136, dir_input, sizeof(double)} ,
  {"control_systemv143_a", "Constant value", (void*)&control_systemv143_a_default, vt_double,   {1}, 1144, dir_input, sizeof(double)} ,
  {"control_systemv144_a", "Constant value", (void*)&control_systemv144_a_default, vt_double,   {1}, 1152, dir_input, sizeof(double)} ,
  {"control_systemv145_a", "Constant value", (void*)&control_systemv145_a_default, vt_double,   {1}, 1160, dir_input, sizeof(double)} ,
  {"control_systemv146_a", "Constant value", (void*)&control_systemv146_a_default, vt_double,   {1}, 1168, dir_input, sizeof(double)} ,
  {"control_systemv147_a", "Constant value", (void*)&control_systemv147_a_default, vt_double,   {1}, 1176, dir_input, sizeof(double)} ,
  {"control_systemv148_a", "Constant value", (void*)&control_systemv148_a_default, vt_double,   {1}, 1184, dir_input, sizeof(double)} ,
  {"control_systemv149_a", "Constant value", (void*)&control_systemv149_a_default, vt_double,   {1}, 1192, dir_input, sizeof(double)} ,
  {"control_systemv150_a", "Constant value", (void*)&control_systemv150_a_default, vt_double,   {1}, 1200, dir_input, sizeof(double)} ,
  {"control_systemv151_a", "Constant value", (void*)&control_systemv151_a_default, vt_double,   {1}, 1208, dir_input, sizeof(double)} ,
  {"control_systemv152_a", "Constant value", (void*)&control_systemv152_a_default, vt_double,   {1}, 1216, dir_input, sizeof(double)} ,
  {"control_systemv153_a", "Constant value", (void*)&control_systemv153_a_default, vt_double,   {1}, 1224, dir_input, sizeof(double)} ,
  {"control_systemv154_a", "Constant value", (void*)&control_systemv154_a_default, vt_double,   {1}, 1232, dir_input, sizeof(double)} ,
  {"control_systemv155_a", "Constant value", (void*)&control_systemv155_a_default, vt_double,   {1}, 1240, dir_input, sizeof(double)} ,
  {"control_systemv156_a", "Constant value", (void*)&control_systemv156_a_default, vt_double,   {1}, 1248, dir_input, sizeof(double)} ,
  {"control_systemv157_a", "Constant value", (void*)&control_systemv157_a_default, vt_double,   {1}, 1256, dir_input, sizeof(double)} ,
  {"control_systemv158_a", "Constant value", (void*)&control_systemv158_a_default, vt_double,   {1}, 1264, dir_input, sizeof(double)} ,
  {"control_systemv159_a", "Constant value", (void*)&control_systemv159_a_default, vt_double,   {1}, 1272, dir_input, sizeof(double)} ,
  {"control_systemv160_a", "Constant value", (void*)&control_systemv160_a_default, vt_double,   {1}, 1280, dir_input, sizeof(double)} ,
  {"control_systemv161_a", "Constant value", (void*)&control_systemv161_a_default, vt_double,   {1}, 1288, dir_input, sizeof(double)} ,
  {"control_systemv162_a", "Constant value", (void*)&control_systemv162_a_default, vt_double,   {1}, 1296, dir_input, sizeof(double)} ,
  {"control_systemv163_a", "Constant value", (void*)&control_systemv163_a_default, vt_double,   {1}, 1304, dir_input, sizeof(double)} ,
  {"control_systemv164_a", "Constant value", (void*)&control_systemv164_a_default, vt_double,   {1}, 1312, dir_input, sizeof(double)} ,
  {"control_systemv165_a", "Constant value", (void*)&control_systemv165_a_default, vt_double,   {1}, 1320, dir_input, sizeof(double)} ,
  {"control_systemv166_a", "Constant value", (void*)&control_systemv166_a_default, vt_double,   {1}, 1328, dir_input, sizeof(double)} ,
  {"control_systemv167_a", "Constant value", (void*)&control_systemv167_a_default, vt_double,   {1}, 1336, dir_input, sizeof(double)} ,
  {"control_systemv168_a", "Constant value", (void*)&control_systemv168_a_default, vt_double,   {1}, 1344, dir_input, sizeof(double)} ,
  {"control_systemv169_a", "Constant value", (void*)&control_systemv169_a_default, vt_double,   {1}, 1352, dir_input, sizeof(double)} ,
  {"control_systemv170_a", "Constant value", (void*)&control_systemv170_a_default, vt_double,   {1}, 1360, dir_input, sizeof(double)} ,
  {"control_systemv171_a", "Constant value", (void*)&control_systemv171_a_default, vt_double,   {1}, 1368, dir_input, sizeof(double)} ,
  {"control_systemv172_a", "Constant value", (void*)&control_systemv172_a_default, vt_double,   {1}, 1376, dir_input, sizeof(double)} ,
  {"control_systemv173_a", "Constant value", (void*)&control_systemv173_a_default, vt_double,   {1}, 1384, dir_input, sizeof(double)} ,
  {"control_systemv174_a", "Constant value", (void*)&control_systemv174_a_default, vt_double,   {1}, 1392, dir_input, sizeof(double)} ,
  {"control_systemv175_a", "Constant value", (void*)&control_systemv175_a_default, vt_double,   {1}, 1400, dir_input, sizeof(double)} ,
  {"control_systemv176_a", "Constant value", (void*)&control_systemv176_a_default, vt_double,   {1}, 1408, dir_input, sizeof(double)} ,
  {"control_systemv177_a", "Constant value", (void*)&control_systemv177_a_default, vt_double,   {1}, 1416, dir_input, sizeof(double)} ,
  {"control_systemv178_a", "Constant value", (void*)&control_systemv178_a_default, vt_double,   {1}, 1424, dir_input, sizeof(double)} ,
  {"control_systemv179_a", "Constant value", (void*)&control_systemv179_a_default, vt_double,   {1}, 1432, dir_input, sizeof(double)} ,
  {"control_systemv180_a", "Constant value", (void*)&control_systemv180_a_default, vt_double,   {1}, 1440, dir_input, sizeof(double)} ,
  {"control_systemv181_a", "Constant value", (void*)&control_systemv181_a_default, vt_double,   {1}, 1448, dir_input, sizeof(double)} ,
  {"control_systemv182_a", "Constant value", (void*)&control_systemv182_a_default, vt_double,   {1}, 1456, dir_input, sizeof(double)} ,
  {"control_systemv183_a", "Constant value", (void*)&control_systemv183_a_default, vt_double,   {1}, 1464, dir_input, sizeof(double)} ,
  {"control_systemv184_a", "Constant value", (void*)&control_systemv184_a_default, vt_double,   {1}, 1472, dir_input, sizeof(double)} ,
  {"control_systemv185_a", "Constant value", (void*)&control_systemv185_a_default, vt_double,   {1}, 1480, dir_input, sizeof(double)} ,
  {"control_systemv186_a", "Constant value", (void*)&control_systemv186_a_default, vt_double,   {1}, 1488, dir_input, sizeof(double)} ,
  {"control_systemv187_a", "Constant value", (void*)&control_systemv187_a_default, vt_double,   {1}, 1496, dir_input, sizeof(double)} ,
  {"control_systemv188_a", "Constant value", (void*)&control_systemv188_a_default, vt_double,   {1}, 1504, dir_input, sizeof(double)} ,
  {"control_systemv189_a", "Constant value", (void*)&control_systemv189_a_default, vt_double,   {1}, 1512, dir_input, sizeof(double)} ,
  {"control_systemv190_a", "Constant value", (void*)&control_systemv190_a_default, vt_double,   {1}, 1520, dir_input, sizeof(double)} ,
  {"control_systemv191_a", "Constant value", (void*)&control_systemv191_a_default, vt_double,   {1}, 1528, dir_input, sizeof(double)} ,
  {"control_systemv192_a", "Constant value", (void*)&control_systemv192_a_default, vt_double,   {1}, 1536, dir_input, sizeof(double)} ,
  {"control_systemv193_a", "Constant value", (void*)&control_systemv193_a_default, vt_double,   {1}, 1544, dir_input, sizeof(double)} ,
  {"control_systemv194_a", "Constant value", (void*)&control_systemv194_a_default, vt_double,   {1}, 1552, dir_input, sizeof(double)} ,
  {"control_systemv195_a", "Constant value", (void*)&control_systemv195_a_default, vt_double,   {1}, 1560, dir_input, sizeof(double)} ,
  {"control_systemv196_a", "Constant value", (void*)&control_systemv196_a_default, vt_double,   {1}, 1568, dir_input, sizeof(double)} ,
  {"control_systemv197_a", "Constant value", (void*)&control_systemv197_a_default, vt_double,   {1}, 1576, dir_input, sizeof(double)} ,
  {"control_systemv198_a", "Constant value", (void*)&control_systemv198_a_default, vt_double,   {1}, 1584, dir_input, sizeof(double)} ,
  {"control_systemv199_a", "Constant value", (void*)&control_systemv199_a_default, vt_double,   {1}, 1592, dir_input, sizeof(double)} ,
  {"control_systemv200_a", "Constant value", (void*)&control_systemv200_a_default, vt_double,   {1}, 1600, dir_input, sizeof(double)} ,
  {"control_systemv201_a", "Constant value", (void*)&control_systemv201_a_default, vt_double,   {1}, 1608, dir_input, sizeof(double)} ,
  {"control_systemv202_a", "Constant value", (void*)&control_systemv202_a_default, vt_double,   {1}, 1616, dir_input, sizeof(double)} ,
  {"control_systemv203_a", "Constant value", (void*)&control_systemv203_a_default, vt_double,   {1}, 1624, dir_input, sizeof(double)} ,
  {"control_systemv204_a", "Constant value", (void*)&control_systemv204_a_default, vt_double,   {1}, 1632, dir_input, sizeof(double)} ,
  {"control_systemv205_a", "Constant value", (void*)&control_systemv205_a_default, vt_double,   {1}, 1640, dir_input, sizeof(double)} ,
  {"control_systemv206_a", "Constant value", (void*)&control_systemv206_a_default, vt_double,   {1}, 1648, dir_input, sizeof(double)} ,
  {"control_systemv207_a", "Constant value", (void*)&control_systemv207_a_default, vt_double,   {1}, 1656, dir_input, sizeof(double)} ,
  {"control_systemv208_a", "Constant value", (void*)&control_systemv208_a_default, vt_double,   {1}, 1664, dir_input, sizeof(double)} ,
  {"control_systemv209_a", "Constant value", (void*)&control_systemv209_a_default, vt_double,   {1}, 1672, dir_input, sizeof(double)} ,
  {"control_systemv210_a", "Constant value", (void*)&control_systemv210_a_default, vt_double,   {1}, 1680, dir_input, sizeof(double)} ,
  {"control_systemv211_a", "Constant value", (void*)&control_systemv211_a_default, vt_double,   {1}, 1688, dir_input, sizeof(double)} ,
  {"control_systemv212_a", "Constant value", (void*)&control_systemv212_a_default, vt_double,   {1}, 1696, dir_input, sizeof(double)} ,
  {"control_systemv213_a", "Constant value", (void*)&control_systemv213_a_default, vt_double,   {1}, 1704, dir_input, sizeof(double)} ,
  {"control_systemv214_a", "Constant value", (void*)&control_systemv214_a_default, vt_double,   {1}, 1712, dir_input, sizeof(double)} ,
  {"control_systemv215_a", "Constant value", (void*)&control_systemv215_a_default, vt_double,   {1}, 1720, dir_input, sizeof(double)} ,
  {"control_systemv216_a", "Constant value", (void*)&control_systemv216_a_default, vt_double,   {1}, 1728, dir_input, sizeof(double)} ,
  {"control_systemv217_a", "Constant value", (void*)&control_systemv217_a_default, vt_double,   {1}, 1736, dir_input, sizeof(double)} ,
  {"control_systemv218_a", "Constant value", (void*)&control_systemv218_a_default, vt_double,   {1}, 1744, dir_input, sizeof(double)} ,
  {"control_systemv219_a", "Constant value", (void*)&control_systemv219_a_default, vt_double,   {1}, 1752, dir_input, sizeof(double)} ,
  {"control_systemv220_a", "Constant value", (void*)&control_systemv220_a_default, vt_double,   {1}, 1760, dir_input, sizeof(double)} ,
  {"control_systemv221_a", "Constant value", (void*)&control_systemv221_a_default, vt_double,   {1}, 1768, dir_input, sizeof(double)} ,
  {"control_systemv222_a", "Constant value", (void*)&control_systemv222_a_default, vt_double,   {1}, 1776, dir_input, sizeof(double)} ,
  {"control_systemv223_a", "Constant value", (void*)&control_systemv223_a_default, vt_double,   {1}, 1784, dir_input, sizeof(double)} ,
  {"control_systemv224_a", "Constant value", (void*)&control_systemv224_a_default, vt_double,   {1}, 1792, dir_input, sizeof(double)} ,
  {"control_systemv225_a", "Constant value", (void*)&control_systemv225_a_default, vt_double,   {1}, 1800, dir_input, sizeof(double)} ,
  {"control_systemv226_a", "Constant value", (void*)&control_systemv226_a_default, vt_double,   {1}, 1808, dir_input, sizeof(double)} ,
  {"control_systemv227_a", "Constant value", (void*)&control_systemv227_a_default, vt_double,   {1}, 1816, dir_input, sizeof(double)} ,
  {"control_systemv228_a", "Constant value", (void*)&control_systemv228_a_default, vt_double,   {1}, 1824, dir_input, sizeof(double)} ,
  {"control_systemv229_a", "Constant value", (void*)&control_systemv229_a_default, vt_double,   {1}, 1832, dir_input, sizeof(double)} ,
  {"control_systemv230_a", "Constant value", (void*)&control_systemv230_a_default, vt_double,   {1}, 1840, dir_input, sizeof(double)} ,
  {"control_systemv231_a", "Constant value", (void*)&control_systemv231_a_default, vt_double,   {1}, 1848, dir_input, sizeof(double)} ,
  {"control_systemv232_a", "Constant value", (void*)&control_systemv232_a_default, vt_double,   {1}, 1856, dir_input, sizeof(double)} ,
  {"control_systemv233_a", "Constant value", (void*)&control_systemv233_a_default, vt_double,   {1}, 1864, dir_input, sizeof(double)} ,
  {"control_systemv234_a", "Constant value", (void*)&control_systemv234_a_default, vt_double,   {1}, 1872, dir_input, sizeof(double)} ,
  {"control_systemv235_a", "Constant value", (void*)&control_systemv235_a_default, vt_double,   {1}, 1880, dir_input, sizeof(double)} ,
  {"control_systemv236_a", "Constant value", (void*)&control_systemv236_a_default, vt_double,   {1}, 1888, dir_input, sizeof(double)} ,
  {"control_systemv237_a", "Constant value", (void*)&control_systemv237_a_default, vt_double,   {1}, 1896, dir_input, sizeof(double)} ,
  {"control_systemv238_a", "Constant value", (void*)&control_systemv238_a_default, vt_double,   {1}, 1904, dir_input, sizeof(double)} ,
  {"control_systemv239_a", "Constant value", (void*)&control_systemv239_a_default, vt_double,   {1}, 1912, dir_input, sizeof(double)} ,
  {"control_systemv240_a", "Constant value", (void*)&control_systemv240_a_default, vt_double,   {1}, 1920, dir_input, sizeof(double)} ,
  {"control_systemv241_a", "Constant value", (void*)&control_systemv241_a_default, vt_double,   {1}, 1928, dir_input, sizeof(double)} ,
  {"control_systemv242_a", "Constant value", (void*)&control_systemv242_a_default, vt_double,   {1}, 1936, dir_input, sizeof(double)} ,
  {"control_systemv243_a", "Constant value", (void*)&control_systemv243_a_default, vt_double,   {1}, 1944, dir_input, sizeof(double)} ,
  {"control_systemv244_a", "Constant value", (void*)&control_systemv244_a_default, vt_double,   {1}, 1952, dir_input, sizeof(double)} ,
  {"control_systemv245_a", "Constant value", (void*)&control_systemv245_a_default, vt_double,   {1}, 1960, dir_input, sizeof(double)} ,
  {"control_systemv246_a", "Constant value", (void*)&control_systemv246_a_default, vt_double,   {1}, 1968, dir_input, sizeof(double)} ,
  {"control_systemv247_a", "Constant value", (void*)&control_systemv247_a_default, vt_double,   {1}, 1976, dir_input, sizeof(double)} ,
  {"control_systemv248_a", "Constant value", (void*)&control_systemv248_a_default, vt_double,   {1}, 1984, dir_input, sizeof(double)} ,
  {"control_systemv249_a", "Constant value", (void*)&control_systemv249_a_default, vt_double,   {1}, 1992, dir_input, sizeof(double)} ,
  {"control_systemv250_a", "Constant value", (void*)&control_systemv250_a_default, vt_double,   {1}, 2000, dir_input, sizeof(double)} ,
  {"control_systemv251_a", "Constant value", (void*)&control_systemv251_a_default, vt_double,   {1}, 2008, dir_input, sizeof(double)} ,
  {"control_systemv252_a", "Constant value", (void*)&control_systemv252_a_default, vt_double,   {1}, 2016, dir_input, sizeof(double)} ,
  {"control_systemv253_a", "Constant value", (void*)&control_systemv253_a_default, vt_double,   {1}, 2024, dir_input, sizeof(double)} ,
  {"control_systemv254_a", "Constant value", (void*)&control_systemv254_a_default, vt_double,   {1}, 2032, dir_input, sizeof(double)} ,
  {"control_systemv255_a", "Constant value", (void*)&control_systemv255_a_default, vt_double,   {1}, 2040, dir_input, sizeof(double)} ,
  {"control_systemv256_a", "Constant value", (void*)&control_systemv256_a_default, vt_double,   {1}, 2048, dir_input, sizeof(double)} ,
  {"control_systemv257_a", "Constant value", (void*)&control_systemv257_a_default, vt_double,   {1}, 2056, dir_input, sizeof(double)} ,
  {"control_systemv258_a", "Constant value", (void*)&control_systemv258_a_default, vt_double,   {1}, 2064, dir_input, sizeof(double)} ,
  {"control_systemv259_a", "Constant value", (void*)&control_systemv259_a_default, vt_double,   {1}, 2072, dir_input, sizeof(double)} ,
  {"control_systemv260_a", "Constant value", (void*)&control_systemv260_a_default, vt_double,   {1}, 2080, dir_input, sizeof(double)} ,
  {"control_systemv261_a", "Constant value", (void*)&control_systemv261_a_default, vt_double,   {1}, 2088, dir_input, sizeof(double)} ,
  {"control_systemv262_a", "Constant value", (void*)&control_systemv262_a_default, vt_double,   {1}, 2096, dir_input, sizeof(double)} ,
  {"control_systemv263_a", "Constant value", (void*)&control_systemv263_a_default, vt_double,   {1}, 2104, dir_input, sizeof(double)} ,
  {"control_systemv264_a", "Constant value", (void*)&control_systemv264_a_default, vt_double,   {1}, 2112, dir_input, sizeof(double)} ,
  {"control_systemv265_a", "Constant value", (void*)&control_systemv265_a_default, vt_double,   {1}, 2120, dir_input, sizeof(double)} ,
  {"control_systemv266_a", "Constant value", (void*)&control_systemv266_a_default, vt_double,   {1}, 2128, dir_input, sizeof(double)} ,
  {"control_systemv267_a", "Constant value", (void*)&control_systemv267_a_default, vt_double,   {1}, 2136, dir_input, sizeof(double)} ,
  {"control_systemv268_a", "Constant value", (void*)&control_systemv268_a_default, vt_double,   {1}, 2144, dir_input, sizeof(double)} ,
  {"control_systemv269_a", "Constant value", (void*)&control_systemv269_a_default, vt_double,   {1}, 2152, dir_input, sizeof(double)} ,
  {"control_systemv270_a", "Constant value", (void*)&control_systemv270_a_default, vt_double,   {1}, 2160, dir_input, sizeof(double)} ,
  {"control_systemv271_a", "Constant value", (void*)&control_systemv271_a_default, vt_double,   {1}, 2168, dir_input, sizeof(double)} ,
  {"control_systemv272_a", "Constant value", (void*)&control_systemv272_a_default, vt_double,   {1}, 2176, dir_input, sizeof(double)} ,
  {"control_systemv273_a", "Constant value", (void*)&control_systemv273_a_default, vt_double,   {1}, 2184, dir_input, sizeof(double)} ,
  {"control_systemv274_a", "Constant value", (void*)&control_systemv274_a_default, vt_double,   {1}, 2192, dir_input, sizeof(double)} ,
  {"control_systemv275_a", "Constant value", (void*)&control_systemv275_a_default, vt_double,   {1}, 2200, dir_input, sizeof(double)} ,
  {"control_systemv276_a", "Constant value", (void*)&control_systemv276_a_default, vt_double,   {1}, 2208, dir_input, sizeof(double)} ,
  {"control_systemv277_a", "Constant value", (void*)&control_systemv277_a_default, vt_double,   {1}, 2216, dir_input, sizeof(double)} ,
  {"control_systemv278_a", "Constant value", (void*)&control_systemv278_a_default, vt_double,   {1}, 2224, dir_input, sizeof(double)} ,
  {"control_systemv279_a", "Constant value", (void*)&control_systemv279_a_default, vt_double,   {1}, 2232, dir_input, sizeof(double)} ,
  {"control_systemv280_a", "Constant value", (void*)&control_systemv280_a_default, vt_double,   {1}, 2240, dir_input, sizeof(double)} ,
  {"control_systemv281_a", "Constant value", (void*)&control_systemv281_a_default, vt_double,   {1}, 2248, dir_input, sizeof(double)} ,
  {"control_systemv282_a", "Constant value", (void*)&control_systemv282_a_default, vt_double,   {1}, 2256, dir_input, sizeof(double)} ,
  {"control_systemv283_a", "Constant value", (void*)&control_systemv283_a_default, vt_double,   {1}, 2264, dir_input, sizeof(double)} ,
  {"control_systemv284_a", "Constant value", (void*)&control_systemv284_a_default, vt_double,   {1}, 2272, dir_input, sizeof(double)} ,
  {"control_systemv285_a", "Constant value", (void*)&control_systemv285_a_default, vt_double,   {1}, 2280, dir_input, sizeof(double)} ,
  {"control_systemv286_a", "Constant value", (void*)&control_systemv286_a_default, vt_double,   {1}, 2288, dir_input, sizeof(double)} ,
  {"control_systemv287_a", "Constant value", (void*)&control_systemv287_a_default, vt_double,   {1}, 2296, dir_input, sizeof(double)} ,
  {"control_systemv288_a", "Constant value", (void*)&control_systemv288_a_default, vt_double,   {1}, 2304, dir_input, sizeof(double)} ,
  {"control_systemv289_a", "Constant value", (void*)&control_systemv289_a_default, vt_double,   {1}, 2312, dir_input, sizeof(double)} ,
  {"control_systemv290_a", "Constant value", (void*)&control_systemv290_a_default, vt_double,   {1}, 2320, dir_input, sizeof(double)} ,
  {"control_systemv291_a", "Constant value", (void*)&control_systemv291_a_default, vt_double,   {1}, 2328, dir_input, sizeof(double)} ,
  {"control_systemv292_a", "Constant value", (void*)&control_systemv292_a_default, vt_double,   {1}, 2336, dir_input, sizeof(double)} ,
  {"control_systemv293_a", "Constant value", (void*)&control_systemv293_a_default, vt_double,   {1}, 2344, dir_input, sizeof(double)} ,
  {"control_systemv294_a", "Constant value", (void*)&control_systemv294_a_default, vt_double,   {1}, 2352, dir_input, sizeof(double)} ,
  {"control_systemv295_a", "Constant value", (void*)&control_systemv295_a_default, vt_double,   {1}, 2360, dir_input, sizeof(double)} ,
  {"control_systemv296_a", "Constant value", (void*)&control_systemv296_a_default, vt_double,   {1}, 2368, dir_input, sizeof(double)} ,
  {"control_systemv297_a", "Constant value", (void*)&control_systemv297_a_default, vt_double,   {1}, 2376, dir_input, sizeof(double)} ,
  {"control_systemv298_a", "Constant value", (void*)&control_systemv298_a_default, vt_double,   {1}, 2384, dir_input, sizeof(double)} ,
  {"control_systemv299_a", "Constant value", (void*)&control_systemv299_a_default, vt_double,   {1}, 2392, dir_input, sizeof(double)} ,
  {"control_systemv300_a", "Constant value", (void*)&control_systemv300_a_default, vt_double,   {1}, 2400, dir_input, sizeof(double)} ,
  {"control_systemv301_a", "Constant value", (void*)&control_systemv301_a_default, vt_double,   {1}, 2408, dir_input, sizeof(double)} ,
  {"control_systemv302_a", "Constant value", (void*)&control_systemv302_a_default, vt_double,   {1}, 2416, dir_input, sizeof(double)} ,
  {"control_systemv303_a", "Constant value", (void*)&control_systemv303_a_default, vt_double,   {1}, 2424, dir_input, sizeof(double)} ,
  {"control_systemv304_a", "Constant value", (void*)&control_systemv304_a_default, vt_double,   {1}, 2432, dir_input, sizeof(double)} ,
  {"control_systemv305_a", "Constant value", (void*)&control_systemv305_a_default, vt_double,   {1}, 2440, dir_input, sizeof(double)} ,
  {"control_systemv306_a", "Constant value", (void*)&control_systemv306_a_default, vt_double,   {1}, 2448, dir_input, sizeof(double)} ,
  {"control_systemv307_a", "Constant value", (void*)&control_systemv307_a_default, vt_double,   {1}, 2456, dir_input, sizeof(double)} ,
  {"control_systemv308_a", "Constant value", (void*)&control_systemv308_a_default, vt_double,   {1}, 2464, dir_input, sizeof(double)} ,
  {"control_systemv309_a", "Constant value", (void*)&control_systemv309_a_default, vt_double,   {1}, 2472, dir_input, sizeof(double)} ,
  {"control_systemv310_a", "Constant value", (void*)&control_systemv310_a_default, vt_double,   {1}, 2480, dir_input, sizeof(double)} ,
  {"control_systemv311_a", "Constant value", (void*)&control_systemv311_a_default, vt_double,   {1}, 2488, dir_input, sizeof(double)} ,
  {"control_systemv312_a", "Constant value", (void*)&control_systemv312_a_default, vt_double,   {1}, 2496, dir_input, sizeof(double)} ,
  {"control_systemv313_a", "Constant value", (void*)&control_systemv313_a_default, vt_double,   {1}, 2504, dir_input, sizeof(double)} ,
  {"control_systemv314_a", "Constant value", (void*)&control_systemv314_a_default, vt_double,   {1}, 2512, dir_input, sizeof(double)} ,
  {"control_systemv315_a", "Constant value", (void*)&control_systemv315_a_default, vt_double,   {1}, 2520, dir_input, sizeof(double)} ,
  {"control_systemv316_a", "Constant value", (void*)&control_systemv316_a_default, vt_double,   {1}, 2528, dir_input, sizeof(double)} ,
  {"control_systemv317_a", "Constant value", (void*)&control_systemv317_a_default, vt_double,   {1}, 2536, dir_input, sizeof(double)} ,
  {"control_systemv318_a", "Constant value", (void*)&control_systemv318_a_default, vt_double,   {1}, 2544, dir_input, sizeof(double)} ,
  {"control_systemv319_a", "Constant value", (void*)&control_systemv319_a_default, vt_double,   {1}, 2552, dir_input, sizeof(double)} ,
  {"control_systemv320_a", "Constant value", (void*)&control_systemv320_a_default, vt_double,   {1}, 2560, dir_input, sizeof(double)} ,
  {"control_systemv369_k", "TAperiodika1 gain", (void*)&control_systemv369_k_default, vt_double,   {1}, 2568, dir_input, sizeof(double)} ,
  {"control_systemv369_t", "Aperiodika T", (void*)&control_systemv369_t_default, vt_double,   {1}, 2576, dir_input, sizeof(double)} ,
  {"control_systemv370_k", "TAperiodika1 gain", (void*)&control_systemv370_k_default, vt_double,   {1}, 2584, dir_input, sizeof(double)} ,
  {"control_systemv370_t", "Aperiodika T", (void*)&control_systemv370_t_default, vt_double,   {1}, 2592, dir_input, sizeof(double)} ,
  {"control_systemv371_k", "TAperiodika1 gain", (void*)&control_systemv371_k_default, vt_double,   {1}, 2600, dir_input, sizeof(double)} ,
  {"control_systemv371_t", "Aperiodika T", (void*)&control_systemv371_t_default, vt_double,   {1}, 2608, dir_input, sizeof(double)} 
};
/* Local variables */
#define local_count 21


typedef struct {
  double control_systemv336_out_0_;
  double_4 control_systemv421_out_0_;
  char control_systemv322_out_0_;
  char control_systemv324_out_0_;
  char control_systemv326_out_0_;
  char_68 control_systemv379_out_0_;
  char_68 control_systemv380_out_0_;
  char_68 control_systemv389_out_0_;
  char_68 control_systemv390_out_0_;
  char_68 control_systemv391_out_0_;
  char_68 control_systemv392_out_0_;
  char_68 control_systemv394_out_0_;
  char_68 control_systemv395_out_0_;
  char_4 control_systemv404_out_0_;
  char_4 control_systemv405_out_0_;
  char_4 control_systemv408_out_0_;
  char_4 control_systemv409_out_0_;
  char_4 control_systemv411_out_0_;
  char_4 control_systemv412_out_0_;
  char_4 control_systemv415_out_0_;
  char_4 control_systemv416_out_0_;
} t_local;


