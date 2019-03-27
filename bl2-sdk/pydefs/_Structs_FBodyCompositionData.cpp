#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyCompositionData(py::module &m)
{
    py::class_< FBodyCompositionData >(m, "FBodyCompositionData")
        .def_readwrite("Attachments", &FBodyCompositionData::Attachments)
        .def_readwrite("MaxExpectedComponents", &FBodyCompositionData::MaxExpectedComponents)
  ;
}