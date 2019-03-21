#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPreviewAnimSetsStruct()
{
    py::class_< FPreviewAnimSetsStruct >("FPreviewAnimSetsStruct")
        .def_readwrite("DisplayName", &FPreviewAnimSetsStruct::DisplayName)
        .def_readwrite("PreviewAnimSets", &FPreviewAnimSetsStruct::PreviewAnimSets)
  ;
}