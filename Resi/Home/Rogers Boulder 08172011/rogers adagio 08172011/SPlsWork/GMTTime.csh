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
  Cmn1=GMTTime: Set the local time and date from a source that supplies||1
  Cmn2=GMT time.\\\\MAJOR ASSUMPTION: ALL GMT time inputs are set PRIOR||1
  Cmn3=to triggering the SET input.\\Note that there is no daylight savings||1
  Cmn4=time correction. That must be provided by\\tbe user as a change||1
  Cmn5=to GMTOffset.\\A good source for the proper GMTOffSet is www.greenwichmeantime.
  Cmn6=com. The offset\\varies +14 to -12. Only one of PlusOffset and MinusOffset||1
  Cmn7=are used - the last one \\set is the one that is used. The other||1
  Cmn8=is assumed 0.\\
[END]
[BEGIN]
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,167,168,179,213,214,215,216,217,225,226,248,249,266,267,310,718,756,854,
  Name=GMTTime (cm)
  SmplCName=GMTTime.csp
  Code=1
  SysRev5=3.137
  SMWRev=2.02.05
  InputCue1=Set
  InputSigType1=Digital
  InputCue2=TimeRequest
  InputSigType2=Digital
  OutputCue1=WaitingForTimeData
  OutputSigType1=Digital
  InputList2Cue1=GMTMonth
  InputList2SigType1=Analog
  InputList2Cue2=GMTDay
  InputList2SigType2=Analog
  InputList2Cue3=GMTYear
  InputList2SigType3=Analog
  InputList2Cue4=GMTHour
  InputList2SigType4=Analog
  InputList2Cue5=GMTMinute
  InputList2SigType5=Analog
  InputList2Cue6=GMTSeconds
  InputList2SigType6=Analog
  InputList2Cue7=GMTOffset
  InputList2SigType7=Analog
  OutputList2Cue1=LocalMonth
  OutputList2SigType1=Analog
  OutputList2Cue2=LocalDay
  OutputList2SigType2=Analog
  OutputList2Cue3=LocalYear
  OutputList2SigType3=Analog
  OutputList2Cue4=LocalHour
  OutputList2SigType4=Analog
  OutputList2Cue5=LocalMinute
  OutputList2SigType5=Analog
  OutputList2Cue6=LocalSeconds
  OutputList2SigType6=Analog
  ParamCue1=[Reference Name]
  MinVariableInputs=2
  MaxVariableInputs=2
  MinVariableInputsList2=7
  MaxVariableInputsList2=7
  MinVariableOutputs=1
  MaxVariableOutputs=1
  MinVariableOutputsList2=6
  MaxVariableOutputsList2=6
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
  SPlus2CompiledName=S2_GMTTime
  SymJam=NonExclusive
  FileName=GMTTime.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
