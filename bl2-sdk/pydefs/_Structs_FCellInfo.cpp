#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCellInfo()
{
    class_< FCellInfo >("FCellInfo", no_init)
        .def_readwrite("AbsolutePosition", &FCellInfo::AbsolutePosition)
        .def_readwrite("Width", &FCellInfo::Width)
        .def_readwrite("Height", &FCellInfo::Height)
        .def_readwrite("CellName", &FCellInfo::CellName)
  ;
}