#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInfoBarData()
{
    py::class_< FInfoBarData >("FInfoBarData")
        .def_readwrite("Type", &FInfoBarData::Type)
        .def_readwrite("Amount", &FInfoBarData::Amount)
  ;
}