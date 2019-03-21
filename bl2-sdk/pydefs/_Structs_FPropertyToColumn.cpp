#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPropertyToColumn()
{
    class_< FPropertyToColumn >("FPropertyToColumn", no_init)
        .def_readwrite("PropertyId", &FPropertyToColumn::PropertyId)
        .def_readwrite("ColumnId", &FPropertyToColumn::ColumnId)
  ;
}