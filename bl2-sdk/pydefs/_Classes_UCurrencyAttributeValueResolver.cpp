#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurrencyAttributeValueResolver(py::object m)
{
    py::class_< UCurrencyAttributeValueResolver,  UAttributeValueResolver   >(m, "UCurrencyAttributeValueResolver")
        .def_readwrite("FormOfCurrency", &UCurrencyAttributeValueResolver::FormOfCurrency)
        .def("StaticClass", &UCurrencyAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}