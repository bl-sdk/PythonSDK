#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyCompositionData()
{
    py::class_< FBodyCompositionData >("FBodyCompositionData")
        .def_readwrite("Attachments", &FBodyCompositionData::Attachments)
        .def_readwrite("MaxExpectedComponents", &FBodyCompositionData::MaxExpectedComponents)
  ;
}