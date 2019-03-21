#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInst()
{
    py::class_< UInterpGroupInst,  UObject   >("UInterpGroupInst")
        .def_readwrite("Group", &UInterpGroupInst::Group)
        .def_readwrite("GroupActor", &UInterpGroupInst::GroupActor)
        .def_readwrite("TrackInst", &UInterpGroupInst::TrackInst)
        .def("StaticClass", &UInterpGroupInst::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}