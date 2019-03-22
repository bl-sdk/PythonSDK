#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchResult(py::module &m)
{
    py::class_< FOnlineGameSearchResult >(m, "FOnlineGameSearchResult")
        .def_readwrite("GameSettings", &FOnlineGameSearchResult::GameSettings)
        .def_readwrite("PlatformData", &FOnlineGameSearchResult::PlatformData)
  ;
}