/********************************************************************
* SusyFitter_Dict.h
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************************/
#ifdef __CINT__
#error SusyFitter_Dict.h/C is only for compilation. Abort cint.
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#define G__DICTIONARY
#define G__PRIVATE_GVALUE
#include "G__ci.h"
#include "FastAllocString.h"
extern "C" {
extern void G__cpp_setup_tagtableSusyFitter_Dict();
extern void G__cpp_setup_inheritanceSusyFitter_Dict();
extern void G__cpp_setup_typetableSusyFitter_Dict();
extern void G__cpp_setup_memvarSusyFitter_Dict();
extern void G__cpp_setup_globalSusyFitter_Dict();
extern void G__cpp_setup_memfuncSusyFitter_Dict();
extern void G__cpp_setup_funcSusyFitter_Dict();
extern void G__set_cpp_environmentSusyFitter_Dict();
}


#include "TObject.h"
#include "TMemberInspector.h"
#include "ChannelStyle.h"
#include "CombinationUtils.h"
#include "CombineWorkSpaces.h"
#include "ConfigMgr.h"
#include "DrawUtils.h"
#include "FitConfig.h"
#include "Heaviside.h"
#include "HypoTestTool.h"
#include "LimitResult.h"
#include "profile_get_Pvalue.h"
#include "RooExpandedFitResult.h"
#include "RooHist.h"
#include "RooPlot.h"
#include "SigmaLR.h"
#include "Significance.h"
#include "SRootFinder.h"
#include "StatTools.h"
#include "TEasyFormula.h"
#include "TMsgLogger.h"
#include "toy_utils.h"
#include "Utils.h"
#include "ValidationUtils.h"
#include "XtraValues.h"
#include <algorithm>
namespace std { }
using namespace std;

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__SusyFitter_DictLN_TClass;
extern G__linked_taginfo G__SusyFitter_DictLN_TBuffer;
extern G__linked_taginfo G__SusyFitter_DictLN_TMemberInspector;
extern G__linked_taginfo G__SusyFitter_DictLN_TObject;
extern G__linked_taginfo G__SusyFitter_DictLN_TNamed;
extern G__linked_taginfo G__SusyFitter_DictLN_TString;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEfloatcOallocatorlEfloatgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEboolcOallocatorlEboolgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_ios_base;
extern G__linked_taginfo G__SusyFitter_DictLN_basic_ioslEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_basic_ostreamlEcharcOchar_traitslEchargRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_string;
extern G__linked_taginfo G__SusyFitter_DictLN_basic_ostringstreamlEcharcOchar_traitslEchargRcOallocatorlEchargRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TLegend;
extern G__linked_taginfo G__SusyFitter_DictLN_pairlEstringcOintgR;
extern G__linked_taginfo G__SusyFitter_DictLN_listlEdoublecOallocatorlEdoublegRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_listlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooAbsArg;
extern G__linked_taginfo G__SusyFitter_DictLN_RooArgSet;
extern G__linked_taginfo G__SusyFitter_DictLN_RooAbsData;
extern G__linked_taginfo G__SusyFitter_DictLN_RooAbsCollection;
extern G__linked_taginfo G__SusyFitter_DictLN_RooDataSet;
extern G__linked_taginfo G__SusyFitter_DictLN_RooFitResult;
extern G__linked_taginfo G__SusyFitter_DictLN_RooAbsPdf;
extern G__linked_taginfo G__SusyFitter_DictLN_RooCategory;
extern G__linked_taginfo G__SusyFitter_DictLN_RooAbsReal;
extern G__linked_taginfo G__SusyFitter_DictLN_RooRealVar;
extern G__linked_taginfo G__SusyFitter_DictLN_RooArgList;
extern G__linked_taginfo G__SusyFitter_DictLN_TH1;
extern G__linked_taginfo G__SusyFitter_DictLN_TTree;
extern G__linked_taginfo G__SusyFitter_DictLN_RooFit;
extern G__linked_taginfo G__SusyFitter_DictLN_RooFitcLcLMsgLevel;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcOTH1mUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTH1mUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcORooDataHistmUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcORooDataHistmUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcORooDataSetmUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcORooDataSetmUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcORooAbsDatamUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcORooAbsDatamUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMsgLevel;
extern G__linked_taginfo G__SusyFitter_DictLN_TMsgLogger;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETMsgLevelcOstringcOlesslETMsgLevelgRcOallocatorlEpairlEconstsPTMsgLevelcOstringgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_ChannelStyle;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEintcOallocatorlEintgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEintcOallocatorlEintgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlETStringcOallocatorlETStringgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlETStringcOallocatorlETStringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooWorkspace;
extern G__linked_taginfo G__SusyFitter_DictLN_Util;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEstringcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEstringcOallocatorlEstringgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooMCStudy;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStats;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLHypoTestInverterResult;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcOTStringcOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOTStringgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooWorkspacemUcOallocatorlERooWorkspacemUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooWorkspacemUcOallocatorlERooWorkspacemUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcOfloatcOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOfloatgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_FitConfig;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEChannelStylecOallocatorlEChannelStylegRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEChannelStylecOallocatorlEChannelStylegRsPgRcLcLiterator;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEChannelStylecOallocatorlEChannelStylegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_ConfigMgr;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEFitConfigmUcOallocatorlEFitConfigmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEFitConfigmUcOallocatorlEFitConfigmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TH2F;
extern G__linked_taginfo G__SusyFitter_DictLN_TH2D;
extern G__linked_taginfo G__SusyFitter_DictLN_TH2;
extern G__linked_taginfo G__SusyFitter_DictLN_DrawUtil;
extern G__linked_taginfo G__SusyFitter_DictLN_iteratorlEbidirectional_iterator_tagcOTObjectmUcOlongcOconstsPTObjectmUmUcOconstsPTObjectmUaNgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooPrintable;
extern G__linked_taginfo G__SusyFitter_DictLN_setlEstringcOlesslEstringgRcOallocatorlEstringgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcOTObjArraymUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOTObjArraymUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooRealProxy;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcOstringcOlesslEstringgRcOallocatorlEpairlEconstsPstringcOstringgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_setlEpairlERooAbsArgmUcORooAbsArgmUgRcOlesslEpairlERooAbsArgmUcORooAbsArgmUgRsPgRcOallocatorlEpairlERooAbsArgmUcORooAbsArgmUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_dequelERooAbsCachemUcOallocatorlERooAbsCachemUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplERooAbsArgmUcOTRefArraymUcOlesslERooAbsArgmUgRcOallocatorlEpairlERooAbsArgmUsPconstcOTRefArraymUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TVectorTlEfloatgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TVectorTlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooCurve;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooCurvemUcOallocatorlERooCurvemUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooCurvemUcOallocatorlERooCurvemUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooPlot;
extern G__linked_taginfo G__SusyFitter_DictLN_listlERooAbsRealcLcLEvalErrorcOallocatorlERooAbsRealcLcLEvalErrorgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_pairlEstringcOlistlERooAbsRealcLcLEvalErrorcOallocatorlERooAbsRealcLcLEvalErrorgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEconstsPRooAbsArgmUcOpairlEstringcOlistlERooAbsRealcLcLEvalErrorcOallocatorlERooAbsRealcLcLEvalErrorgRsPgRsPgRcOlesslEconstsPRooAbsArgmUgRcOallocatorlEpairlEconstsPRooAbsArgmUsPconstcOpairlEstringcOlistlERooAbsRealcLcLEvalErrorcOallocatorlERooAbsRealcLcLEvalErrorgRsPgRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_Heaviside;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLModelConfig;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEintcOstringcOlesslEintgRcOallocatorlEpairlEconstsPintcOstringgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_dequelEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRcOallocatorlEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_stacklEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRcOdequelEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRcOallocatorlEvectorlERooMsgServicecLcLStreamConfigcOallocatorlERooMsgServicecLcLStreamConfiggRsPgRsPgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcObasic_ostreamlEcharcOchar_traitslEchargRsPgRmUcOlesslEstringgRcOallocatorlEpairlEconstsPstringcObasic_ostreamlEcharcOchar_traitslEchargRsPgRmUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooNormSetCachecOallocatorlERooNormSetCachegRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooNormSetCachecOallocatorlERooNormSetCachegRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooAbsCacheElementmUcOallocatorlERooAbsCacheElementmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooAbsCacheElementmUcOallocatorlERooAbsCacheElementmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TFormula;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTBaselEfloatgR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTBaselEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TElementActionTlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TElementPosActionTlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSymlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTRow_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTRowlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTColumn_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTDiag_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTFlat_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSub_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSparseRow_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSparseDiag_constlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTColumnlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTDiaglEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTFlatlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSublEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSparseRowlEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTSparseDiaglEdoublegR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcOdoublecOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOdoublegRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcOintcOlesslETStringgRcOallocatorlEpairlEconstsPTStringcOintgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUcOlesslETStringgRcOallocatorlEpairlEconstsPTStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_listlERooAbsDatamUcOallocatorlERooAbsDatamUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_listlETObjectmUcOallocatorlETObjectmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfocOlesslETStringgRcOallocatorlEpairlEconstsPTStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilescOlesslETStringgRcOallocatorlEpairlEconstsPTStringcORooWorkspacecLcLCodeRepocLcLClassFilesgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadercOlesslETStringgRcOallocatorlEpairlEconstsPTStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEstringcORooArgSetcOlesslEstringgRcOallocatorlEpairlEconstsPstringcORooArgSetgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEvectorlEintcOallocatorlEintgRsPgRcOallocatorlEvectorlEintcOallocatorlEintgRsPgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooArgSetmUcOallocatorlERooArgSetmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooArgSetmUcOallocatorlERooArgSetmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlERooAbsRealmUcOallocatorlERooAbsRealmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlERooAbsRealmUcOallocatorlERooAbsRealmUgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooDirItem;
extern G__linked_taginfo G__SusyFitter_DictLN_listlERooDataSetmUcOallocatorlERooDataSetmUgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLHypoTestResult;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLHypoTestCalculatorGeneric;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLHypoTestInverter;
extern G__linked_taginfo G__SusyFitter_DictLN_RooStatscLcLHypoTestTool;
extern G__linked_taginfo G__SusyFitter_DictLN_LimitResult;
extern G__linked_taginfo G__SusyFitter_DictLN_TMatrixTlEfloatgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEpairlEstringcOintgRcOallocatorlEpairlEstringcOintgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEpairlEstringcOintgRcOallocatorlEpairlEstringcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_RooExpandedFitResult;
extern G__linked_taginfo G__SusyFitter_DictLN_SigmaLR;
extern G__linked_taginfo G__SusyFitter_DictLN_StatTools;
extern G__linked_taginfo G__SusyFitter_DictLN_StatToolscLcLSRootFinder;
extern G__linked_taginfo G__SusyFitter_DictLN_TMap;
extern G__linked_taginfo G__SusyFitter_DictLN_TEasyFormula;
extern G__linked_taginfo G__SusyFitter_DictLN_maplEintcOTStringcOlesslEintgRcOallocatorlEpairlEconstsPintcOTStringgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_listlELimitResultcOallocatorlELimitResultgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_pairlEunsignedsPintcOintgR;
extern G__linked_taginfo G__SusyFitter_DictLN_vectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgR;
extern G__linked_taginfo G__SusyFitter_DictLN_reverse_iteratorlEvectorlEpairlEunsignedsPintcOintgRcOallocatorlEpairlEunsignedsPintcOintgRsPgRsPgRcLcLiteratorgR;
extern G__linked_taginfo G__SusyFitter_DictLN_XtraValues;
extern G__linked_taginfo G__SusyFitter_DictLN_ValidationUtils;

/* STUB derived class for protected member access */
typedef vector<ChannelStyle,allocator<ChannelStyle> > G__vectorlEChannelStylecOallocatorlEChannelStylegRsPgR;
typedef vector<ChannelStyle,allocator<ChannelStyle> >::iterator G__vectorlEChannelStylecOallocatorlEChannelStylegRsPgRcLcLiterator;
