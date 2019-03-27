#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSortFilterConfiguration(py::module &m)
{
    py::class_< FSortFilterConfiguration >(m, "FSortFilterConfiguration")
        .def_readwrite("SortType", &FSortFilterConfiguration::SortType)
        .def_readwrite("FilterType", &FSortFilterConfiguration::FilterType)
        .def_readwrite("CategoryType", &FSortFilterConfiguration::CategoryType)
        .def_readwrite("SortTitleLookupKey", &FSortFilterConfiguration::SortTitleLookupKey)
  ;
}