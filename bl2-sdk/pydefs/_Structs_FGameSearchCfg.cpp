#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameSearchCfg()
{
    class_< FGameSearchCfg >("FGameSearchCfg", no_init)
        .def_readwrite("GameSearchClass", &FGameSearchCfg::GameSearchClass)
        .def_readwrite("DefaultGameSettingsClass", &FGameSearchCfg::DefaultGameSettingsClass)
        .def_readwrite("SearchResultsProviderClass", &FGameSearchCfg::SearchResultsProviderClass)
        .def_readwrite("DesiredSettingsProvider", &FGameSearchCfg::DesiredSettingsProvider)
        .def_readwrite("SearchResults", &FGameSearchCfg::SearchResults)
        .def_readwrite("Search", &FGameSearchCfg::Search)
        .def_readwrite("SearchName", &FGameSearchCfg::SearchName)
  ;
}