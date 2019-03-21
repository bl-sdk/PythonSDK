#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClientFilterORClause()
{
    class_< FClientFilterORClause >("FClientFilterORClause", no_init)
        .def_readwrite("OrParams", &FClientFilterORClause::OrParams)
  ;
}