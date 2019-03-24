#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchSpecific(py::module &m)
{
    py::class_< UWillowOnlineGameSearchSpecific,  UOnlineGameSearch   >(m, "UWillowOnlineGameSearchSpecific")
		.def_static("StaticClass", &UWillowOnlineGameSearchSpecific::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
          ;
}