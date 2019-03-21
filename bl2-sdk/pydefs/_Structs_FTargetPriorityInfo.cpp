#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTargetPriorityInfo()
{
    class_< FTargetPriorityInfo >("FTargetPriorityInfo", no_init)
        .def_readwrite("TargetName", &FTargetPriorityInfo::TargetName)
        .def_readwrite("ShortName", &FTargetPriorityInfo::ShortName)
        .def_readwrite("Value", &FTargetPriorityInfo::Value)
        .def_readwrite("BarColor", &FTargetPriorityInfo::BarColor)
  ;
}