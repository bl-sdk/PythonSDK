#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomPropertyItemHandler(py::object m)
{
    py::class_< UCustomPropertyItemHandler,  UInterface   >(m, "UCustomPropertyItemHandler")
        .def("StaticClass", &UCustomPropertyItemHandler::StaticClass, py::return_value_policy::reference)
          ;
}