#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMCPBase(py::module &m)
{
    py::class_< UMCPBase,  UObject   >(m, "UMCPBase")
		.def_static("StaticClass", &UMCPBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FTickableObject", &UMCPBase::VfTable_FTickableObject)
          ;
}