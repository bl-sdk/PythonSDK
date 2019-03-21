#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch()
{
    py::class_< UWillowOnlineGameSearch,  UOnlineGameSearch   >("UWillowOnlineGameSearch")
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
        .def("StaticClass", &UWillowOnlineGameSearch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}