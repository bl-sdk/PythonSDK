#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupDirector(py::module &m)
{
    py::class_< UInterpGroupDirector,  UInterpGroup   >(m, "UInterpGroupDirector")
		.def_static("StaticClass", &UInterpGroupDirector::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AttachedGroupName", &UInterpGroupDirector::AttachedGroupName)
          ;
}