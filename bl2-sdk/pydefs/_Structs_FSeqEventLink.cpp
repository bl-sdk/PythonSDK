#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqEventLink()
{
    py::class_< FSeqEventLink >("FSeqEventLink")
        .def_readwrite("LinkedEvents", &FSeqEventLink::LinkedEvents)
        .def_readwrite("LinkDesc", &FSeqEventLink::LinkDesc)
  ;
}