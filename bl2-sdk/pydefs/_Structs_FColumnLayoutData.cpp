#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColumnLayoutData(py::object m)
{
    py::class_< FColumnLayoutData >(m, "FColumnLayoutData")
        .def_readwrite("HeaderHAlign", &FColumnLayoutData::HeaderHAlign)
        .def_readwrite("Header", &FColumnLayoutData::Header)
        .def_readwrite("Width", &FColumnLayoutData::Width)
        .def_readwrite("DataHAlign", &FColumnLayoutData::DataHAlign)
  ;
}