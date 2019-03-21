#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInfoBarData(py::object m)
{
    py::class_< FInfoBarData >(m, "FInfoBarData")
        .def_readwrite("Type", &FInfoBarData::Type)
        .def_readwrite("Amount", &FInfoBarData::Amount)
  ;
}