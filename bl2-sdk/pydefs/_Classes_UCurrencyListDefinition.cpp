#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurrencyListDefinition(py::module &m)
{
    py::class_< UCurrencyListDefinition,  UGBXDefinition   >(m, "UCurrencyListDefinition")
        .def_readwrite("Currencies", &UCurrencyListDefinition::Currencies)
        .def("StaticClass", &UCurrencyListDefinition::StaticClass, py::return_value_policy::reference)
          ;
}