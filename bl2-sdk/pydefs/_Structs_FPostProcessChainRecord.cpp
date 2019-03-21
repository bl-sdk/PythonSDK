#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessChainRecord()
{
    class_< FPostProcessChainRecord >("FPostProcessChainRecord", no_init)
        .def_readwrite("Template", &FPostProcessChainRecord::Template)
        .def_readwrite("Instance", &FPostProcessChainRecord::Instance)
        .def_readwrite("AppliedModifiers", &FPostProcessChainRecord::AppliedModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainRecord::DOFEffectModifier)
        .def_readwrite("NextDOFUpdateTime", &FPostProcessChainRecord::NextDOFUpdateTime)
  ;
}