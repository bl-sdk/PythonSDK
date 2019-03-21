#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSortFilterConfiguration()
{
    class_< FSortFilterConfiguration >("FSortFilterConfiguration", no_init)
        .def_readwrite("SortType", &FSortFilterConfiguration::SortType)
        .def_readwrite("FilterType", &FSortFilterConfiguration::FilterType)
        .def_readwrite("CategoryType", &FSortFilterConfiguration::CategoryType)
        .def_readwrite("SortTitleLookupKey", &FSortFilterConfiguration::SortTitleLookupKey)
  ;
}