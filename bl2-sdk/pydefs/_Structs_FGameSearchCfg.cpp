#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameSearchCfg(py::object m)
{
    py::class_< FGameSearchCfg >(m, "FGameSearchCfg")
        .def_readwrite("GameSearchClass", &FGameSearchCfg::GameSearchClass)
        .def_readwrite("DefaultGameSettingsClass", &FGameSearchCfg::DefaultGameSettingsClass)
        .def_readwrite("SearchResultsProviderClass", &FGameSearchCfg::SearchResultsProviderClass)
        .def_readwrite("DesiredSettingsProvider", &FGameSearchCfg::DesiredSettingsProvider)
        .def_readwrite("SearchResults", &FGameSearchCfg::SearchResults)
        .def_readwrite("Search", &FGameSearchCfg::Search)
        .def_readwrite("SearchName", &FGameSearchCfg::SearchName)
  ;
}