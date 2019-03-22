#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchBroad(py::module &m)
{
    py::class_< UWillowOnlineGameSearchBroad,  UWillowOnlineGameSearch   >(m, "UWillowOnlineGameSearchBroad")
        .def("StaticClass", &UWillowOnlineGameSearchBroad::StaticClass, py::return_value_policy::reference)
          ;
}