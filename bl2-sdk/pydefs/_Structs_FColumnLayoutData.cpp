#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColumnLayoutData()
{
    class_< FColumnLayoutData >("FColumnLayoutData", no_init)
        .def_readwrite("HeaderHAlign", &FColumnLayoutData::HeaderHAlign)
        .def_readwrite("Header", &FColumnLayoutData::Header)
        .def_readwrite("Width", &FColumnLayoutData::Width)
        .def_readwrite("DataHAlign", &FColumnLayoutData::DataHAlign)
  ;
}