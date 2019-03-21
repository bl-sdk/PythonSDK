#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchORClause()
{
    class_< FOnlineGameSearchORClause >("FOnlineGameSearchORClause", no_init)
        .def_readwrite("OrParams", &FOnlineGameSearchORClause::OrParams)
  ;
}