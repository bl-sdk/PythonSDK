#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchSpecific()
{
    py::class_< UWillowOnlineGameSearchSpecific,  UOnlineGameSearch   >("UWillowOnlineGameSearchSpecific")
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
        .def("StaticClass", &UWillowOnlineGameSearchSpecific::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}