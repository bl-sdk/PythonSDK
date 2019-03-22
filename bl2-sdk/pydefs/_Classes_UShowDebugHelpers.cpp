#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShowDebugHelpers(py::module &m)
{
    py::class_< UShowDebugHelpers,  UObject   >(m, "UShowDebugHelpers")
        .def("StaticClass", &UShowDebugHelpers::StaticClass, py::return_value_policy::reference)
          ;
}