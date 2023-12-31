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
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,167,168,179,213,214,215,216,217,225,226,248,249,266,267,310,718,756,854,
  Name=APAD AAS Scroller v2 (cm)
  SmplCName=APAD AAS Scroller v2.csp
  Code=1
  SysRev5=3.137
  SMWRev=2.02.05
  InputCue1=ScrollUp
  InputSigType1=Digital
  InputCue2=ScrollDown
  InputSigType2=Digital
  InputCue3=Top
  InputSigType3=Digital
  InputCue4=Bottom
  InputSigType4=Digital
  InputCue5=SearchPressed
  InputSigType5=Digital
  InputCue6=Reset
  InputSigType6=Digital
  OutputCue1=ScrollUpFb
  OutputSigType1=Digital
  OutputCue2=ScrollDownFb
  OutputSigType2=Digital
  OutputCue3=ShowTop
  OutputSigType3=Digital
  OutputCue4=ShowBottom
  OutputSigType4=Digital
  OutputCue5=SearchEnable
  OutputSigType5=Digital
  OutputCue6=BottomGo
  OutputSigType6=Digital
  OutputCue7=ScrollHighlightFb[#]
  OutputSigType7=Digital
  InputList2Cue1=ScrollPageSize
  InputList2SigType1=Analog
  InputList2Cue2=ScrollMax
  InputList2SigType2=Analog
  InputList2Cue3=ScrollLevel
  InputList2SigType3=Analog
  InputList2Cue4=FirstShown
  InputList2SigType4=Analog
  OutputList2Cue1=ScrollIndexOut
  OutputList2SigType1=Analog
  OutputList2Cue2=Scrollbar
  OutputList2SigType2=Analog
  ParamCue1=[Reference Name]
  MinVariableInputs=6
  MaxVariableInputs=6
  MinVariableInputsList2=4
  MaxVariableInputsList2=4
  MinVariableOutputs=7
  MaxVariableOutputs=16
  MinVariableOutputsList2=2
  MaxVariableOutputsList2=2
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
  SPlus2CompiledName=S2_APAD_AAS_Scroller_v2
  SymJam=NonExclusive
  FileName=APAD AAS Scroller v2.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
