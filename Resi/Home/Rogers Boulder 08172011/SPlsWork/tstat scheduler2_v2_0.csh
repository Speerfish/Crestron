[BEGIN]
  Version=1
[END]
[BEGIN]
  ObjTp=FSgntr
  Sgntr=CresSPlus
  RelVrs=1
  IntStrVrs=1
  SPlusVrs=3.03.16
  InclDatVrs=2.08.57
  CrossCplrVrs=1.3
[END]
[BEGIN]
  ObjTp=Hd
  Cmn1=This module is designed to be used from within the "CHV-T(H)STAT||1
  Cmn2=with 5/2 Schedule" modules.\\Please see the help included with those||1
  Cmn3=modules for more information.\\\\Revision History\\================\\
  Cmn4=v2.0.0\\------\\-Added support to automatically return from Away||1
  Cmn5=Mode at specified time and date.\\-Added support for Slab Modes\\
  Cmn6=-Added support to retain Hold and Away states after power outage||1
  Cmn7=or new program upload.\\\\\\v1.0.3\\------\\-fixed bug where schedules||1
  Cmn8=would not consistently run when there was only one schedule defined||1
  Cmn9=per day\\\\v1.0.2\\------\\-fixed bug where the "removed" schedules||1
  Cmn10=could run after midnight in certain cases\\-improved handling of||1
  Cmn11=cases where ALL schedules were removed (hitting Run_Program would||1
  Cmn12=change setpoints)\\-added "No Schedules" text on Current_Schedule$||1
  Cmn13=if ALL schedules were removed\\\\v1.0.1\\------\\-fixed bug involving||1
  Cmn14=adjusting schedule times on the TSTAT unit. Time would not properly||1
  Cmn15=wrap from PM to AM after midnight, or vice versa\\\\v1.0.0\\----
  Cmn16=--\\-initial release\\
[END]
[BEGIN]
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,167,168,179,213,214,215,216,217,225,226,248,249,266,267,310,718,756,854,
  Name=TSTAT Scheduler (5-2 program) for firmware v2.xxx v2.0.0 (cm)
  SmplCName=tstat scheduler2_v2_0.csp
  Code=1
  SysRev5=3.090
  SMWRev=2.02.00
  InputCue1=weekday_wake
  InputSigType1=Digital
  InputCue2=weekday_leave
  InputSigType2=Digital
  InputCue3=weekday_return
  InputSigType3=Digital
  InputCue4=weekday_sleep
  InputSigType4=Digital
  InputCue5=weekend_wake
  InputSigType5=Digital
  InputCue6=weekend_leave
  InputSigType6=Digital
  InputCue7=weekend_return
  InputSigType7=Digital
  InputCue8=weekend_sleep
  InputSigType8=Digital
  InputCue9=away
  InputSigType9=Digital
  InputCue10=hour_up
  InputSigType10=Digital
  InputCue11=hour_down
  InputSigType11=Digital
  InputCue12=minute_up
  InputSigType12=Digital
  InputCue13=minute_down
  InputSigType13=Digital
  InputCue14=heat_setpoint_up
  InputSigType14=Digital
  InputCue15=heat_setpoint_down
  InputSigType15=Digital
  InputCue16=cool_setpoint_up
  InputSigType16=Digital
  InputCue17=cool_setpoint_down
  InputSigType17=Digital
  InputCue18=slab_setpoint_up
  InputSigType18=Digital
  InputCue19=slab_setpoint_down
  InputSigType19=Digital
  InputCue20=remove_schedule
  InputSigType20=Digital
  InputCue21=reset_schedules
  InputSigType21=Digital
  InputCue22=temp_scale
  InputSigType22=Digital
  InputCue23=half_degree_C_steps
  InputSigType23=Digital
  InputCue24=run_program
  InputSigType24=Digital
  InputCue25=run_away
  InputSigType25=Digital
  InputCue26=run_hold
  InputSigType26=Digital
  InputCue27=single_button_select
  InputSigType27=Digital
  InputCue28=single_button_adjust
  InputSigType28=Digital
  InputCue29=use_default_schedule_times
  InputSigType29=Digital
  InputCue30=sunday_night_is_weekday
  InputSigType30=Digital
  InputCue31=friday_night_is_weekend
  InputSigType31=Digital
  InputCue32=AwayDay_inc
  InputSigType32=Digital
  InputCue33=AwayDay_dec
  InputSigType33=Digital
  InputCue34=AwaySched_inc
  InputSigType34=Digital
  InputCue35=Slab_SP_Enabled
  InputSigType35=Digital
  OutputCue1=schedule_due
  OutputSigType1=Digital
  OutputCue2=PM_fb
  OutputSigType2=Digital
  OutputCue3=RUN
  OutputSigType3=Digital
  OutputCue4=Away_Mode_fb
  OutputSigType4=Digital
  OutputCue5=Hold_Mode_fb
  OutputSigType5=Digital
  InputList2Cue1=current_heat_SP
  InputList2SigType1=Analog
  InputList2Cue2=current_cool_SP
  InputList2SigType2=Analog
  InputList2Cue3=current_slab_SP
  InputList2SigType3=Analog
  InputList2Cue4=instance_id
  InputList2SigType4=Analog
  InputList2Cue5=path$
  InputList2SigType5=Serial
  OutputList2Cue1=current_schedule
  OutputList2SigType1=Analog
  OutputList2Cue2=current_dayofweek
  OutputList2SigType2=Analog
  OutputList2Cue3=schedule_name$
  OutputList2SigType3=Serial
  OutputList2Cue4=schedule_time$
  OutputList2SigType4=Serial
  OutputList2Cue5=single_button_select$
  OutputList2SigType5=Serial
  OutputList2Cue6=single_button_adjust$
  OutputList2SigType6=Serial
  OutputList2Cue7=Away_Schedule$
  OutputList2SigType7=Serial
  OutputList2Cue8=Away_Date$
  OutputList2SigType8=Serial
  OutputList2Cue9=schedule_setpoint$[1]
  OutputList2SigType9=Serial
  OutputList2Cue10=schedule_setpoint$[2]
  OutputList2SigType10=Serial
  OutputList2Cue11=schedule_setpoint$[3]
  OutputList2SigType11=Serial
  OutputList2Cue12=setpoint[#]
  OutputList2SigType12=Analog
  ParamCue1=[Reference Name]
  MinVariableInputs=35
  MaxVariableInputs=35
  MinVariableInputsList2=5
  MaxVariableInputsList2=5
  MinVariableOutputs=5
  MaxVariableOutputs=5
  MinVariableOutputsList2=12
  MaxVariableOutputsList2=15
  MinVariableParams=0
  MaxVariableParams=0
  Expand=expand_separately
  Expand2=expand_separately
  ProgramTree=Logic
  SymbolTree=0
  Hint=
  PdfHelp=
  HelpID= 
  Render=4
  Smpl-C=16
  CompilerCode=-48
  CompilerParamCode=27
  CompilerParamCode5=14
  NumFixedParams=1
  Pp1=1
  MPp=1
  NVStorage=10
  ParamSigType1=String
  SmplCInputCue1=o#
  SmplCOutputCue1=i#
  SmplCInputList2Cue1=an#
  SmplCOutputList2Cue1=ai#
  SPlus2CompiledName=S2_tstat_scheduler2_v2_0
  SymJam=NonExclusive
  FileName=tstat scheduler2_v2_0.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]