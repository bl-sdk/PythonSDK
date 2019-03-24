#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloat(py::module &m)
{
    py::class_< UDistributionFloat,  UComponent   >(m, "UDistributionFloat")
		.def_static("StaticClass", &UDistributionFloat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionFloat::VfTable_FCurveEdInterface)
        .def("GetFloatValue", &UDistributionFloat::GetFloatValue)
          ;
}