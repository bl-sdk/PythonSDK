#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIconData()
{
    class_< FIconData >("FIconData", no_init)
        .def_readwrite("U", &FIconData::U)
        .def_readwrite("V", &FIconData::V)
        .def_readwrite("UL", &FIconData::UL)
        .def_readwrite("VL", &FIconData::VL)
        .def_readwrite("Scale", &FIconData::Scale)
  ;
}