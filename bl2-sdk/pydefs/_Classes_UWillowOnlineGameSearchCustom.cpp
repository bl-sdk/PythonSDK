#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchCustom(py::object m)
{
    py::class_< UWillowOnlineGameSearchCustom,  UWillowOnlineGameSearch   >(m, "UWillowOnlineGameSearchCustom")
        .def("StaticClass", &UWillowOnlineGameSearchCustom::StaticClass, py::return_value_policy::reference)
          ;
}