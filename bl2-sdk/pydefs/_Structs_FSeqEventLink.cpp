#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqEventLink(py::object m)
{
    py::class_< FSeqEventLink >(m, "FSeqEventLink")
        .def_readwrite("LinkedEvents", &FSeqEventLink::LinkedEvents)
        .def_readwrite("LinkDesc", &FSeqEventLink::LinkDesc)
  ;
}