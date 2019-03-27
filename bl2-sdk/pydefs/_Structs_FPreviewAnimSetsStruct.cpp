#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPreviewAnimSetsStruct(py::module &m)
{
    py::class_< FPreviewAnimSetsStruct >(m, "FPreviewAnimSetsStruct")
        .def_readwrite("DisplayName", &FPreviewAnimSetsStruct::DisplayName)
        .def_readwrite("PreviewAnimSets", &FPreviewAnimSetsStruct::PreviewAnimSets)
  ;
}