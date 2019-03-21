#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchQuery()
{
    class_< FOnlineGameSearchQuery >("FOnlineGameSearchQuery", no_init)
        .def_readwrite("OrClauses", &FOnlineGameSearchQuery::OrClauses)
        .def_readwrite("SortClauses", &FOnlineGameSearchQuery::SortClauses)
  ;
}