#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroup()
{
    py::class_< UInterpGroup,  UObject   >("UInterpGroup")
        .def_readwrite("VfTable_FInterpEdInputInterface", &UInterpGroup::VfTable_FInterpEdInputInterface)
        .def_readwrite("InterpTracks", &UInterpGroup::InterpTracks)
        .def_readwrite("GroupName", &UInterpGroup::GroupName)
        .def_readwrite("GroupColor", &UInterpGroup::GroupColor)
        .def_readwrite("GroupAnimSets", &UInterpGroup::GroupAnimSets)
        .def("StaticClass", &UInterpGroup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}