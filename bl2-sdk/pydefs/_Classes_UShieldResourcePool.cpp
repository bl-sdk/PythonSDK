#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShieldResourcePool(py::object m)
{
    py::class_< UShieldResourcePool,  UResourcePool   >(m, "UShieldResourcePool")
        .def("StaticClass", &UShieldResourcePool::StaticClass, py::return_value_policy::reference)
          ;
}