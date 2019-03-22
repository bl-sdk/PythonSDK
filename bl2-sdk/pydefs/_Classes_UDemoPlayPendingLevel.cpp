#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoPlayPendingLevel(py::module &m)
{
    py::class_< UDemoPlayPendingLevel,  UPendingLevel   >(m, "UDemoPlayPendingLevel")
        .def("StaticClass", &UDemoPlayPendingLevel::StaticClass, py::return_value_policy::reference)
          ;
}