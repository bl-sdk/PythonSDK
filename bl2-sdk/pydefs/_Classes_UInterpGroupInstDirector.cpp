#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstDirector(py::module &m)
{
    py::class_< UInterpGroupInstDirector,  UInterpGroupInst   >(m, "UInterpGroupInstDirector")
		.def_static("StaticClass", &UInterpGroupInstDirector::StaticClass, py::return_value_policy::reference)
          ;
}