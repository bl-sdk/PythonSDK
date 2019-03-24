#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_RandomFloat(py::module &m)
{
    py::class_< USeqVar_RandomFloat,  USeqVar_Float   >(m, "USeqVar_RandomFloat")
		.def_static("StaticClass", &USeqVar_RandomFloat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Min", &USeqVar_RandomFloat::Min)
        .def_readwrite("Max", &USeqVar_RandomFloat::Max)
          ;
}