#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoPlayPendingLevel(py::object m)
{
    py::class_< UDemoPlayPendingLevel,  UPendingLevel   >(m, "UDemoPlayPendingLevel")
        .def("StaticClass", &UDemoPlayPendingLevel::StaticClass, py::return_value_policy::reference)
          ;
}