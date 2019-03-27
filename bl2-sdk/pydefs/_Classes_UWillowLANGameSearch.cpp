#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLANGameSearch(py::module &m)
{
    py::class_< UWillowLANGameSearch,  UWillowOnlineGameSearch   >(m, "UWillowLANGameSearch")
		.def_static("StaticClass", &UWillowLANGameSearch::StaticClass, py::return_value_policy::reference)
          ;
}