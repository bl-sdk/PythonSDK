#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRelevanceUpdateStruct(py::module &m)
{
    py::class_< FRelevanceUpdateStruct >(m, "FRelevanceUpdateStruct")
        .def_readwrite("FromRealViewer", &FRelevanceUpdateStruct::FromRealViewer)
        .def_readwrite("SrcLocation", &FRelevanceUpdateStruct::SrcLocation)
        .def_readwrite("ToPawn", &FRelevanceUpdateStruct::ToPawn)
        .def_readwrite("TimeRequested", &FRelevanceUpdateStruct::TimeRequested)
        .def_readwrite("ShouldRemove", &FRelevanceUpdateStruct::ShouldRemove)
        .def_readwrite("NextUpdateTime", &FRelevanceUpdateStruct::NextUpdateTime)
  ;
}