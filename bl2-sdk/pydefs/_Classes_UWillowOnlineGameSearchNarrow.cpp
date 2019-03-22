#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchNarrow(py::module &m)
{
    py::class_< UWillowOnlineGameSearchNarrow,  UWillowOnlineGameSearch   >(m, "UWillowOnlineGameSearchNarrow")
        .def("StaticClass", &UWillowOnlineGameSearchNarrow::StaticClass, py::return_value_policy::reference)
          ;
}