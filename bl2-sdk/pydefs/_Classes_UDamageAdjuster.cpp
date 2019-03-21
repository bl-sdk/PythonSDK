#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageAdjuster(py::object m)
{
    py::class_< UDamageAdjuster,  UObject   >(m, "UDamageAdjuster")
        .def("StaticClass", &UDamageAdjuster::StaticClass, py::return_value_policy::reference)
        .def("AdjustDamage", &UDamageAdjuster::AdjustDamage)
          ;
}