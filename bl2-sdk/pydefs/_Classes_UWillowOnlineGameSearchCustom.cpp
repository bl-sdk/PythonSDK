#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchCustom(py::module &m)
{
    py::class_< UWillowOnlineGameSearchCustom,  UWillowOnlineGameSearch   >(m, "UWillowOnlineGameSearchCustom")
		.def_static("StaticClass", &UWillowOnlineGameSearchCustom::StaticClass, py::return_value_policy::reference)
          ;
}