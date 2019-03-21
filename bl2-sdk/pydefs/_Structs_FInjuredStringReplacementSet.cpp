#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInjuredStringReplacementSet()
{
    class_< FInjuredStringReplacementSet >("FInjuredStringReplacementSet", no_init)
        .def_readwrite("Skills", &FInjuredStringReplacementSet::Skills)
        .def_readwrite("NewPlayerInjuredString", &FInjuredStringReplacementSet::NewPlayerInjuredString)
        .def_readwrite("NewInjuredTooltipString1", &FInjuredStringReplacementSet::NewInjuredTooltipString1)
        .def_readwrite("NewInjuredTooltipString2", &FInjuredStringReplacementSet::NewInjuredTooltipString2)
  ;
}