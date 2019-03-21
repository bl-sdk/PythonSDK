#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchCustom()
{
    py::class_< UWillowOnlineGameSearchCustom,  UWillowOnlineGameSearch   >("UWillowOnlineGameSearchCustom")
        .def("StaticClass", &UWillowOnlineGameSearchCustom::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}