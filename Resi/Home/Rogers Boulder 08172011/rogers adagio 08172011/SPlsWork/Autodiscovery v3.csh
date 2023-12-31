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
  Name=Autodiscovery v3 (cm)
  SmplCName=Autodiscovery v3.csp
  Code=1
  SysRev5=3.137
  SMWRev=2.02.05
  InputCue1=Enable
  InputSigType1=Digital
  InputCue2=Discover
  InputSigType2=Digital
  InputCue3=Abort
  InputSigType3=Digital
  InputCue4=SetiPod
  InputSigType4=Digital
  InputCue5=SetAAS
  InputSigType5=Digital
  OutputCue1=Found
  OutputSigType1=Digital
  OutputCue2=NotFound
  OutputSigType2=Digital
  OutputCue3=IDSET
  OutputSigType3=Digital
  OutputCue4=IdFailNone
  OutputSigType4=Digital
  OutputCue5=IDFailMultiple
  OutputSigType5=Digital
  OutputCue6=DiscoveryComplete
  OutputSigType6=Digital
  InputList2Cue1=NextID$
  InputList2SigType1=Serial
  InputList2Cue2=Prompt$
  InputList2SigType2=Serial
  InputList2Cue3=ConsoleRx$
  InputList2SigType3=Serial
  InputList2Cue4=Match$
  InputList2SigType4=Serial
  OutputList2Cue1=AASZonesFound
  OutputList2SigType1=Analog
  OutputList2Cue2=ConsoleTx$
  OutputList2SigType2=Serial
  ParamCue1=[Reference Name]
  MinVariableInputs=5
  MaxVariableInputs=5
  MinVariableInputsList2=4
  MaxVariableInputsList2=4
  MinVariableOutputs=6
  MaxVariableOutputs=6
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
  SPlus2CompiledName=S2_Autodiscovery_v3
  SymJam=NonExclusive
  FileName=Autodiscovery v3.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
