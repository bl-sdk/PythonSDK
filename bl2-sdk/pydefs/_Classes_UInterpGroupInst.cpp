#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInst(py::module &m)
{
    py::class_< UInterpGroupInst,  UObject   >(m, "UInterpGroupInst")
		.def_static("StaticClass", &UInterpGroupInst::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Group", &UInterpGroupInst::Group)
        .def_readwrite("GroupActor", &UInterpGroupInst::GroupActor)
        .def_readwrite("TrackInst", &UInterpGroupInst::TrackInst)
          ;
}