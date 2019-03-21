#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEventData()
{
    class_< FEventData >("FEventData", no_init)
        .def_readwrite("Type", &FEventData::Type)
        .def_readwrite("Data", &FEventData::Data)
        .def_readwrite("mouseIndex", &FEventData::mouseIndex)
        .def_readwrite("Button", &FEventData::Button)
        .def_readwrite("Index", &FEventData::Index)
        .def_readwrite("lastIndex", &FEventData::lastIndex)
        .def_readwrite("controllerIdx", &FEventData::controllerIdx)
  ;
}