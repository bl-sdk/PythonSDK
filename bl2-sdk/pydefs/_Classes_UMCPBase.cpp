#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMCPBase(py::object m)
{
    py::class_< UMCPBase,  UObject   >(m, "UMCPBase")
        .def_readwrite("VfTable_FTickableObject", &UMCPBase::VfTable_FTickableObject)
        .def("StaticClass", &UMCPBase::StaticClass, py::return_value_policy::reference)
          ;
}