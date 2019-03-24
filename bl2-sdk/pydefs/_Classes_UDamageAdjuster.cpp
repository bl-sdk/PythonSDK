#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageAdjuster(py::module &m)
{
    py::class_< UDamageAdjuster,  UObject   >(m, "UDamageAdjuster")
		.def_static("StaticClass", &UDamageAdjuster::StaticClass, py::return_value_policy::reference)
        .def("AdjustDamage", &UDamageAdjuster::AdjustDamage)
          ;
}