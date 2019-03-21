#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColumnMetaData()
{
    class_< FColumnMetaData >("FColumnMetaData", no_init)
        .def_readwrite("Id", &FColumnMetaData::Id)
        .def_readwrite("Name", &FColumnMetaData::Name)
        .def_readwrite("ColumnName", &FColumnMetaData::ColumnName)
  ;
}