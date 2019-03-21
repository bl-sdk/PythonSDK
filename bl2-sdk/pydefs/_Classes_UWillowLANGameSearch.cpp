#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLANGameSearch(py::object m)
{
    py::class_< UWillowLANGameSearch,  UWillowOnlineGameSearch   >(m, "UWillowLANGameSearch")
        .def("StaticClass", &UWillowLANGameSearch::StaticClass, py::return_value_policy::reference)
          ;
}