#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSwitchClassInfo()
{
    class_< FSwitchClassInfo >("FSwitchClassInfo", no_init)
        .def_readwrite("ClassName", &FSwitchClassInfo::ClassName)
        .def_readwrite("bFallThru", &FSwitchClassInfo::bFallThru)
  ;
}