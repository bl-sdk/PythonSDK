#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchSortClause()
{
    class_< FOnlineGameSearchSortClause >("FOnlineGameSearchSortClause", no_init)
        .def_readwrite("EntryId", &FOnlineGameSearchSortClause::EntryId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchSortClause::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchSortClause::EntryType)
        .def_readwrite("SortType", &FOnlineGameSearchSortClause::SortType)
  ;
}