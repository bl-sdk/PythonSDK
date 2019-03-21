#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColumnMetaData()
{
    py::class_< FColumnMetaData >("FColumnMetaData")
        .def_readwrite("Id", &FColumnMetaData::Id)
        .def_readwrite("Name", &FColumnMetaData::Name)
        .def_readwrite("ColumnName", &FColumnMetaData::ColumnName)
  ;
}