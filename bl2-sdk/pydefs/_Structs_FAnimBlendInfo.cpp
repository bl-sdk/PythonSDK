#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimBlendInfo()
{
    class_< FAnimBlendInfo >("FAnimBlendInfo", no_init)
        .def_readwrite("AnimName", &FAnimBlendInfo::AnimName)
        .def_readwrite("AnimInfo", &FAnimBlendInfo::AnimInfo)
        .def_readwrite("Weight", &FAnimBlendInfo::Weight)
  ;
}