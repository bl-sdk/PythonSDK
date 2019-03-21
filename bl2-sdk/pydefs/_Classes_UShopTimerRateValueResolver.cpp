#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShopTimerRateValueResolver(py::object m)
{
    py::class_< UShopTimerRateValueResolver,  UAttributeValueResolver   >(m, "UShopTimerRateValueResolver")
        .def("StaticClass", &UShopTimerRateValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}