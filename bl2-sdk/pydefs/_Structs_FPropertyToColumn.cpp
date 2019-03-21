#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPropertyToColumn()
{
    py::class_< FPropertyToColumn >("FPropertyToColumn")
        .def_readwrite("PropertyId", &FPropertyToColumn::PropertyId)
        .def_readwrite("ColumnId", &FPropertyToColumn::ColumnId)
  ;
}