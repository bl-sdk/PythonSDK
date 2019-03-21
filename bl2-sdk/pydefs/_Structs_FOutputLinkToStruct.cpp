#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOutputLinkToStruct()
{
    py::class_< FOutputLinkToStruct >("FOutputLinkToStruct")
        .def_readwrite("FromNodeID", &FOutputLinkToStruct::FromNodeID)
        .def_readwrite("LinkNumber", &FOutputLinkToStruct::LinkNumber)
        .def_readwrite("ToNodeID", &FOutputLinkToStruct::ToNodeID)
  ;
}