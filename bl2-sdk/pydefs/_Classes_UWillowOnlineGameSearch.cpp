#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch(py::module &m)
{
    py::class_< UWillowOnlineGameSearch,  UOnlineGameSearch   >(m, "UWillowOnlineGameSearch")
        .def_readwrite("LevelVariance", &UWillowOnlineGameSearch::LevelVariance)
        .def_readwrite("MaxPing", &UWillowOnlineGameSearch::MaxPing)
          ;
}